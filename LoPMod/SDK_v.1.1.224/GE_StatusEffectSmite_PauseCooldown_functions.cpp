#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectSmite_PauseCooldown.GE_StatusEffectSmite_PauseCooldown_C
// (None)

class UClass* UGE_StatusEffectSmite_PauseCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectSmite_PauseCooldown_C");

	return Clss;
}


// GE_StatusEffectSmite_PauseCooldown_C GE_StatusEffectSmite_PauseCooldown.Default__GE_StatusEffectSmite_PauseCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectSmite_PauseCooldown_C* UGE_StatusEffectSmite_PauseCooldown_C::GetDefaultObj()
{
	static class UGE_StatusEffectSmite_PauseCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectSmite_PauseCooldown_C*>(UGE_StatusEffectSmite_PauseCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}


