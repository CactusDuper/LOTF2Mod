#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_Enemy_UmbralAssassinBlade.WP_Enemy_UmbralAssassinBlade_C
// (None)

class UClass* UWP_Enemy_UmbralAssassinBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_Enemy_UmbralAssassinBlade_C");

	return Clss;
}


// WP_Enemy_UmbralAssassinBlade_C WP_Enemy_UmbralAssassinBlade.Default__WP_Enemy_UmbralAssassinBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_Enemy_UmbralAssassinBlade_C* UWP_Enemy_UmbralAssassinBlade_C::GetDefaultObj()
{
	static class UWP_Enemy_UmbralAssassinBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_Enemy_UmbralAssassinBlade_C*>(UWP_Enemy_UmbralAssassinBlade_C::StaticClass()->DefaultObject);

	return Default;
}

}


