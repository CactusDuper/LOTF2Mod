#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child.DualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child_C
// (Actor)

class UClass* ADualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child_C");

	return Clss;
}


// DualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child_C DualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child.Default__DualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child_C* ADualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child_C::GetDefaultObj()
{
	static class ADualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child_C*>(ADualRealmWhisper_BP_Stigma_Boss_LampHunter_01_Grove_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


