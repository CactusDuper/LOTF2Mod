#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// ControlRigBlueprintGeneratedClass CR_Player_LookAt.CR_Player_LookAt_C
// (None)

class UClass* UCR_Player_LookAt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CR_Player_LookAt_C");

	return Clss;
}


// CR_Player_LookAt_C CR_Player_LookAt.Default__CR_Player_LookAt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCR_Player_LookAt_C* UCR_Player_LookAt_C::GetDefaultObj()
{
	static class UCR_Player_LookAt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCR_Player_LookAt_C*>(UCR_Player_LookAt_C::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass CR_Player_LookAt.RigVMMemory_Literal
// (None)

class UClass* URigVMMemory_Literal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Literal");

	return Clss;
}


// RigVMMemory_Literal CR_Player_LookAt.Default__RigVMMemory_Literal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Literal* URigVMMemory_Literal::GetDefaultObj()
{
	static class URigVMMemory_Literal* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Literal*>(URigVMMemory_Literal::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass CR_Player_LookAt.RigVMMemory_Work
// (None)

class UClass* URigVMMemory_Work::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Work");

	return Clss;
}


// RigVMMemory_Work CR_Player_LookAt.Default__RigVMMemory_Work
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Work* URigVMMemory_Work::GetDefaultObj()
{
	static class URigVMMemory_Work* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Work*>(URigVMMemory_Work::StaticClass()->DefaultObject);

	return Default;
}

}

