#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectBleedOverload.GE_StatusEffectBleedOverload_C
// (None)

class UClass* UGE_StatusEffectBleedOverload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectBleedOverload_C");

	return Clss;
}


// GE_StatusEffectBleedOverload_C GE_StatusEffectBleedOverload.Default__GE_StatusEffectBleedOverload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectBleedOverload_C* UGE_StatusEffectBleedOverload_C::GetDefaultObj()
{
	static class UGE_StatusEffectBleedOverload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectBleedOverload_C*>(UGE_StatusEffectBleedOverload_C::StaticClass()->DefaultObject);

	return Default;
}

}


