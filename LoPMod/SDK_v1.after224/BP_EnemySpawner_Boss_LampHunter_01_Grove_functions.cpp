#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnemySpawner_Boss_LampHunter_01_Grove.BP_EnemySpawner_Boss_LampHunter_01_Grove_C
// (Actor)

class UClass* ABP_EnemySpawner_Boss_LampHunter_01_Grove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnemySpawner_Boss_LampHunter_01_Grove_C");

	return Clss;
}


// BP_EnemySpawner_Boss_LampHunter_01_Grove_C BP_EnemySpawner_Boss_LampHunter_01_Grove.Default__BP_EnemySpawner_Boss_LampHunter_01_Grove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnemySpawner_Boss_LampHunter_01_Grove_C* ABP_EnemySpawner_Boss_LampHunter_01_Grove_C::GetDefaultObj()
{
	static class ABP_EnemySpawner_Boss_LampHunter_01_Grove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnemySpawner_Boss_LampHunter_01_Grove_C*>(ABP_EnemySpawner_Boss_LampHunter_01_Grove_C::StaticClass()->DefaultObject);

	return Default;
}

}


