#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_HammerBase.WP_HammerBase_C
// (None)

class UClass* UWP_HammerBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_HammerBase_C");

	return Clss;
}


// WP_HammerBase_C WP_HammerBase.Default__WP_HammerBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_HammerBase_C* UWP_HammerBase_C::GetDefaultObj()
{
	static class UWP_HammerBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_HammerBase_C*>(UWP_HammerBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


