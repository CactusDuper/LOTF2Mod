#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Anathema_Door_Regular_Double_A_BP.Anathema_Door_Regular_Double_A_BP_C
// (Actor)

class UClass* AAnathema_Door_Regular_Double_A_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Anathema_Door_Regular_Double_A_BP_C");

	return Clss;
}


// Anathema_Door_Regular_Double_A_BP_C Anathema_Door_Regular_Double_A_BP.Default__Anathema_Door_Regular_Double_A_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathema_Door_Regular_Double_A_BP_C* AAnathema_Door_Regular_Double_A_BP_C::GetDefaultObj()
{
	static class AAnathema_Door_Regular_Double_A_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathema_Door_Regular_Double_A_BP_C*>(AAnathema_Door_Regular_Double_A_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


