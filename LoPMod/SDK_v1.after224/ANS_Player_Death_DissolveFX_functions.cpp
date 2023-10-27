#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_Player_Death_DissolveFX.ANS_Player_Death_DissolveFX_C
// (None)

class UClass* UANS_Player_Death_DissolveFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_Player_Death_DissolveFX_C");

	return Clss;
}


// ANS_Player_Death_DissolveFX_C ANS_Player_Death_DissolveFX.Default__ANS_Player_Death_DissolveFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_Player_Death_DissolveFX_C* UANS_Player_Death_DissolveFX_C::GetDefaultObj()
{
	static class UANS_Player_Death_DissolveFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_Player_Death_DissolveFX_C*>(UANS_Player_Death_DissolveFX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANS_Player_Death_DissolveFX.ANS_Player_Death_DissolveFX_C.GetOverrideDissolveVFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               OverrideVFX                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              OverriddenVFX                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOverrideDissolveVFX_OverrideVFX                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_GetOverrideDissolveVFX_OverriddenVFX                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_Player_Death_DissolveFX_C::GetOverrideDissolveVFX(class USkeletalMeshComponent* Mesh, bool* OverrideVFX, class UNiagaraSystem** OverriddenVFX, bool Temp_bool_Variable, bool CallFunc_GetOverrideDissolveVFX_OverrideVFX, class UNiagaraSystem* CallFunc_GetOverrideDissolveVFX_OverriddenVFX, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_Player_Death_DissolveFX_C", "GetOverrideDissolveVFX");

	Params::UANS_Player_Death_DissolveFX_C_GetOverrideDissolveVFX_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOverrideDissolveVFX_OverrideVFX = CallFunc_GetOverrideDissolveVFX_OverrideVFX;
	Parms.CallFunc_GetOverrideDissolveVFX_OverriddenVFX = CallFunc_GetOverrideDissolveVFX_OverriddenVFX;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OverrideVFX != nullptr)
		*OverrideVFX = Parms.OverrideVFX;

	if (OverriddenVFX != nullptr)
		*OverriddenVFX = Parms.OverriddenVFX;

}

}


