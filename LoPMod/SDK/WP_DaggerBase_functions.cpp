#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_DaggerBase.WP_DaggerBase_C
// (None)

class UClass* UWP_DaggerBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_DaggerBase_C");

	return Clss;
}


// WP_DaggerBase_C WP_DaggerBase.Default__WP_DaggerBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_DaggerBase_C* UWP_DaggerBase_C::GetDefaultObj()
{
	static class UWP_DaggerBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_DaggerBase_C*>(UWP_DaggerBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


