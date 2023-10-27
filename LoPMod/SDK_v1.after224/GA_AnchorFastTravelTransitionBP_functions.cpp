#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AnchorFastTravelTransitionBP.GA_AnchorFastTravelTransitionBP_C
// (None)

class UClass* UGA_AnchorFastTravelTransitionBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AnchorFastTravelTransitionBP_C");

	return Clss;
}


// GA_AnchorFastTravelTransitionBP_C GA_AnchorFastTravelTransitionBP.Default__GA_AnchorFastTravelTransitionBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AnchorFastTravelTransitionBP_C* UGA_AnchorFastTravelTransitionBP_C::GetDefaultObj()
{
	static class UGA_AnchorFastTravelTransitionBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AnchorFastTravelTransitionBP_C*>(UGA_AnchorFastTravelTransitionBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


