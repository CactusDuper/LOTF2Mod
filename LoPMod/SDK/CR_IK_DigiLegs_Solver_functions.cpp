#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// RigVMMemoryStorageGeneratorClass CR_IK_DigiLegs_Solver.RigVMMemory_Work
// (None)

class UClass* URigVMMemory_Work::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Work");

	return Clss;
}


// RigVMMemory_Work CR_IK_DigiLegs_Solver.Default__RigVMMemory_Work
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Work* URigVMMemory_Work::GetDefaultObj()
{
	static class URigVMMemory_Work* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Work*>(URigVMMemory_Work::StaticClass()->DefaultObject);

	return Default;
}


// RigVMMemoryStorageGeneratorClass CR_IK_DigiLegs_Solver.RigVMMemory_Literal
// (None)

class UClass* URigVMMemory_Literal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemory_Literal");

	return Clss;
}


// RigVMMemory_Literal CR_IK_DigiLegs_Solver.Default__RigVMMemory_Literal
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URigVMMemory_Literal* URigVMMemory_Literal::GetDefaultObj()
{
	static class URigVMMemory_Literal* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemory_Literal*>(URigVMMemory_Literal::StaticClass()->DefaultObject);

	return Default;
}


// ControlRigBlueprintGeneratedClass CR_IK_DigiLegs_Solver.CR_IK_DigiLegs_Solver_C
// (None)

class UClass* UCR_IK_DigiLegs_Solver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CR_IK_DigiLegs_Solver_C");

	return Clss;
}


// CR_IK_DigiLegs_Solver_C CR_IK_DigiLegs_Solver.Default__CR_IK_DigiLegs_Solver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCR_IK_DigiLegs_Solver_C* UCR_IK_DigiLegs_Solver_C::GetDefaultObj()
{
	static class UCR_IK_DigiLegs_Solver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCR_IK_DigiLegs_Solver_C*>(UCR_IK_DigiLegs_Solver_C::StaticClass()->DefaultObject);

	return Default;
}

}


