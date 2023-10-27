#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Door_Regular_Double_Huge_BP.Door_Regular_Double_Huge_BP_C
// (Actor)

class UClass* ADoor_Regular_Double_Huge_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Door_Regular_Double_Huge_BP_C");

	return Clss;
}


// Door_Regular_Double_Huge_BP_C Door_Regular_Double_Huge_BP.Default__Door_Regular_Double_Huge_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADoor_Regular_Double_Huge_BP_C* ADoor_Regular_Double_Huge_BP_C::GetDefaultObj()
{
	static class ADoor_Regular_Double_Huge_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADoor_Regular_Double_Huge_BP_C*>(ADoor_Regular_Double_Huge_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


