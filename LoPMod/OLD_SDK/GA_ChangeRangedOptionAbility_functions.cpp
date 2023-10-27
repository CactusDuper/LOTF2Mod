#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ChangeRangedOptionAbility.GA_ChangeRangedOptionAbility_C
// (None)

class UClass* UGA_ChangeRangedOptionAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ChangeRangedOptionAbility_C");

	return Clss;
}


// GA_ChangeRangedOptionAbility_C GA_ChangeRangedOptionAbility.Default__GA_ChangeRangedOptionAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ChangeRangedOptionAbility_C* UGA_ChangeRangedOptionAbility_C::GetDefaultObj()
{
	static class UGA_ChangeRangedOptionAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ChangeRangedOptionAbility_C*>(UGA_ChangeRangedOptionAbility_C::StaticClass()->DefaultObject);

	return Default;
}

}


