#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectDamage.GE_StatusEffectDamage_C
// (None)

class UClass* UGE_StatusEffectDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectDamage_C");

	return Clss;
}


// GE_StatusEffectDamage_C GE_StatusEffectDamage.Default__GE_StatusEffectDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectDamage_C* UGE_StatusEffectDamage_C::GetDefaultObj()
{
	static class UGE_StatusEffectDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectDamage_C*>(UGE_StatusEffectDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


