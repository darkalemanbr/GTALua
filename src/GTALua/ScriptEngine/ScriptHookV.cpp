// =================================================================================
// Includes 
// =================================================================================
#include "Includes.h"
#include "GTALua.h"
#include "lua/Lua.h"
#include "Memory/Memory.h"
#include "rage.h"
#include "UTIL/UTIL.h"
#include "ScriptBinds/ScriptBinds.h"
#include "thirdparty/ScriptHookV/inc/main.h"
#include "thirdparty/ScriptHookV/ScriptHookV.h"

// =================================================================================
// ScriptHook Member 
// =================================================================================
bool ScriptHook::CanRegisterThreads = true;

// =================================================================================
// Push Memory 
// =================================================================================
void ScriptHook::PushMemory(ScriptBinds::Memory::MemoryBlock* pMemBlock)
{
	if (pMemBlock == NULL || !pMemBlock->IsValid())
	{
		lua->PushString("ScriptHook::PushMemory failed! Invalid CMemoryBlock passed!");
		throw luabind::error(lua->State());
	}
	PushValue(pMemBlock->GetMemoryPointer()); 
}

int ScriptHook::GetGameTimer()
{
	NativeInit(0x9CD27B0045628463);	// GET_GAME_TIMER
	return Call<int>();
}

// =================================================================================
// Wrapper
// I don't want the imported functions to be global
// =================================================================================
UINT64 *ScriptHook::GetGlobalPtr(int globalId)
{
	return getGlobalPtr(globalId);
}
void ScriptHook::ScriptWait(DWORD dwTime)
{
	scriptWait(dwTime);
}
void ScriptHook::ScriptRegister(HMODULE hModule, ScriptHook_Callback ptr)
{
	scriptRegister(hModule, ptr);
}
void ScriptHook::ScriptUnregister(HMODULE hModule)
{
	scriptUnregister(hModule);
}

void ScriptHook::NativeInit(UINT64 hash)
{
	nativeInit(hash);
}
void ScriptHook::NativePush64(UINT64 val)
{
	nativePush64(val);
}
PUINT64 ScriptHook::NativeCall()
{
	return nativeCall();
}

int ScriptHook::GetGlobal(int GlobalId, int Offset)
{
	UINT64 *result = ScriptHook::GetGlobalPtr(GlobalId);
	result += Offset;
	return *result;
}

void ScriptHook::SetGlobal(int GlobalId, int Offset, int Value)
{
	UINT64 *result = ScriptHook::GetGlobalPtr(GlobalId);
	result += Offset;
	*result = Value;
}

void ScriptHook::KeyboardHandlerRegister(KeyboardHandler handler)
{
	keyboardHandlerRegister(handler);
}

void ScriptHook::KeyboardHandlerUnregister(KeyboardHandler handler)
{
	keyboardHandlerUnregister(handler);
}
