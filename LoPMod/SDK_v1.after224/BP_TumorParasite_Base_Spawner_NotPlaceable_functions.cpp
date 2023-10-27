#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TumorParasite_Base_Spawner_NotPlaceable.BP_TumorParasite_Base_Spawner_NotPlaceable_C
// (Actor)

class UClass* ABP_TumorParasite_Base_Spawner_NotPlaceable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TumorParasite_Base_Spawner_NotPlaceable_C");

	return Clss;
}


// BP_TumorParasite_Base_Spawner_NotPlaceable_C BP_TumorParasite_Base_Spawner_NotPlaceable.Default__BP_TumorParasite_Base_Spawner_NotPlaceable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TumorParasite_Base_Spawner_NotPlaceable_C* ABP_TumorParasite_Base_Spawner_NotPlaceable_C::GetDefaultObj()
{
	static class ABP_TumorParasite_Base_Spawner_NotPlaceable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TumorParasite_Base_Spawner_NotPlaceable_C*>(ABP_TumorParasite_Base_Spawner_NotPlaceable_C::StaticClass()->DefaultObject);

	return Default;
}

}


