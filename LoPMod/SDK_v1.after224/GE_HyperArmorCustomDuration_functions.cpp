#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HyperArmorCustomDuration.GE_HyperArmorCustomDuration_C
// (None)

class UClass* UGE_HyperArmorCustomDuration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HyperArmorCustomDuration_C");

	return Clss;
}


// GE_HyperArmorCustomDuration_C GE_HyperArmorCustomDuration.Default__GE_HyperArmorCustomDuration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HyperArmorCustomDuration_C* UGE_HyperArmorCustomDuration_C::GetDefaultObj()
{
	static class UGE_HyperArmorCustomDuration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HyperArmorCustomDuration_C*>(UGE_HyperArmorCustomDuration_C::StaticClass()->DefaultObject);

	return Default;
}

}


