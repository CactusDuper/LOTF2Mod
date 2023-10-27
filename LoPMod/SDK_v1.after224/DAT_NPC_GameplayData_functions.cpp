#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_NPC_GameplayData.DAT_NPC_GameplayData_C
// (None)

class UClass* UDAT_NPC_GameplayData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_NPC_GameplayData_C");

	return Clss;
}


// DAT_NPC_GameplayData_C DAT_NPC_GameplayData.Default__DAT_NPC_GameplayData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_NPC_GameplayData_C* UDAT_NPC_GameplayData_C::GetDefaultObj()
{
	static class UDAT_NPC_GameplayData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_NPC_GameplayData_C*>(UDAT_NPC_GameplayData_C::StaticClass()->DefaultObject);

	return Default;
}

}


