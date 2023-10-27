#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_AKAnathemaEvent_Thud_Big_MC.AnimNotify_AKAnathemaEvent_Thud_Big_MC_C
// (None)

class UClass* UAnimNotify_AKAnathemaEvent_Thud_Big_MC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_AKAnathemaEvent_Thud_Big_MC_C");

	return Clss;
}


// AnimNotify_AKAnathemaEvent_Thud_Big_MC_C AnimNotify_AKAnathemaEvent_Thud_Big_MC.Default__AnimNotify_AKAnathemaEvent_Thud_Big_MC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_AKAnathemaEvent_Thud_Big_MC_C* UAnimNotify_AKAnathemaEvent_Thud_Big_MC_C::GetDefaultObj()
{
	static class UAnimNotify_AKAnathemaEvent_Thud_Big_MC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_AKAnathemaEvent_Thud_Big_MC_C*>(UAnimNotify_AKAnathemaEvent_Thud_Big_MC_C::StaticClass()->DefaultObject);

	return Default;
}

}


