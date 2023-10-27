#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatBlockStanceCustomDuration.GE_CombatBlockStanceCustomDuration_C
// (None)

class UClass* UGE_CombatBlockStanceCustomDuration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatBlockStanceCustomDuration_C");

	return Clss;
}


// GE_CombatBlockStanceCustomDuration_C GE_CombatBlockStanceCustomDuration.Default__GE_CombatBlockStanceCustomDuration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatBlockStanceCustomDuration_C* UGE_CombatBlockStanceCustomDuration_C::GetDefaultObj()
{
	static class UGE_CombatBlockStanceCustomDuration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatBlockStanceCustomDuration_C*>(UGE_CombatBlockStanceCustomDuration_C::StaticClass()->DefaultObject);

	return Default;
}

}


