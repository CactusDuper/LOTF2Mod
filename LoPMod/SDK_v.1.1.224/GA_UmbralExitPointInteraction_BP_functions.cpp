#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_UmbralExitPointInteraction_BP.GA_UmbralExitPointInteraction_BP_C
// (None)

class UClass* UGA_UmbralExitPointInteraction_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_UmbralExitPointInteraction_BP_C");

	return Clss;
}


// GA_UmbralExitPointInteraction_BP_C GA_UmbralExitPointInteraction_BP.Default__GA_UmbralExitPointInteraction_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_UmbralExitPointInteraction_BP_C* UGA_UmbralExitPointInteraction_BP_C::GetDefaultObj()
{
	static class UGA_UmbralExitPointInteraction_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_UmbralExitPointInteraction_BP_C*>(UGA_UmbralExitPointInteraction_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


