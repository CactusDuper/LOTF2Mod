#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectSmite_Cooldown.GE_StatusEffectSmite_Cooldown_C
// (None)

class UClass* UGE_StatusEffectSmite_Cooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectSmite_Cooldown_C");

	return Clss;
}


// GE_StatusEffectSmite_Cooldown_C GE_StatusEffectSmite_Cooldown.Default__GE_StatusEffectSmite_Cooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectSmite_Cooldown_C* UGE_StatusEffectSmite_Cooldown_C::GetDefaultObj()
{
	static class UGE_StatusEffectSmite_Cooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectSmite_Cooldown_C*>(UGE_StatusEffectSmite_Cooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}

