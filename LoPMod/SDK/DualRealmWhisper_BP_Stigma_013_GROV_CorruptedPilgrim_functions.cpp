#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim.DualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim_C
// (Actor)

class UClass* ADualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim_C");

	return Clss;
}


// DualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim_C DualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim.Default__DualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim_C* ADualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim_C::GetDefaultObj()
{
	static class ADualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim_C*>(ADualRealmWhisper_BP_Stigma_013_GROV_CorruptedPilgrim_C::StaticClass()->DefaultObject);

	return Default;
}

}


