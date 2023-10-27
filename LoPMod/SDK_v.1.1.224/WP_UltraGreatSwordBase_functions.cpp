#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_UltraGreatSwordBase.WP_UltraGreatSwordBase_C
// (None)

class UClass* UWP_UltraGreatSwordBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_UltraGreatSwordBase_C");

	return Clss;
}


// WP_UltraGreatSwordBase_C WP_UltraGreatSwordBase.Default__WP_UltraGreatSwordBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_UltraGreatSwordBase_C* UWP_UltraGreatSwordBase_C::GetDefaultObj()
{
	static class UWP_UltraGreatSwordBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_UltraGreatSwordBase_C*>(UWP_UltraGreatSwordBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


