// =================================================================================
// Includes 
// =================================================================================
#include "Includes.h"
#include "natives.h"

// =================================================================================
// Category By Name 
// =================================================================================
Natives::eNativeCategory Natives::FindCategoryByName(char* sName)
{
	// find category
	eNativeCategory eCategory = NATIVE_UNKNOWN;
	for (int i = 0; i < _NATIVE_ENUM_SIZE; i++)
	{
		if (strcmp(sName, CategoryNames[i]) == 0)
		{
			return (eNativeCategory)i;
		}
	}

	// unknown
	return NATIVE_UNKNOWN;
}