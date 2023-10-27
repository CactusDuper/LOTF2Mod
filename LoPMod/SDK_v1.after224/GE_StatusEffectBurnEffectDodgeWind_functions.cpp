#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectBurnEffectDodgeWind.GE_StatusEffectBurnEffectDodgeWind_C
// (None)

class UClass* UGE_StatusEffectBurnEffectDodgeWind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectBurnEffectDodgeWind_C");

	return Clss;
}


// GE_StatusEffectBurnEffectDodgeWind_C GE_StatusEffectBurnEffectDodgeWind.Default__GE_StatusEffectBurnEffectDodgeWind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectBurnEffectDodgeWind_C* UGE_StatusEffectBurnEffectDodgeWind_C::GetDefaultObj()
{
	static class UGE_StatusEffectBurnEffectDodgeWind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectBurnEffectDodgeWind_C*>(UGE_StatusEffectBurnEffectDodgeWind_C::StaticClass()->DefaultObject);

	return Default;
}

}


