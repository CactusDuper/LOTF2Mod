#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectIgnite_PauseCooldown.GE_StatusEffectIgnite_PauseCooldown_C
// (None)

class UClass* UGE_StatusEffectIgnite_PauseCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectIgnite_PauseCooldown_C");

	return Clss;
}


// GE_StatusEffectIgnite_PauseCooldown_C GE_StatusEffectIgnite_PauseCooldown.Default__GE_StatusEffectIgnite_PauseCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectIgnite_PauseCooldown_C* UGE_StatusEffectIgnite_PauseCooldown_C::GetDefaultObj()
{
	static class UGE_StatusEffectIgnite_PauseCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectIgnite_PauseCooldown_C*>(UGE_StatusEffectIgnite_PauseCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


