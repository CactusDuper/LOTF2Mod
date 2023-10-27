#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_ShortSwordBase.WP_ShortSwordBase_C
// (None)

class UClass* UWP_ShortSwordBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_ShortSwordBase_C");

	return Clss;
}


// WP_ShortSwordBase_C WP_ShortSwordBase.Default__WP_ShortSwordBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_ShortSwordBase_C* UWP_ShortSwordBase_C::GetDefaultObj()
{
	static class UWP_ShortSwordBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_ShortSwordBase_C*>(UWP_ShortSwordBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


