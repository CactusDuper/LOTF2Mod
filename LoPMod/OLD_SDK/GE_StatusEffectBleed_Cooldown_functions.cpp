#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectBleed_Cooldown.GE_StatusEffectBleed_Cooldown_C
// (None)

class UClass* UGE_StatusEffectBleed_Cooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectBleed_Cooldown_C");

	return Clss;
}


// GE_StatusEffectBleed_Cooldown_C GE_StatusEffectBleed_Cooldown.Default__GE_StatusEffectBleed_Cooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectBleed_Cooldown_C* UGE_StatusEffectBleed_Cooldown_C::GetDefaultObj()
{
	static class UGE_StatusEffectBleed_Cooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectBleed_Cooldown_C*>(UGE_StatusEffectBleed_Cooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


