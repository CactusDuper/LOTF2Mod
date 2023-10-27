#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AnchorFastTravelTransitionWithVigorDropBP.GA_AnchorFastTravelTransitionWithVigorDropBP_C
// (None)

class UClass* UGA_AnchorFastTravelTransitionWithVigorDropBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AnchorFastTravelTransitionWithVigorDropBP_C");

	return Clss;
}


// GA_AnchorFastTravelTransitionWithVigorDropBP_C GA_AnchorFastTravelTransitionWithVigorDropBP.Default__GA_AnchorFastTravelTransitionWithVigorDropBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AnchorFastTravelTransitionWithVigorDropBP_C* UGA_AnchorFastTravelTransitionWithVigorDropBP_C::GetDefaultObj()
{
	static class UGA_AnchorFastTravelTransitionWithVigorDropBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AnchorFastTravelTransitionWithVigorDropBP_C*>(UGA_AnchorFastTravelTransitionWithVigorDropBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


