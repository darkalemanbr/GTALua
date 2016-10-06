// ====================================================================================================
// Includes
// ====================================================================================================
#include "../Includes.h"
#include "Lua.h"
#include "GeneralFunctions.h"
#include "ClassWrappers.h"
#include "UTIL/UTIL.h"

// ====================================================================================================
// include
// ====================================================================================================
void LuaFunctions::include(std::string file) throw(...)
{
	// Block inside of threads
	if (strcmp(lua_typename(lua->State(), lua_type(lua->State(), 1)), "thread") == 0)
	{
		luaL_error(lua->State(), "include cannot be run inside of a thread");
		return;
	}

	//
	char currentpath[364];
	lua->DebugGetPath(currentpath);
	luaL_checkstring(lua->State(), 1);

	char path[364];
	sprintf(path, "%s%s", currentpath, file.c_str());
	std::string filepath(path);
	UTIL::ParseFilePath(filepath);
	
	// Load File
	int status = luaL_loadfile(lua->State(), const_cast<char*>(filepath.c_str()));

	// Check for errors
	if (status != 0)
	{
		throw luabind::error(lua->State());
		return;
	}

	// Execute File
	bool bStatus = lua->ProtectedCall(0, LUA_MULTRET);
	lua->Pop();
}

// ====================================================================================================
// Register Functions
// ====================================================================================================
void LuaFunctions::RegisterLuaFunctions() 
{
	// General
	luabind::module(lua->State()) [
		luabind::def("include", &LuaFunctions::include)
	];
}