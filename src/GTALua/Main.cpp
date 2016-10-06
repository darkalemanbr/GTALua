// =================================================================================
// Includes 
// =================================================================================
#include "Includes.h"
#include "GTALua.h"
#include "lua/Lua.h"
#include "Memory/Memory.h"
#include "ScriptEngine/rage.h"
#include "ScriptBinds/ScriptBinds.h"
#include "UTIL/UTIL.h"
#include "GameEvents/GameEvents.h"
#include "thirdparty/ScriptHookV/ScriptHookV.h"
#include "keyboard.h"

// =================================================================================
// CTor/DTor 
// =================================================================================
GTALua::GTALua()
{
	// Active
	m_bActive = true;
}
GTALua::~GTALua()
{
	// Update-Thread
	m_bActive = false;

	// Unregister Threads
	ScriptHook::ScriptUnregister(GetModuleHandle(MODULE_NAME));
	ScriptHook::KeyboardHandlerUnregister(OnKeyboardMessage);


	// Lua
	if (lua != NULL)
		lua->Destroy();
	
	// Memory & Hooking
	Memory::CleanUp();

	// Console
	DestroyWindow(GetConsoleWindow());
}

// =================================================================================
// Init
// Called right after the CTor
// =================================================================================
void GTALua::Init()
{
	// Main Config
	LoadGTALuaIni();

	// Attach Console
	if (m_sConfig.bConsole_Enabled)
	{
		UTIL::Attach_Console(m_sConfig.bConsole_AutomaticPosition, m_sConfig.iConsole_PosX, m_sConfig.iConsole_PosY, m_sConfig.iConsole_SizeX, m_sConfig.iConsole_SizeY);
	}

	// Prepare Memory
	Memory::Init();
	GameMemory::Init();

	// Configuration Files
	LoadNativesINI();
	LoadCallLayoutsINI();
}

// =================================================================================
// Init 
// This is called shortly before the game window is created
// At this point the exe is already unpacked, safe to do anything we want
// =================================================================================
void GTALua::ProperInit()
{
	printf("[%s] Initializing ...\n", APP_NAME);

	// Hooks
	GameMemory::InstallHooks();
	
	// Game Events
	GameEvents::Install::Entity();
	GameEvents::Install::OnPedCreated();
	GameEvents::Install::OnVehicleCreated();

	// Initialize Lua
	lua = new LuaManager();
	lua->Init();

	/*// Initialize AutoRefresh
	LuaFunctions::Autorefresh::Init();
	LuaFunctions::Autorefresh::Update();*/

	// Script Binds
	try
	{
		// General
		ScriptBinds::GeneralFunctions::Bind();
		ScriptBinds::FileModule::Bind();

		// Script Engine
		ScriptBinds::ScriptThread::Bind();
		ScriptBinds::ScriptHookBind::Bind();
		ScriptBinds::NativesWrapper::Bind();
		ScriptBinds::Types::Bind();
		ScriptBinds::Memory::Bind();
	}
	catch (std::exception& e)
	{
		printf("[%s] Failed to bind functions!\n", APP_NAME);
		lua->PrintErrorMessage(const_cast<char*>(e.what()), true, true);
	}
	catch (...)
	{
		printf("[%s] Failed to bind functions! (unknown exception)\n", APP_NAME);
	}

	// Include main.lua
	if (!lua->IncludeFile("GTALua/internal/main.lua"))
	{
		printf("[%s] Failed to include main.lua! %s will not work properly!\n", APP_NAME, APP_NAME);
		return;
	}
}

// =================================================================================
// Addons 
// =================================================================================
void GTALua::InitAddons()
{
	if (lua == NULL) return;

	// Queued Addons
	printf("\n");
	API::LoadQueuedAddons();

	// Run _main
	lua->GetGlobal("_main");
	if (!lua->ProtectedCall(0, 1))
	{
		lua->Pop(2);
		printf("[%s] Failed to run _main!\n", APP_NAME);
		return;
	}
	if (!lua->GetBool())
	{
		lua->Pop(2);
		printf("[%s] Failed to load addons!\n", APP_NAME);
		return;
	}
	lua->Pop(2);

	// Success
	printf(CONSOLE_SEPARATOR);
	printf("[%s] Initialized!\n", APP_NAME);
	printf(CONSOLE_SEPARATOR);
	printf("\n");
}

// =================================================================================
// Update 
// =================================================================================
void GTALua::Update()
{
	// AutoRefresh
	/*if (LuaFunctions::Autorefresh::IsInitialized())
		LuaFunctions::Autorefresh::Update();*/

	// Console Input
	ProcessConsoleInput();
}

// =================================================================================
// Update Loop 
// =================================================================================
void GTALua::UpdateLoop()
{
	while (m_bActive)
	{
		Update();
	}
}