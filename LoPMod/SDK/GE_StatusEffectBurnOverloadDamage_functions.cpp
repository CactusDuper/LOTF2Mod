#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectBurnOverloadDamage.GE_StatusEffectBurnOverloadDamage_C
// (None)

class UClass* UGE_StatusEffectBurnOverloadDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectBurnOverloadDamage_C");

	return Clss;
}


// GE_StatusEffectBurnOverloadDamage_C GE_StatusEffectBurnOverloadDamage.Default__GE_StatusEffectBurnOverloadDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectBurnOverloadDamage_C* UGE_StatusEffectBurnOverloadDamage_C::GetDefaultObj()
{
	static class UGE_StatusEffectBurnOverloadDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectBurnOverloadDamage_C*>(UGE_StatusEffectBurnOverloadDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


