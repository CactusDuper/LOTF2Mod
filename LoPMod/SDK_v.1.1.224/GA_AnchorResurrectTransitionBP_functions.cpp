#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AnchorResurrectTransitionBP.GA_AnchorResurrectTransitionBP_C
// (None)

class UClass* UGA_AnchorResurrectTransitionBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AnchorResurrectTransitionBP_C");

	return Clss;
}


// GA_AnchorResurrectTransitionBP_C GA_AnchorResurrectTransitionBP.Default__GA_AnchorResurrectTransitionBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AnchorResurrectTransitionBP_C* UGA_AnchorResurrectTransitionBP_C::GetDefaultObj()
{
	static class UGA_AnchorResurrectTransitionBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AnchorResurrectTransitionBP_C*>(UGA_AnchorResurrectTransitionBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


