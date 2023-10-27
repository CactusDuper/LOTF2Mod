#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_ActivateToughness.AnimNotify_ActivateToughness_C
// (None)

class UClass* UAnimNotify_ActivateToughness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_ActivateToughness_C");

	return Clss;
}


// AnimNotify_ActivateToughness_C AnimNotify_ActivateToughness.Default__AnimNotify_ActivateToughness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_ActivateToughness_C* UAnimNotify_ActivateToughness_C::GetDefaultObj()
{
	static class UAnimNotify_ActivateToughness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_ActivateToughness_C*>(UAnimNotify_ActivateToughness_C::StaticClass()->DefaultObject);

	return Default;
}

}


