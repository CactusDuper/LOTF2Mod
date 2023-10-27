#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac.BP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac_C
// (Actor)

class UClass* ABP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac_C");

	return Clss;
}


// BP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac_C BP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac.Default__BP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac_C* ABP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac_C::GetDefaultObj()
{
	static class ABP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac_C*>(ABP_AnathemaNPCSpawner_Prop_UmbralBlockerIsaac_C::StaticClass()->DefaultObject);

	return Default;
}

}


