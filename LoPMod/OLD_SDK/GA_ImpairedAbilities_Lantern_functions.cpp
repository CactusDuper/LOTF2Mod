#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ImpairedAbilities_Lantern.GA_ImpairedAbilities_Lantern_C
// (None)

class UClass* UGA_ImpairedAbilities_Lantern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ImpairedAbilities_Lantern_C");

	return Clss;
}


// GA_ImpairedAbilities_Lantern_C GA_ImpairedAbilities_Lantern.Default__GA_ImpairedAbilities_Lantern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ImpairedAbilities_Lantern_C* UGA_ImpairedAbilities_Lantern_C::GetDefaultObj()
{
	static class UGA_ImpairedAbilities_Lantern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ImpairedAbilities_Lantern_C*>(UGA_ImpairedAbilities_Lantern_C::StaticClass()->DefaultObject);

	return Default;
}

}


