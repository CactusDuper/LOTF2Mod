#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectPoison_Cooldown.GE_StatusEffectPoison_Cooldown_C
// (None)

class UClass* UGE_StatusEffectPoison_Cooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectPoison_Cooldown_C");

	return Clss;
}


// GE_StatusEffectPoison_Cooldown_C GE_StatusEffectPoison_Cooldown.Default__GE_StatusEffectPoison_Cooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectPoison_Cooldown_C* UGE_StatusEffectPoison_Cooldown_C::GetDefaultObj()
{
	static class UGE_StatusEffectPoison_Cooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectPoison_Cooldown_C*>(UGE_StatusEffectPoison_Cooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


