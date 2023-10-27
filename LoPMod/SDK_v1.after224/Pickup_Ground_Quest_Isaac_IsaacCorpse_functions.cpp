#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pickup_Ground_Quest_Isaac_IsaacCorpse.Pickup_Ground_Quest_Isaac_IsaacCorpse_C
// (Actor)

class UClass* APickup_Ground_Quest_Isaac_IsaacCorpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pickup_Ground_Quest_Isaac_IsaacCorpse_C");

	return Clss;
}


// Pickup_Ground_Quest_Isaac_IsaacCorpse_C Pickup_Ground_Quest_Isaac_IsaacCorpse.Default__Pickup_Ground_Quest_Isaac_IsaacCorpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APickup_Ground_Quest_Isaac_IsaacCorpse_C* APickup_Ground_Quest_Isaac_IsaacCorpse_C::GetDefaultObj()
{
	static class APickup_Ground_Quest_Isaac_IsaacCorpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APickup_Ground_Quest_Isaac_IsaacCorpse_C*>(APickup_Ground_Quest_Isaac_IsaacCorpse_C::StaticClass()->DefaultObject);

	return Default;
}

}


