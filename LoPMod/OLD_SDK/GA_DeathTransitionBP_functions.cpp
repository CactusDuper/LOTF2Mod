#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DeathTransitionBP.GA_DeathTransitionBP_C
// (None)

class UClass* UGA_DeathTransitionBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DeathTransitionBP_C");

	return Clss;
}


// GA_DeathTransitionBP_C GA_DeathTransitionBP.Default__GA_DeathTransitionBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DeathTransitionBP_C* UGA_DeathTransitionBP_C::GetDefaultObj()
{
	static class UGA_DeathTransitionBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DeathTransitionBP_C*>(UGA_DeathTransitionBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


