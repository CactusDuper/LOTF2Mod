#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestReader_UnhideActor_AlwaysRelevant.BP_QuestReader_UnhideActor_AlwaysRelevant_C
// (Actor)

class UClass* ABP_QuestReader_UnhideActor_AlwaysRelevant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestReader_UnhideActor_AlwaysRelevant_C");

	return Clss;
}


// BP_QuestReader_UnhideActor_AlwaysRelevant_C BP_QuestReader_UnhideActor_AlwaysRelevant.Default__BP_QuestReader_UnhideActor_AlwaysRelevant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_QuestReader_UnhideActor_AlwaysRelevant_C* ABP_QuestReader_UnhideActor_AlwaysRelevant_C::GetDefaultObj()
{
	static class ABP_QuestReader_UnhideActor_AlwaysRelevant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_QuestReader_UnhideActor_AlwaysRelevant_C*>(ABP_QuestReader_UnhideActor_AlwaysRelevant_C::StaticClass()->DefaultObject);

	return Default;
}

}


