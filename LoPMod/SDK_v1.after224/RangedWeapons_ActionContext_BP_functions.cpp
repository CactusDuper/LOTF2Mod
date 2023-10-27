#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedWeapons_ActionContext_BP.RangedWeapons_ActionContext_BP_C
// (None)

class UClass* URangedWeapons_ActionContext_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedWeapons_ActionContext_BP_C");

	return Clss;
}


// RangedWeapons_ActionContext_BP_C RangedWeapons_ActionContext_BP.Default__RangedWeapons_ActionContext_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URangedWeapons_ActionContext_BP_C* URangedWeapons_ActionContext_BP_C::GetDefaultObj()
{
	static class URangedWeapons_ActionContext_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URangedWeapons_ActionContext_BP_C*>(URangedWeapons_ActionContext_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


