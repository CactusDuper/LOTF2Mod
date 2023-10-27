#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectIgniteOverload.GE_StatusEffectIgniteOverload_C
// (None)

class UClass* UGE_StatusEffectIgniteOverload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectIgniteOverload_C");

	return Clss;
}


// GE_StatusEffectIgniteOverload_C GE_StatusEffectIgniteOverload.Default__GE_StatusEffectIgniteOverload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectIgniteOverload_C* UGE_StatusEffectIgniteOverload_C::GetDefaultObj()
{
	static class UGE_StatusEffectIgniteOverload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectIgniteOverload_C*>(UGE_StatusEffectIgniteOverload_C::StaticClass()->DefaultObject);

	return Default;
}

}


