// ====================================================================================================
// Includes
// ====================================================================================================
#include "Includes.h"
#include "../Lua.h"
#include <sstream>
#include <vector>

using namespace std;

// ====================================================================================================
// Utility Functions
// ====================================================================================================
vector<string>& StringExplode(const string &s, char* delim, vector<string> &elems)
{
	stringstream ss(s);
	string item;
	char tmp = *delim;
	while (getline(ss, item, tmp)) {
		elems.push_back(item);
	}
	return elems;
}
vector<char*> StringExplode(char *s, char *delim)
{
	return vector<char*>();
}

// ====================================================================================================
// General
// ====================================================================================================
lua_Debug LuaManager::GetDebugInformation()
{
	lua_Debug rv;
	lua_getstack(State(), 1, &rv);
	return rv;
}

// ====================================================================================================
// File Operations
// ====================================================================================================
char* LuaManager::DebugGetFilename()
{
	lua_State* L = State();

	lua_Debug ar1;
	lua_getstack(L, 1, &ar1);
	lua_getinfo(L, "f", &ar1);
	lua_Debug ar2;
	lua_getinfo(L, ">S", &ar2);
	char* filename = const_cast<char*>(ar2.source);

	return filename;
}
void LuaManager::DebugGetPath(char *path)
{
	string filename(DebugGetFilename());
	vector<string> exp1;
	StringExplode(filename, "@", exp1);

//	if (exp1.size() != 2) { return "?"; }
	if (exp1.size() != 2) { path = "?"; exit(0); }

	string fullpath(exp1.at(1));
	vector<string> exp2;
	StringExplode(fullpath, "/", exp2);

//	if (exp2.size() <= 1) { return ""; }
	if (exp2.size() <= 1) { path = ""; exit(0); }

//	char path[364];
	sprintf(path, "");

	int iIndex = 1;
	for (vector<string>::iterator it = exp2.begin(); it != exp2.end(); ++it)
	{
		string item = *it;
		if (iIndex < exp2.size())
		{
			char deli[12];
			sprintf(deli, "/");
			if (strcmp(path, "") == 0) sprintf(deli, "");
			sprintf(path, "%s%s%s", path, deli, item.c_str());
		}

		iIndex++;
	}

	sprintf(path, "%s/", path);
//	return path;
}

// ====================================================================================================
// Dump Stack
// ====================================================================================================
void LuaManager::DumpStack() {
	int index = lua_gettop(m_pState);
	while (index > 0) {
		int ltype = lua_type(m_pState, index);
		printf("%i: ", index);
		switch (ltype) {
			case LUA_TSTRING:
			{
				const char* s = lua_tostring(m_pState, index);
				if (s == NULL) s = "(null str)";
				printf("%s", s);
			}
			break;
			case LUA_TBOOLEAN:
				printf("%s", lua_toboolean(m_pState, index) ? "true" : "false");
			break;
			case LUA_TNUMBER:
				printf("%g", lua_tonumber(m_pState, index));
			break;
			case LUA_TTHREAD:
				printf("[thread]");
			break;
			default:
			{
				lua->GetGlobal("type");
				lua->PushValue(index);
				lua->ProtectedCall(1, 1);
				printf("[type: %s]", lua->GetString());
				lua->Pop(2);
			}
			break;
		}
		printf("\n");
		index--;
	}
	printf("------------------------\n");
}
