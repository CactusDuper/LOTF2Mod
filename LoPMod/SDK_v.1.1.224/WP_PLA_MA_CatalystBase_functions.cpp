#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_PLA_MA_CatalystBase.WP_PLA_MA_CatalystBase_C
// (None)

class UClass* UWP_PLA_MA_CatalystBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_PLA_MA_CatalystBase_C");

	return Clss;
}


// WP_PLA_MA_CatalystBase_C WP_PLA_MA_CatalystBase.Default__WP_PLA_MA_CatalystBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_PLA_MA_CatalystBase_C* UWP_PLA_MA_CatalystBase_C::GetDefaultObj()
{
	static class UWP_PLA_MA_CatalystBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_PLA_MA_CatalystBase_C*>(UWP_PLA_MA_CatalystBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


