// =================================================================================
// UTIL
// =================================================================================
namespace UTIL
{
	void Attach_Console(bool bAutomatic, int PosX, int PosY, int SizeX, int SizeY);

	void ReplaceString(string& str, const string& from, const string& to);
	void ParseFilePath(string& path); // replaces \/ /\ // \\ so they can be compared to other paths
	string SplitFilename(string& str);
	vector<string> SplitString(string str, string del);

	void Lowercase(char* sText);
	void Uppercase(char* sText);
};

// =================================================================================
// Include
// =================================================================================
#include "IniFile.h"
#include "Mutex.h"