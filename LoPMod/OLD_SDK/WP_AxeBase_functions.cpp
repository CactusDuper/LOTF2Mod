#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_AxeBase.WP_AxeBase_C
// (None)

class UClass* UWP_AxeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_AxeBase_C");

	return Clss;
}


// WP_AxeBase_C WP_AxeBase.Default__WP_AxeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_AxeBase_C* UWP_AxeBase_C::GetDefaultObj()
{
	static class UWP_AxeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_AxeBase_C*>(UWP_AxeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


