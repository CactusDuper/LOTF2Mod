#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_GreatAxeBase.WP_GreatAxeBase_C
// (None)

class UClass* UWP_GreatAxeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_GreatAxeBase_C");

	return Clss;
}


// WP_GreatAxeBase_C WP_GreatAxeBase.Default__WP_GreatAxeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_GreatAxeBase_C* UWP_GreatAxeBase_C::GetDefaultObj()
{
	static class UWP_GreatAxeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_GreatAxeBase_C*>(UWP_GreatAxeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


