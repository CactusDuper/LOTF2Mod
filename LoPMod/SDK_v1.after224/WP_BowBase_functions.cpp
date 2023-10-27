#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_BowBase.WP_BowBase_C
// (None)

class UClass* UWP_BowBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_BowBase_C");

	return Clss;
}


// WP_BowBase_C WP_BowBase.Default__WP_BowBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_BowBase_C* UWP_BowBase_C::GetDefaultObj()
{
	static class UWP_BowBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_BowBase_C*>(UWP_BowBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


