#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// RigVMMemoryStorageGeneratorClass CR_DeepSparrow_Facial_Tier1.RigVMMemory_Work
// (None)

class UClass* URigVMMemory_Work::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Work");

	return Clss;
}


// RigVMMemory_Work CR_DeepSparrow_Facial_Tier1.Default__RigVMMemory_Work
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Work* URigVMMemory_Work::GetDefaultObj()
{
	static class URigVMMemory_Work* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Work*>(URigVMMemory_Work::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass CR_DeepSparrow_Facial_Tier1.RigVMMemory_Literal
// (None)

class UClass* URigVMMemory_Literal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Literal");

	return Clss;
}


// RigVMMemory_Literal CR_DeepSparrow_Facial_Tier1.Default__RigVMMemory_Literal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Literal* URigVMMemory_Literal::GetDefaultObj()
{
	static class URigVMMemory_Literal* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Literal*>(URigVMMemory_Literal::StaticClass()->DefaultObject);

	return Default;
}


// ControlRigBlueprintGeneratedClass CR_DeepSparrow_Facial_Tier1.CR_DeepSparrow_Facial_Tier1_C
// (None)

class UClass* UCR_DeepSparrow_Facial_Tier1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CR_DeepSparrow_Facial_Tier1_C");

	return Clss;
}


// CR_DeepSparrow_Facial_Tier1_C CR_DeepSparrow_Facial_Tier1.Default__CR_DeepSparrow_Facial_Tier1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCR_DeepSparrow_Facial_Tier1_C* UCR_DeepSparrow_Facial_Tier1_C::GetDefaultObj()
{
	static class UCR_DeepSparrow_Facial_Tier1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCR_DeepSparrow_Facial_Tier1_C*>(UCR_DeepSparrow_Facial_Tier1_C::StaticClass()->DefaultObject);

	return Default;
}

}


