#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Interact_BP.GA_Interact_BP_C
// (None)

class UClass* UGA_Interact_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Interact_BP_C");

	return Clss;
}


// GA_Interact_BP_C GA_Interact_BP.Default__GA_Interact_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Interact_BP_C* UGA_Interact_BP_C::GetDefaultObj()
{
	static class UGA_Interact_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Interact_BP_C*>(UGA_Interact_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


