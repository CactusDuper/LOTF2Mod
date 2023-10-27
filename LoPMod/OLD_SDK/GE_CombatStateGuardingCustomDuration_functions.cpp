#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CombatStateGuardingCustomDuration.GE_CombatStateGuardingCustomDuration_C
// (None)

class UClass* UGE_CombatStateGuardingCustomDuration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CombatStateGuardingCustomDuration_C");

	return Clss;
}


// GE_CombatStateGuardingCustomDuration_C GE_CombatStateGuardingCustomDuration.Default__GE_CombatStateGuardingCustomDuration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CombatStateGuardingCustomDuration_C* UGE_CombatStateGuardingCustomDuration_C::GetDefaultObj()
{
	static class UGE_CombatStateGuardingCustomDuration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CombatStateGuardingCustomDuration_C*>(UGE_CombatStateGuardingCustomDuration_C::StaticClass()->DefaultObject);

	return Default;
}

}


