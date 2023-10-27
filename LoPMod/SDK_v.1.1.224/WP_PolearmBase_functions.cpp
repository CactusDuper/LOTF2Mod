#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_PolearmBase.WP_PolearmBase_C
// (None)

class UClass* UWP_PolearmBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_PolearmBase_C");

	return Clss;
}


// WP_PolearmBase_C WP_PolearmBase.Default__WP_PolearmBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_PolearmBase_C* UWP_PolearmBase_C::GetDefaultObj()
{
	static class UWP_PolearmBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_PolearmBase_C*>(UWP_PolearmBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


