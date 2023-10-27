#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaDestructible_CoffinA_01_BP.AnathemaDestructible_CoffinA_01_BP_C
// (Actor)

class UClass* AAnathemaDestructible_CoffinA_01_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaDestructible_CoffinA_01_BP_C");

	return Clss;
}


// AnathemaDestructible_CoffinA_01_BP_C AnathemaDestructible_CoffinA_01_BP.Default__AnathemaDestructible_CoffinA_01_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaDestructible_CoffinA_01_BP_C* AAnathemaDestructible_CoffinA_01_BP_C::GetDefaultObj()
{
	static class AAnathemaDestructible_CoffinA_01_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaDestructible_CoffinA_01_BP_C*>(AAnathemaDestructible_CoffinA_01_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


