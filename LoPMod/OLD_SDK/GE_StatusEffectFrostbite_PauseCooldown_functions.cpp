#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectFrostbite_PauseCooldown.GE_StatusEffectFrostbite_PauseCooldown_C
// (None)

class UClass* UGE_StatusEffectFrostbite_PauseCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectFrostbite_PauseCooldown_C");

	return Clss;
}


// GE_StatusEffectFrostbite_PauseCooldown_C GE_StatusEffectFrostbite_PauseCooldown.Default__GE_StatusEffectFrostbite_PauseCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectFrostbite_PauseCooldown_C* UGE_StatusEffectFrostbite_PauseCooldown_C::GetDefaultObj()
{
	static class UGE_StatusEffectFrostbite_PauseCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectFrostbite_PauseCooldown_C*>(UGE_StatusEffectFrostbite_PauseCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


