#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_InterruptEnabledDodge.AnimNotify_InterruptEnabledDodge_C
// (None)

class UClass* UAnimNotify_InterruptEnabledDodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_InterruptEnabledDodge_C");

	return Clss;
}


// AnimNotify_InterruptEnabledDodge_C AnimNotify_InterruptEnabledDodge.Default__AnimNotify_InterruptEnabledDodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_InterruptEnabledDodge_C* UAnimNotify_InterruptEnabledDodge_C::GetDefaultObj()
{
	static class UAnimNotify_InterruptEnabledDodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_InterruptEnabledDodge_C*>(UAnimNotify_InterruptEnabledDodge_C::StaticClass()->DefaultObject);

	return Default;
}

}


