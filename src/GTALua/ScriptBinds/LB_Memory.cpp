// =================================================================================
// Includes 
// =================================================================================
#include "Includes.h"
#include "lua/Lua.h"
#include "ScriptBinds.h"

using namespace ScriptBinds::Memory;

// =================================================================================
// Memory 
// =================================================================================
MemoryBlock::MemoryBlock(int iSize)
{
	m_iSize = iSize;
	m_pMemory = (int*)malloc(iSize);
	if (m_pMemory != NULL)
		memset(m_pMemory, 0, iSize);
}
MemoryBlock::~MemoryBlock()
{
	Release();
}
void MemoryBlock::Release()
{
	if (m_iSize > 0 && m_pMemory != NULL)
	{
		delete m_pMemory;
		m_pMemory = NULL;
	}
	m_iSize = 0;
}

// =================================================================================
// Valid-Check 
// =================================================================================
bool MemoryBlock::IsValid()
{
	return m_iSize > 0 && m_pMemory != NULL;
}

// =================================================================================
// Additional Functions 
// =================================================================================
struct MemoryBlock_AdditionalFunctions : public MemoryBlock
{
	static string __tostring(MemoryBlock* pMemoryBlock) {
		return "CMemoryBlock";
	}
	static string __type(MemoryBlock* pNativeReg) {
		return "CMemoryBlock";
	}
};

// =================================================================================
// Bind
// =================================================================================
void ScriptBinds::Memory::Bind()
{
	luabind::module(lua->State())
	[
		luabind::class_<MemoryBlock>("CMemoryBlock")
		.def(luabind::constructor<int>())
		.def("Release", &MemoryBlock::Release)
		.def("IsValid", &MemoryBlock::IsValid)
		.def("WriteByte", &MemoryBlock::Write<BYTE>)		// unsigned char
		.def("WriteInt64", &MemoryBlock::Write<INT>)		// int
		.def("WriteInt32", &MemoryBlock::Write<WORD>)		// unsigned short
		.def("WriteFloat", &MemoryBlock::Write<FLOAT>)		// float
		.def("WriteDWORD32", &MemoryBlock::Write<DWORD>)	// unsigned long
		.def("ReadByte", &MemoryBlock::Read<BYTE>)			// unsigned char
		.def("ReadInt64", &MemoryBlock::Read<DWORD>)		// int
		.def("ReadInt32", &MemoryBlock::Read<WORD>)			// unsigned short
		.def("ReadFloat", &MemoryBlock::Read<FLOAT>)		// float
		.def("ReadDWORD32", &MemoryBlock::Read<DWORD>)		// unsigned long
		.def("__tostring", &MemoryBlock_AdditionalFunctions::__tostring)
		.def("__type", &MemoryBlock_AdditionalFunctions::__type)
	];
}