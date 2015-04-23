// =================================================================================
// Includes 
// =================================================================================
#include "Includes.h"
#include "GTALua.h"
#include "lua/Lua.h"
#include "ScriptEngine/ScriptEngine.h"
#include "ScriptBinds.h"

// =================================================================================
// console.Log 
// =================================================================================
int console_Log(lua_State* L)
{
	printf("[Lua] ");

	int iArgumentCount = lua->Top();
	for (int i = 1; i <= iArgumentCount; i++)
	{
		luabind::object obj(luabind::from_stack(lua->State(), i));

		switch (luabind::type(obj))
		{
		case LUA_TSTRING:
			printf("%s", luabind::object_cast<const char*>(obj));
			break;
		case LUA_TNUMBER:
			printf("%i", luabind::object_cast<int>(obj));
			break;
		case LUA_TNIL:
			printf("nil");
			break;
		case LUA_TTABLE:
			printf("[table]");
			break;
		default:
			{
				// Tables/userdata: read __tostring
				if (lua->IsTable(i) || lua_isuserdata(L, i))
				{
					string sObject;
					bool bHasString = true;
					
					// call __tostring
					try
					{
						sObject = luabind::call_member<string>(obj, "__tostring");
					}
					catch (...) {
						bHasString = false;
					};
					
					// print
					if (bHasString)
					{
						printf("%s", sObject.c_str());
						break;
					}
				}
				
				// print type
				string t = luabind::call_function<string>(lua->State(), "type", obj);
				printf("[type: %s]", t.c_str());
			}
		}
	}

	printf("\n");

	return 0;
}

// =================================================================================
// Bind 
// =================================================================================
void ScriptBinds::Console::Bind()
{
	/*
	luabind::module(lua->State(), "console")
		[
			luabind::def("test", NULL)
		];*/

	// luabind doesn't support variable arguments
	static const luaL_reg console_table[] =
	{
		{ "Log", console_Log },
		{ NULL, NULL }
	};
	luaL_register(lua->State(), "console", console_table);

	// redirect print to console.Log
	// again, va not supported
	lua_register(lua->State(), "print", console_Log);
}