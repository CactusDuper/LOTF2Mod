#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_OpenDoor.GA_OpenDoor_C
// (None)

class UClass* UGA_OpenDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_OpenDoor_C");

	return Clss;
}


// GA_OpenDoor_C GA_OpenDoor.Default__GA_OpenDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_OpenDoor_C* UGA_OpenDoor_C::GetDefaultObj()
{
	static class UGA_OpenDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_OpenDoor_C*>(UGA_OpenDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


