// =================================================================================
// Includes 
// =================================================================================
#include "Includes.h"
#include "GTALua.h"
#include "lua/Lua.h"
#include "Memory/Memory.h"

// =================================================================================
// Global 
// =================================================================================
GTALua* g_pGTALua = NULL;

// =================================================================================
// Init 
// =================================================================================
void Init()
{
	// Init
	g_pGTALua = new GTALua();
	g_pGTALua->Init();
}

// =================================================================================
// Init (Thread)
// =================================================================================
void ThreadInit()
{	// Wait for GTALua
	while (g_pGTALua == NULL)
		Sleep(200);

	// Update
	g_pGTALua->UpdateLoop();
}

#ifdef HAS_ONLINE_CAPABILITIES
void BypassOnlineModelRequestBlock()
{
	printf("Patching Online Model Request block ... ");
	UINT64 dwGetModelTableFunctionAddress = GameMemory::Find((PBYTE)"\x48\x8B\xC8\xFF\x52\x30\x84\xC0\x74\x05\x48", "xxxxxxxxxxx");
	if (dwGetModelTableFunctionAddress != NULL)
	{
		*reinterpret_cast<unsigned short*>(dwGetModelTableFunctionAddress + 0x8) = 0x9090;
		printf("Done.\n");
	} else {
		printf("Error.\n");
		printf("Failed to find model table signature");
	}
	printf("Model Request Block     : %016llx\n", dwGetModelTableFunctionAddress);
}
#endif

// =================================================================================
// DLLMain 
// =================================================================================
BOOL __stdcall DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpReserved)
{
	// Startup
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		Init();
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)ThreadInit, 0, 0, 0);
#ifdef HAS_ONLINE_CAPABILITIES
		BypassOnlineModelRequestBlock();
#endif
	}

	// Cleanup
	if (dwReason == DLL_PROCESS_DETACH && g_pGTALua != NULL)
	{
		delete g_pGTALua;
		g_pGTALua = NULL;
	}

	// Success
	return TRUE;
}