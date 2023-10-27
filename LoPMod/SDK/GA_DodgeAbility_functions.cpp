#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DodgeAbility.GA_DodgeAbility_C
// (None)

class UClass* UGA_DodgeAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DodgeAbility_C");

	return Clss;
}


// GA_DodgeAbility_C GA_DodgeAbility.Default__GA_DodgeAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DodgeAbility_C* UGA_DodgeAbility_C::GetDefaultObj()
{
	static class UGA_DodgeAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DodgeAbility_C*>(UGA_DodgeAbility_C::StaticClass()->DefaultObject);

	return Default;
}

}


