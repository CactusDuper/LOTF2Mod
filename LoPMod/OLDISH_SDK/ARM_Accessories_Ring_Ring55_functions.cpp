#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARM_Accessories_Ring_Ring55.ARM_Accessories_Ring_Ring55_C
// (None)

class UClass* UARM_Accessories_Ring_Ring55_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARM_Accessories_Ring_Ring55_C");

	return Clss;
}


// ARM_Accessories_Ring_Ring55_C ARM_Accessories_Ring_Ring55.Default__ARM_Accessories_Ring_Ring55_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARM_Accessories_Ring_Ring55_C* UARM_Accessories_Ring_Ring55_C::GetDefaultObj()
{
	static class UARM_Accessories_Ring_Ring55_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARM_Accessories_Ring_Ring55_C*>(UARM_Accessories_Ring_Ring55_C::StaticClass()->DefaultObject);

	return Default;
}

}


