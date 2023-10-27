#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_BlockAbilities_Jump.GA_BlockAbilities_Jump_C
// (None)

class UClass* UGA_BlockAbilities_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_BlockAbilities_Jump_C");

	return Clss;
}


// GA_BlockAbilities_Jump_C GA_BlockAbilities_Jump.Default__GA_BlockAbilities_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_BlockAbilities_Jump_C* UGA_BlockAbilities_Jump_C::GetDefaultObj()
{
	static class UGA_BlockAbilities_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_BlockAbilities_Jump_C*>(UGA_BlockAbilities_Jump_C::StaticClass()->DefaultObject);

	return Default;
}

}


