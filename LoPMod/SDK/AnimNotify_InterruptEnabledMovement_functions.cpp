#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_InterruptEnabledMovement.AnimNotify_InterruptEnabledMovement_C
// (None)

class UClass* UAnimNotify_InterruptEnabledMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_InterruptEnabledMovement_C");

	return Clss;
}


// AnimNotify_InterruptEnabledMovement_C AnimNotify_InterruptEnabledMovement.Default__AnimNotify_InterruptEnabledMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_InterruptEnabledMovement_C* UAnimNotify_InterruptEnabledMovement_C::GetDefaultObj()
{
	static class UAnimNotify_InterruptEnabledMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_InterruptEnabledMovement_C*>(UAnimNotify_InterruptEnabledMovement_C::StaticClass()->DefaultObject);

	return Default;
}

}


