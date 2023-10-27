#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnathemaNPCSpawner_Harkyn_QuestStep_01A.BP_AnathemaNPCSpawner_Harkyn_QuestStep_01A_C
// (Actor)

class UClass* ABP_AnathemaNPCSpawner_Harkyn_QuestStep_01A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnathemaNPCSpawner_Harkyn_QuestStep_01A_C");

	return Clss;
}


// BP_AnathemaNPCSpawner_Harkyn_QuestStep_01A_C BP_AnathemaNPCSpawner_Harkyn_QuestStep_01A.Default__BP_AnathemaNPCSpawner_Harkyn_QuestStep_01A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AnathemaNPCSpawner_Harkyn_QuestStep_01A_C* ABP_AnathemaNPCSpawner_Harkyn_QuestStep_01A_C::GetDefaultObj()
{
	static class ABP_AnathemaNPCSpawner_Harkyn_QuestStep_01A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AnathemaNPCSpawner_Harkyn_QuestStep_01A_C*>(ABP_AnathemaNPCSpawner_Harkyn_QuestStep_01A_C::StaticClass()->DefaultObject);

	return Default;
}

}


