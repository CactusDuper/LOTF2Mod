#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARM_Accessories_Ring_SophesiaWedding.ARM_Accessories_Ring_SophesiaWedding_C
// (None)

class UClass* UARM_Accessories_Ring_SophesiaWedding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARM_Accessories_Ring_SophesiaWedding_C");

	return Clss;
}


// ARM_Accessories_Ring_SophesiaWedding_C ARM_Accessories_Ring_SophesiaWedding.Default__ARM_Accessories_Ring_SophesiaWedding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARM_Accessories_Ring_SophesiaWedding_C* UARM_Accessories_Ring_SophesiaWedding_C::GetDefaultObj()
{
	static class UARM_Accessories_Ring_SophesiaWedding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARM_Accessories_Ring_SophesiaWedding_C*>(UARM_Accessories_Ring_SophesiaWedding_C::StaticClass()->DefaultObject);

	return Default;
}

}


