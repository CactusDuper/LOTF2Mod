#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_FistBase.WP_FistBase_C
// (None)

class UClass* UWP_FistBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_FistBase_C");

	return Clss;
}


// WP_FistBase_C WP_FistBase.Default__WP_FistBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_FistBase_C* UWP_FistBase_C::GetDefaultObj()
{
	static class UWP_FistBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_FistBase_C*>(UWP_FistBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


