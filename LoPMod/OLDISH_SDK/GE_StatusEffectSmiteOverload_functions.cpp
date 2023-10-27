#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectSmiteOverload.GE_StatusEffectSmiteOverload_C
// (None)

class UClass* UGE_StatusEffectSmiteOverload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectSmiteOverload_C");

	return Clss;
}


// GE_StatusEffectSmiteOverload_C GE_StatusEffectSmiteOverload.Default__GE_StatusEffectSmiteOverload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectSmiteOverload_C* UGE_StatusEffectSmiteOverload_C::GetDefaultObj()
{
	static class UGE_StatusEffectSmiteOverload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectSmiteOverload_C*>(UGE_StatusEffectSmiteOverload_C::StaticClass()->DefaultObject);

	return Default;
}

}


