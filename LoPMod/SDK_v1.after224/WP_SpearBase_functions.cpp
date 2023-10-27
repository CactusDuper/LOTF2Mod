#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_SpearBase.WP_SpearBase_C
// (None)

class UClass* UWP_SpearBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_SpearBase_C");

	return Clss;
}


// WP_SpearBase_C WP_SpearBase.Default__WP_SpearBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_SpearBase_C* UWP_SpearBase_C::GetDefaultObj()
{
	static class UWP_SpearBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_SpearBase_C*>(UWP_SpearBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


