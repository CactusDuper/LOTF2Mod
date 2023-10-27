#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnemySpawner_Corrupted_pilgrim_01.BP_EnemySpawner_Corrupted_pilgrim_01_C
// (Actor)

class UClass* ABP_EnemySpawner_Corrupted_pilgrim_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnemySpawner_Corrupted_pilgrim_01_C");

	return Clss;
}


// BP_EnemySpawner_Corrupted_pilgrim_01_C BP_EnemySpawner_Corrupted_pilgrim_01.Default__BP_EnemySpawner_Corrupted_pilgrim_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnemySpawner_Corrupted_pilgrim_01_C* ABP_EnemySpawner_Corrupted_pilgrim_01_C::GetDefaultObj()
{
	static class ABP_EnemySpawner_Corrupted_pilgrim_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnemySpawner_Corrupted_pilgrim_01_C*>(ABP_EnemySpawner_Corrupted_pilgrim_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


