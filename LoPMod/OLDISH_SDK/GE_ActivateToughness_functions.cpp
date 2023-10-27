#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ActivateToughness.GE_ActivateToughness_C
// (None)

class UClass* UGE_ActivateToughness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ActivateToughness_C");

	return Clss;
}


// GE_ActivateToughness_C GE_ActivateToughness.Default__GE_ActivateToughness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ActivateToughness_C* UGE_ActivateToughness_C::GetDefaultObj()
{
	static class UGE_ActivateToughness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ActivateToughness_C*>(UGE_ActivateToughness_C::StaticClass()->DefaultObject);

	return Default;
}

}


