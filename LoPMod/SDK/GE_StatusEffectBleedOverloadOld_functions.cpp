#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StatusEffectBleedOverloadOld.GE_StatusEffectBleedOverloadOld_C
// (None)

class UClass* UGE_StatusEffectBleedOverloadOld_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StatusEffectBleedOverloadOld_C");

	return Clss;
}


// GE_StatusEffectBleedOverloadOld_C GE_StatusEffectBleedOverloadOld.Default__GE_StatusEffectBleedOverloadOld_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StatusEffectBleedOverloadOld_C* UGE_StatusEffectBleedOverloadOld_C::GetDefaultObj()
{
	static class UGE_StatusEffectBleedOverloadOld_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StatusEffectBleedOverloadOld_C*>(UGE_StatusEffectBleedOverloadOld_C::StaticClass()->DefaultObject);

	return Default;
}

}


