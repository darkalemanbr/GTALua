// =================================================================================
// Includes 
// =================================================================================
#include "Includes.h"
#include "lua/Lua.h"
#include "ScriptBinds.h"
#include "Memory/Memory.h"
#include "keyboard.h"

const int KEYS_SIZE = 255;

struct {
	DWORD time;
	BOOL isWithAlt;
	BOOL wasDownBefore;
	BOOL isUpNow;
} keyStates[KEYS_SIZE];

// =================================================================================
// Keyboard
// =================================================================================

void OnKeyboardMessage(DWORD key, WORD repeats, BYTE scanCode, BOOL isExtended, BOOL isWithAlt, BOOL wasDownBefore, BOOL isUpNow)
{
	if (key < KEYS_SIZE)
	{
		keyStates[key].time = GetTickCount();
		keyStates[key].isWithAlt = isWithAlt;
		keyStates[key].wasDownBefore = wasDownBefore;
		keyStates[key].isUpNow = isUpNow;
	}
}

const int NOW_PERIOD = 100, MAX_DOWN = 5000; // ms

bool IsKeyDown(DWORD key)
{
	return (key < KEYS_SIZE) ? ((GetTickCount() < keyStates[key].time + MAX_DOWN) && !keyStates[key].isUpNow) : false;
}

bool IsKeyJustDown(DWORD key, bool exclusive)
{
	bool b = (key < KEYS_SIZE) ? (GetTickCount() < keyStates[key].time + NOW_PERIOD && !keyStates[key].wasDownBefore) : false;
	if (b && exclusive)
		ResetKeyState(key);
	return b;
}

bool IsKeyJustUp(DWORD key, bool exclusive)
{
	bool b = (key < KEYS_SIZE) ? (GetTickCount() < keyStates[key].time + NOW_PERIOD && keyStates[key].isUpNow) : false;
	if (b && exclusive)
		ResetKeyState(key);
	return b;
}

void ResetKeyState(DWORD key)
{
	if (key < KEYS_SIZE)
		memset(&keyStates[key], 0, sizeof(keyStates[0]));
}

// =================================================================================
// type 
// =================================================================================

string LB_type(luabind::object obj)
{
	// check for table/userdata
	int ttype = luabind::type(obj);
	if (ttype == LUA_TTABLE || ttype == LUA_TUSERDATA)
	{
		// call member __type
		const char* sType = NULL;
		try
		{
			
			sType = luabind::call_member<const char*>(obj, "__type");
		}
		catch (luabind::error e)
		{
			lua->Pop(1);
			sType = NULL;
		}
		catch (...) {
			sType = NULL;
		};

		// check & return
		if (sType != NULL)
			return string(sType);
	}

	// call typename
	const char* t = lua_typename(lua->State(), ttype);
	return t;
}

// =================================================================================
// Script Engine
// =================================================================================

bool LB_IsScriptEngineInitialized()
{
	return GameMemory::ScriptEngineInitialized;
}

// =================================================================================
// print 
// =================================================================================

static int LB_print(lua_State *L) {
	int n = lua_gettop(L);  /* number of arguments */
	int i;
	lua_getglobal(L, "tostring");
	for (i = 1; i <= n; i++) {
		const char *s;
		size_t l;
		lua_pushvalue(L, -1);  /* function to be called */
		lua_pushvalue(L, i);   /* value to print */
		int r = lua_pcall(L, 1, 1, 0);
		if (r != 0)
		{
			lua_pop(L, 1);
			lua_getglobal(L, "type");
			lua_pushvalue(L, i);
			lua_pcall(L, 1, 1, 0);
			printf("[type: %s]", lua_tostring(L, -1));
			lua_pop(L, 1);
			continue;
		}
		s = lua_tolstring(L, -1, &l);  /* get result */
		if (s == NULL)
			return luaL_error(L, "'tostring' must return a string to 'print'");
		if (i>1) printf(" ");
		printf(s, l);
		lua_pop(L, 1);  /* pop result */
	}
	printf("\n");
	return 0;
}

// =================================================================================
// Binds
// =================================================================================

void ScriptBinds::GeneralFunctions::Bind()
{
	luabind::module(lua->State())
	[
		luabind::def("IsKeyDown", IsKeyDown),
		luabind::def("IsKeyJustDown", IsKeyJustDown),
		luabind::def("IsKeyJustUp", IsKeyJustUp),

		luabind::def("type", LB_type),

		luabind::def("IsScriptEngineInitialized", LB_IsScriptEngineInitialized)
	];

	// print (luabind doesnt support va)
	lua_register(lua->State(), "print", LB_print);

	// like include
	LuaFunctions::RegisterLuaFunctions();
}