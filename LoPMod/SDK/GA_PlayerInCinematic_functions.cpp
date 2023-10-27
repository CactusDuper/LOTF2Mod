#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PlayerInCinematic.GA_PlayerInCinematic_C
// (None)

class UClass* UGA_PlayerInCinematic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PlayerInCinematic_C");

	return Clss;
}


// GA_PlayerInCinematic_C GA_PlayerInCinematic.Default__GA_PlayerInCinematic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PlayerInCinematic_C* UGA_PlayerInCinematic_C::GetDefaultObj()
{
	static class UGA_PlayerInCinematic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PlayerInCinematic_C*>(UGA_PlayerInCinematic_C::StaticClass()->DefaultObject);

	return Default;
}

}


