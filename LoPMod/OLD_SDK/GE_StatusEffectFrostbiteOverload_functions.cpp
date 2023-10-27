#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectFrostbiteOverload.GE_StatusEffectFrostbiteOverload_C
// (None)

class UClass* UGE_StatusEffectFrostbiteOverload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectFrostbiteOverload_C");

	return Clss;
}


// GE_StatusEffectFrostbiteOverload_C GE_StatusEffectFrostbiteOverload.Default__GE_StatusEffectFrostbiteOverload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectFrostbiteOverload_C* UGE_StatusEffectFrostbiteOverload_C::GetDefaultObj()
{
	static class UGE_StatusEffectFrostbiteOverload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectFrostbiteOverload_C*>(UGE_StatusEffectFrostbiteOverload_C::StaticClass()->DefaultObject);

	return Default;
}

}


