#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_InterruptEnabledCombo.AnimNotify_InterruptEnabledCombo_C
// (None)

class UClass* UAnimNotify_InterruptEnabledCombo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_InterruptEnabledCombo_C");

	return Clss;
}


// AnimNotify_InterruptEnabledCombo_C AnimNotify_InterruptEnabledCombo.Default__AnimNotify_InterruptEnabledCombo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_InterruptEnabledCombo_C* UAnimNotify_InterruptEnabledCombo_C::GetDefaultObj()
{
	static class UAnimNotify_InterruptEnabledCombo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_InterruptEnabledCombo_C*>(UAnimNotify_InterruptEnabledCombo_C::StaticClass()->DefaultObject);

	return Default;
}

}


