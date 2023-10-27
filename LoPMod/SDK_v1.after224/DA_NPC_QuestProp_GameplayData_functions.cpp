#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_NPC_QuestProp_GameplayData.DA_NPC_QuestProp_GameplayData_C
// (None)

class UClass* UDA_NPC_QuestProp_GameplayData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_NPC_QuestProp_GameplayData_C");

	return Clss;
}


// DA_NPC_QuestProp_GameplayData_C DA_NPC_QuestProp_GameplayData.Default__DA_NPC_QuestProp_GameplayData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_NPC_QuestProp_GameplayData_C* UDA_NPC_QuestProp_GameplayData_C::GetDefaultObj()
{
	static class UDA_NPC_QuestProp_GameplayData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_NPC_QuestProp_GameplayData_C*>(UDA_NPC_QuestProp_GameplayData_C::StaticClass()->DefaultObject);

	return Default;
}

}


