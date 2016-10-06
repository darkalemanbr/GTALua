// =================================================================================
// Includes 
// =================================================================================
#include "Includes.h"
#include "GTALua.h"
#include "lua/Lua.h"
#include "ScriptEngine/natives.h"
#include "ScriptEngine/rage.h"
#include "ScriptBinds.h"
#include "thirdparty/ScriptHookV/ScriptHookV.h"
#include "keyboard.h"

// Imports
typedef void(*RegisterThread_Proxy_t)();

// =================================================================================
// Sleep 
// =================================================================================
void LB_ThreadSleep(UINT s)
{
	ScriptHook::ScriptWait(s);
}

// =================================================================================
// Init Native
// =================================================================================
void LB_InitNative(Natives::NativeReg* pNative)
{
	ScriptHook::NativeInit(pNative->hHash);
}

// =================================================================================
// Start Lua Thread
// Called from ScriptHookV, but redirected through ASI Addon
// =================================================================================
vector<ScriptBinds::ScriptThread::LuaScriptThread*> vScriptThreadQueue;
void Lua_StartThread()
{
#ifdef HAS_ONLINE_CAPABILITIES
	printf("Enabling MP DLC vehicles ... ");
	UINT64 *GlobalPtr = ScriptHook::GetGlobalPtr(MP_VEHICLE_GLOBAL);
	*GlobalPtr = 1;
	printf("Done: %0llx = 1\n", (DWORD64)GlobalPtr);
#endif

	ScriptHook::CanRegisterThreads = false;

	// Update Queue
	if (vScriptThreadQueue.size() == 0) return;
	ScriptBinds::ScriptThread::LuaScriptThread* pScriptThread = vScriptThreadQueue.at(0);
	vScriptThreadQueue.erase(vScriptThreadQueue.begin());

	// Start Thread
	try
	{
		pScriptThread->Start();
	}
	catch (...)
	{
		printf("[%s] Script Thread caused an unexpected exception!\n", APP_NAME);
	}
}

// =================================================================================
// Register Thread 
// Returns:
//   -1: Fail, already registered
//    1: Add to main thread
//    2: Addon has ASI
// =================================================================================
int LB_RegisterThread(ScriptBinds::ScriptThread::LuaScriptThread* pThread)
{
	// Only register once
	// (Autorefresh)
	for (vector<ScriptBinds::ScriptThread::LuaScriptThread*>::iterator it = vScriptThreadQueue.begin(); it != vScriptThreadQueue.end(); ++it)
		if (*it == pThread) return -1;

	// Main Thread
	if (pThread->m_bIsMainThread)
	{
		vScriptThreadQueue.push_back(pThread);
		ScriptHook::ScriptRegister(GetModuleHandle(MODULE_NAME), Lua_StartThread);
		ScriptHook::KeyboardHandlerRegister(OnKeyboardMessage);
		return 2;
	}

	// Get Module
	char buf[256];
	sprintf(buf, MODULE_EXTENSION, pThread->GetName().c_str());
	HMODULE hASIAddon = GetModuleHandle(buf);

	// Check
	if (hASIAddon == NULL && !pThread->m_bIsMainThread)
	{
		pThread->m_bRunsOnMainThread = true;
		return 1;
	}

	// RegisterThread Proxy
	RegisterThread_Proxy_t pRegisterThreadProxy = (RegisterThread_Proxy_t) GetProcAddress(hASIAddon, "RegisterThread_Proxy");
	if (hASIAddon != NULL && pRegisterThreadProxy == NULL)
	{
		char error_buf[512];
		sprintf(error_buf, "[%s] %s: Failed to import RegisterThread_Proxy!\n", APP_NAME, buf);
		lua->PushString(error_buf);
		throw luabind::error(lua->State());
	}

	// Register
	vScriptThreadQueue.push_back(pThread);
	ScriptHook::ScriptRegister(hASIAddon, pRegisterThreadProxy);
	return 2;
}

// =================================================================================
// State Check
// =================================================================================
bool LB_CanRegisterThreads()
{
	return ScriptHook::CanRegisterThreads;
}

// =================================================================================
// Bind 
// =================================================================================
void ScriptBinds::ScriptHookBind::Bind()
{
	luabind::module(lua->State(), "scripthookv")
	[
		luabind::def("CanRegisterThreads", LB_CanRegisterThreads),

		luabind::def("RegisterThread", LB_RegisterThread),
		luabind::def("ThreadSleep", LB_ThreadSleep),
		luabind::def("InitNative", LB_InitNative),
		luabind::def("NativePushInt", ScriptHook::PushValue<__int32>),
		luabind::def("NativePushFloat", ScriptHook::PushValue<float>),
		luabind::def("NativePushVector", ScriptHook::PushVector),
		luabind::def("NativePushBool", ScriptHook::PushValue<bool>),
		luabind::def("NativePushString", ScriptHook::PushValue<const char*>),
		luabind::def("NativePushMemoryBlock", ScriptHook::PushMemory),
		luabind::def("NativeCall_GetInt", ScriptHook::Call<__int32>),
		luabind::def("NativeCall_GetFloat", ScriptHook::Call<float>),
		luabind::def("NativeCall_GetVector", ScriptHook::Call<rage::CVector>),
		luabind::def("NativeCall_GetBool", ScriptHook::Call<bool>),
		luabind::def("NativeCall_GetString", ScriptHook::Call<const char*>),
		luabind::def("NativeCall_Void", ScriptHook::CallVoid),
		luabind::def("GetGlobal", ScriptHook::GetGlobal),
		luabind::def("SetGlobal", ScriptHook::SetGlobal),

		luabind::def("GetGameTimer", ScriptHook::GetGameTimer)
	];
}