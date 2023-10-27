#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Enemy_Pilgrim.ABP_Enemy_Pilgrim_C
// (None)

class UClass* UABP_Enemy_Pilgrim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Enemy_Pilgrim_C");

	return Clss;
}


// ABP_Enemy_Pilgrim_C ABP_Enemy_Pilgrim.Default__ABP_Enemy_Pilgrim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Enemy_Pilgrim_C* UABP_Enemy_Pilgrim_C::GetDefaultObj()
{
	static class UABP_Enemy_Pilgrim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Enemy_Pilgrim_C*>(UABP_Enemy_Pilgrim_C::StaticClass()->DefaultObject);

	return Default;
}

}


