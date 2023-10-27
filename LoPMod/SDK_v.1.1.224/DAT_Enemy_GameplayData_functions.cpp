#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_Enemy_GameplayData.DAT_Enemy_GameplayData_C
// (None)

class UClass* UDAT_Enemy_GameplayData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_Enemy_GameplayData_C");

	return Clss;
}


// DAT_Enemy_GameplayData_C DAT_Enemy_GameplayData.Default__DAT_Enemy_GameplayData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_Enemy_GameplayData_C* UDAT_Enemy_GameplayData_C::GetDefaultObj()
{
	static class UDAT_Enemy_GameplayData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_Enemy_GameplayData_C*>(UDAT_Enemy_GameplayData_C::StaticClass()->DefaultObject);

	return Default;
}

}


