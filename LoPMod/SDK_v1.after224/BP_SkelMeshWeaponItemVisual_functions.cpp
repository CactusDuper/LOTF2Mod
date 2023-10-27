#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkelMeshWeaponItemVisual.BP_SkelMeshWeaponItemVisual_C
// (Actor)

class UClass* ABP_SkelMeshWeaponItemVisual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkelMeshWeaponItemVisual_C");

	return Clss;
}


// BP_SkelMeshWeaponItemVisual_C BP_SkelMeshWeaponItemVisual.Default__BP_SkelMeshWeaponItemVisual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkelMeshWeaponItemVisual_C* ABP_SkelMeshWeaponItemVisual_C::GetDefaultObj()
{
	static class ABP_SkelMeshWeaponItemVisual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkelMeshWeaponItemVisual_C*>(ABP_SkelMeshWeaponItemVisual_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkelMeshWeaponItemVisual.BP_SkelMeshWeaponItemVisual_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkelMeshWeaponItemVisual_C::UserConstructionScript(bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkelMeshWeaponItemVisual_C", "UserConstructionScript");

	Params::ABP_SkelMeshWeaponItemVisual_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


