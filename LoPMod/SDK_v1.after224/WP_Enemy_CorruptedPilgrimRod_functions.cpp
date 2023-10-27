#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_Enemy_CorruptedPilgrimRod.WP_Enemy_CorruptedPilgrimRod_C
// (None)

class UClass* UWP_Enemy_CorruptedPilgrimRod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_Enemy_CorruptedPilgrimRod_C");

	return Clss;
}


// WP_Enemy_CorruptedPilgrimRod_C WP_Enemy_CorruptedPilgrimRod.Default__WP_Enemy_CorruptedPilgrimRod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_Enemy_CorruptedPilgrimRod_C* UWP_Enemy_CorruptedPilgrimRod_C::GetDefaultObj()
{
	static class UWP_Enemy_CorruptedPilgrimRod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_Enemy_CorruptedPilgrimRod_C*>(UWP_Enemy_CorruptedPilgrimRod_C::StaticClass()->DefaultObject);

	return Default;
}

}


