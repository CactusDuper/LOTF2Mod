#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TutorialArea_BP.TutorialArea_BP_C
// (Actor)

class UClass* ATutorialArea_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TutorialArea_BP_C");

	return Clss;
}


// TutorialArea_BP_C TutorialArea_BP.Default__TutorialArea_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATutorialArea_BP_C* ATutorialArea_BP_C::GetDefaultObj()
{
	static class ATutorialArea_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATutorialArea_BP_C*>(ATutorialArea_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


