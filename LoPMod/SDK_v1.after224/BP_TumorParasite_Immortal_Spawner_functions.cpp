#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TumorParasite_Immortal_Spawner.BP_TumorParasite_Immortal_Spawner_C
// (Actor)

class UClass* ABP_TumorParasite_Immortal_Spawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TumorParasite_Immortal_Spawner_C");

	return Clss;
}


// BP_TumorParasite_Immortal_Spawner_C BP_TumorParasite_Immortal_Spawner.Default__BP_TumorParasite_Immortal_Spawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TumorParasite_Immortal_Spawner_C* ABP_TumorParasite_Immortal_Spawner_C::GetDefaultObj()
{
	static class ABP_TumorParasite_Immortal_Spawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TumorParasite_Immortal_Spawner_C*>(ABP_TumorParasite_Immortal_Spawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


