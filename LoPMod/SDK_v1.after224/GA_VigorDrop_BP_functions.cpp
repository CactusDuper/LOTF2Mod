#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_VigorDrop_BP.GA_VigorDrop_BP_C
// (None)

class UClass* UGA_VigorDrop_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_VigorDrop_BP_C");

	return Clss;
}


// GA_VigorDrop_BP_C GA_VigorDrop_BP.Default__GA_VigorDrop_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_VigorDrop_BP_C* UGA_VigorDrop_BP_C::GetDefaultObj()
{
	static class UGA_VigorDrop_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_VigorDrop_BP_C*>(UGA_VigorDrop_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}

