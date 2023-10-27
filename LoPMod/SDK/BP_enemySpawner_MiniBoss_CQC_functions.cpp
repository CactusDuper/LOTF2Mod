#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_enemySpawner_MiniBoss_CQC.BP_enemySpawner_MiniBoss_CQC_C
// (Actor)

class UClass* ABP_enemySpawner_MiniBoss_CQC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_enemySpawner_MiniBoss_CQC_C");

	return Clss;
}


// BP_enemySpawner_MiniBoss_CQC_C BP_enemySpawner_MiniBoss_CQC.Default__BP_enemySpawner_MiniBoss_CQC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_enemySpawner_MiniBoss_CQC_C* ABP_enemySpawner_MiniBoss_CQC_C::GetDefaultObj()
{
	static class ABP_enemySpawner_MiniBoss_CQC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_enemySpawner_MiniBoss_CQC_C*>(ABP_enemySpawner_MiniBoss_CQC_C::StaticClass()->DefaultObject);

	return Default;
}

}


