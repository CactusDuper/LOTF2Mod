#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectFrostbite_Cooldown.GE_StatusEffectFrostbite_Cooldown_C
// (None)

class UClass* UGE_StatusEffectFrostbite_Cooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectFrostbite_Cooldown_C");

	return Clss;
}


// GE_StatusEffectFrostbite_Cooldown_C GE_StatusEffectFrostbite_Cooldown.Default__GE_StatusEffectFrostbite_Cooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectFrostbite_Cooldown_C* UGE_StatusEffectFrostbite_Cooldown_C::GetDefaultObj()
{
	static class UGE_StatusEffectFrostbite_Cooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectFrostbite_Cooldown_C*>(UGE_StatusEffectFrostbite_Cooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


