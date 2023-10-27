#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_GreatHammerBase.WP_GreatHammerBase_C
// (None)

class UClass* UWP_GreatHammerBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_GreatHammerBase_C");

	return Clss;
}


// WP_GreatHammerBase_C WP_GreatHammerBase.Default__WP_GreatHammerBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_GreatHammerBase_C* UWP_GreatHammerBase_C::GetDefaultObj()
{
	static class UWP_GreatHammerBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_GreatHammerBase_C*>(UWP_GreatHammerBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


