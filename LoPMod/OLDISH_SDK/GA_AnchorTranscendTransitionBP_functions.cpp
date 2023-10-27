#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AnchorTranscendTransitionBP.GA_AnchorTranscendTransitionBP_C
// (None)

class UClass* UGA_AnchorTranscendTransitionBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AnchorTranscendTransitionBP_C");

	return Clss;
}


// GA_AnchorTranscendTransitionBP_C GA_AnchorTranscendTransitionBP.Default__GA_AnchorTranscendTransitionBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AnchorTranscendTransitionBP_C* UGA_AnchorTranscendTransitionBP_C::GetDefaultObj()
{
	static class UGA_AnchorTranscendTransitionBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AnchorTranscendTransitionBP_C*>(UGA_AnchorTranscendTransitionBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


