#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoulsLantern_ItemData.SoulsLantern_ItemData_C
// (None)

class UClass* USoulsLantern_ItemData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoulsLantern_ItemData_C");

	return Clss;
}


// SoulsLantern_ItemData_C SoulsLantern_ItemData.Default__SoulsLantern_ItemData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USoulsLantern_ItemData_C* USoulsLantern_ItemData_C::GetDefaultObj()
{
	static class USoulsLantern_ItemData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USoulsLantern_ItemData_C*>(USoulsLantern_ItemData_C::StaticClass()->DefaultObject);

	return Default;
}

}


