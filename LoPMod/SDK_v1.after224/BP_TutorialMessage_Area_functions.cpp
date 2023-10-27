#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TutorialMessage_Area.BP_TutorialMessage_Area_C
// (Actor)

class UClass* ABP_TutorialMessage_Area_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TutorialMessage_Area_C");

	return Clss;
}


// BP_TutorialMessage_Area_C BP_TutorialMessage_Area.Default__BP_TutorialMessage_Area_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TutorialMessage_Area_C* ABP_TutorialMessage_Area_C::GetDefaultObj()
{
	static class ABP_TutorialMessage_Area_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TutorialMessage_Area_C*>(ABP_TutorialMessage_Area_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TutorialMessage_Area.BP_TutorialMessage_Area_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TutorialMessage_Area_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TutorialMessage_Area_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


