#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_RangedShotAbility.GA_RangedShotAbility_C
// (None)

class UClass* UGA_RangedShotAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_RangedShotAbility_C");

	return Clss;
}


// GA_RangedShotAbility_C GA_RangedShotAbility.Default__GA_RangedShotAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_RangedShotAbility_C* UGA_RangedShotAbility_C::GetDefaultObj()
{
	static class UGA_RangedShotAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_RangedShotAbility_C*>(UGA_RangedShotAbility_C::StaticClass()->DefaultObject);

	return Default;
}

}


