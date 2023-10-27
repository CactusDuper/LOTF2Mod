#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_FlailBase.WP_FlailBase_C
// (None)

class UClass* UWP_FlailBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_FlailBase_C");

	return Clss;
}


// WP_FlailBase_C WP_FlailBase.Default__WP_FlailBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_FlailBase_C* UWP_FlailBase_C::GetDefaultObj()
{
	static class UWP_FlailBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_FlailBase_C*>(UWP_FlailBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


