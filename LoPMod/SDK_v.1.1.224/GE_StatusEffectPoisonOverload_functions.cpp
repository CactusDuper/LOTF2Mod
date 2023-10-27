#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectPoisonOverload.GE_StatusEffectPoisonOverload_C
// (None)

class UClass* UGE_StatusEffectPoisonOverload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectPoisonOverload_C");

	return Clss;
}


// GE_StatusEffectPoisonOverload_C GE_StatusEffectPoisonOverload.Default__GE_StatusEffectPoisonOverload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectPoisonOverload_C* UGE_StatusEffectPoisonOverload_C::GetDefaultObj()
{
	static class UGE_StatusEffectPoisonOverload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectPoisonOverload_C*>(UGE_StatusEffectPoisonOverload_C::StaticClass()->DefaultObject);

	return Default;
}

}


