#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ReincarnateAbility.GA_ReincarnateAbility_C
// (None)

class UClass* UGA_ReincarnateAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ReincarnateAbility_C");

	return Clss;
}


// GA_ReincarnateAbility_C GA_ReincarnateAbility.Default__GA_ReincarnateAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ReincarnateAbility_C* UGA_ReincarnateAbility_C::GetDefaultObj()
{
	static class UGA_ReincarnateAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ReincarnateAbility_C*>(UGA_ReincarnateAbility_C::StaticClass()->DefaultObject);

	return Default;
}

}


