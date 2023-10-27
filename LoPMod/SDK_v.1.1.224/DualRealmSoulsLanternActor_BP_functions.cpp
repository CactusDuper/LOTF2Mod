#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C
// (Actor)

class UClass* ADualRealmSoulsLanternActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DualRealmSoulsLanternActor_BP_C");

	return Clss;
}


// DualRealmSoulsLanternActor_BP_C DualRealmSoulsLanternActor_BP.Default__DualRealmSoulsLanternActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADualRealmSoulsLanternActor_BP_C* ADualRealmSoulsLanternActor_BP_C::GetDefaultObj()
{
	static class ADualRealmSoulsLanternActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADualRealmSoulsLanternActor_BP_C*>(ADualRealmSoulsLanternActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.UpdatePlayerLightColour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              Realm                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           FlameOppositeRealm                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           FlameCurrentRealm                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::UpdatePlayerLightColour(enum class EGameRealm Realm, class UNiagaraComponent* FlameOppositeRealm, class UNiagaraComponent* FlameCurrentRealm, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "UpdatePlayerLightColour");

	Params::ADualRealmSoulsLanternActor_BP_C_UpdatePlayerLightColour_Params Parms{};

	Parms.Realm = Realm;
	Parms.FlameOppositeRealm = FlameOppositeRealm;
	Parms.FlameCurrentRealm = FlameCurrentRealm;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP = K2Node_DynamicCast_AsAnathema_Player_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.OnRep_bSoulsConeActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Collider_LanternSyphoning_C*CallFunc_GetSyphoningCollider_LanternSyphoningCollider           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::OnRep_bSoulsConeActive(bool Temp_bool_Variable, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider, enum class ECollisionEnabled K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "OnRep_bSoulsConeActive");

	Params::ADualRealmSoulsLanternActor_BP_C_OnRep_bSoulsConeActive_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetLocalRole_ReturnValue = CallFunc_GetLocalRole_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSyphoningCollider_LanternSyphoningCollider = CallFunc_GetSyphoningCollider_LanternSyphoningCollider;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.DeactivateSyphoningCollider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Collider_LanternSyphoning_C*CallFunc_GetSyphoningCollider_LanternSyphoningCollider           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::DeactivateSyphoningCollider(class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "DeactivateSyphoningCollider");

	Params::ADualRealmSoulsLanternActor_BP_C_DeactivateSyphoningCollider_Params Parms{};

	Parms.CallFunc_GetSyphoningCollider_LanternSyphoningCollider = CallFunc_GetSyphoningCollider_LanternSyphoningCollider;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ActivateSyphoningCollider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Collider_LanternSyphoning_C*CallFunc_GetSyphoningCollider_LanternSyphoningCollider           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::ActivateSyphoningCollider(class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ActivateSyphoningCollider");

	Params::ADualRealmSoulsLanternActor_BP_C_ActivateSyphoningCollider_Params Parms{};

	Parms.CallFunc_GetSyphoningCollider_LanternSyphoningCollider = CallFunc_GetSyphoningCollider_LanternSyphoningCollider;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.GetSyphoningCollider
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_Collider_LanternSyphoning_C*LanternSyphoningCollider                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Collider_LanternSyphoning_C*K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::GetSyphoningCollider(class ABP_Collider_LanternSyphoning_C** LanternSyphoningCollider, class ABP_Collider_LanternSyphoning_C* K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "GetSyphoningCollider");

	Params::ADualRealmSoulsLanternActor_BP_C_GetSyphoningCollider_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning = K2Node_DynamicCast_AsBP_Collider_Lantern_Syphoning;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (LanternSyphoningCollider != nullptr)
		*LanternSyphoningCollider = Parms.LanternSyphoningCollider;

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ActivateLanternSoulsucking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldActivate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Collider_LanternSoulsucking_C*K2Node_DynamicCast_AsBP_Collider_Lantern_Soulsucking             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::ActivateLanternSoulsucking(bool ShouldActivate, class ABP_Collider_LanternSoulsucking_C* K2Node_DynamicCast_AsBP_Collider_Lantern_Soulsucking, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ActivateLanternSoulsucking");

	Params::ADualRealmSoulsLanternActor_BP_C_ActivateLanternSoulsucking_Params Parms{};

	Parms.ShouldActivate = ShouldActivate;
	Parms.K2Node_DynamicCast_AsBP_Collider_Lantern_Soulsucking = K2Node_DynamicCast_AsBP_Collider_Lantern_Soulsucking;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ActivateFlame_Hotspot_DEPRECATED
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::ActivateFlame_Hotspot_DEPRECATED(bool CallFunc_IsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ActivateFlame_Hotspot_DEPRECATED");

	Params::ADualRealmSoulsLanternActor_BP_C_ActivateFlame_Hotspot_DEPRECATED_Params Parms{};

	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ActivateFlame_Umbral
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmSoulsLanternActor_BP_C::ActivateFlame_Umbral()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ActivateFlame_Umbral");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ActivateFlame_Axiom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmSoulsLanternActor_BP_C::ActivateFlame_Axiom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ActivateFlame_Axiom");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ActivateFlame_CurrentRealm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           FlameOppositeRealm                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           FlameCurrentRealm                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::ActivateFlame_CurrentRealm(class UNiagaraComponent* FlameOppositeRealm, class UNiagaraComponent* FlameCurrentRealm, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ActivateFlame_CurrentRealm");

	Params::ADualRealmSoulsLanternActor_BP_C_ActivateFlame_CurrentRealm_Params Parms{};

	Parms.FlameOppositeRealm = FlameOppositeRealm;
	Parms.FlameCurrentRealm = FlameCurrentRealm;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue = CallFunc_GetCurrentGameRealm_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ActivateFlame_Shining
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmSoulsLanternActor_BP_C::ActivateFlame_Shining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ActivateFlame_Shining");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.Deactivate Souls Lantern Cone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Collider_LanternSyphoning_C*CallFunc_GetSyphoningCollider_LanternSyphoningCollider           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::Deactivate_Souls_Lantern_Cone(int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider, TArray<class AActor*>& CallFunc_Map_Keys_Keys, class AActor* CallFunc_Array_Get_Item, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "Deactivate Souls Lantern Cone");

	Params::ADualRealmSoulsLanternActor_BP_C_Deactivate_Souls_Lantern_Cone_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSyphoningCollider_LanternSyphoningCollider = CallFunc_GetSyphoningCollider_LanternSyphoningCollider;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ActivateSoulsLanternCone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Collider_LanternSyphoning_C*CallFunc_GetSyphoningCollider_LanternSyphoningCollider           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::ActivateSoulsLanternCone(bool CallFunc_HasAuthority_ReturnValue, class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ActivateSoulsLanternCone");

	Params::ADualRealmSoulsLanternActor_BP_C_ActivateSoulsLanternCone_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetSyphoningCollider_LanternSyphoningCollider = CallFunc_GetSyphoningCollider_LanternSyphoningCollider;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.Set Dual Realm  Mask Parameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InnerAxiomMask                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InnerUmbralMask                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OuterAxiomMask                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OuterUmbralMask                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::Set_Dual_Realm__Mask_Parameters(double InnerAxiomMask, double InnerUmbralMask, double OuterAxiomMask, double OuterUmbralMask, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "Set Dual Realm  Mask Parameters");

	Params::ADualRealmSoulsLanternActor_BP_C_Set_Dual_Realm__Mask_Parameters_Params Parms{};

	Parms.InnerAxiomMask = InnerAxiomMask;
	Parms.InnerUmbralMask = InnerUmbralMask;
	Parms.OuterAxiomMask = OuterAxiomMask;
	Parms.OuterUmbralMask = OuterUmbralMask;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.SetLanternParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Cone_Length                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InitRadius                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EndRadius                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Cone_PostPro_Master                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::SetLanternParameters(double Cone_Length, float InitRadius, float EndRadius, float Cone_PostPro_Master, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "SetLanternParameters");

	Params::ADualRealmSoulsLanternActor_BP_C_SetLanternParameters_Params Parms{};

	Parms.Cone_Length = Cone_Length;
	Parms.InitRadius = InitRadius;
	Parms.EndRadius = EndRadius;
	Parms.Cone_PostPro_Master = Cone_PostPro_Master;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.Update Diegetic Lantern_DEPRECATED
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInUmbral                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SoundIntensity                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAkAnathemaEvent            Ak_Anathema_RTPC                                                 (Edit, BlueprintVisible)
// struct FLinearColor                ParticlesSpotColor                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ParticlesAxiomColor                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ParticlesUmbralColor                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LightSpotColor                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LightAxiomColor_DEPRECATED                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LightUmbralColor_DEPRECATED                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             UmbralSpeed                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxUmbralSize                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinUmbralSize                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxAxiomSpeed                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinAxiomSpeed                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxAxiomSize                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinAxiomSize                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerpUsingHSV_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_LinearColorLerpUsingHSV_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerpUsingHSV_Alpha_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinearColorLerpUsingHSV_Alpha_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::Update_Diegetic_Lantern_DEPRECATED(double Intensity, bool IsInUmbral, double SoundIntensity, const struct FAkAnathemaEvent& Ak_Anathema_RTPC, const struct FLinearColor& ParticlesSpotColor, const struct FLinearColor& ParticlesAxiomColor, const struct FLinearColor& ParticlesUmbralColor, const struct FLinearColor& LightSpotColor, const struct FLinearColor& LightAxiomColor_DEPRECATED, const struct FLinearColor& LightUmbralColor_DEPRECATED, double UmbralSpeed, double MaxUmbralSize, double MinUmbralSize, double MaxAxiomSpeed, double MinAxiomSpeed, double MaxAxiomSize, double MinAxiomSize, double CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_FClamp_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_3, const struct FLinearColor& CallFunc_LinearColorLerpUsingHSV_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerpUsingHSV_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, float CallFunc_LinearColorLerpUsingHSV_Alpha_ImplicitCast, float CallFunc_LinearColorLerpUsingHSV_Alpha_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "Update Diegetic Lantern_DEPRECATED");

	Params::ADualRealmSoulsLanternActor_BP_C_Update_Diegetic_Lantern_DEPRECATED_Params Parms{};

	Parms.Intensity = Intensity;
	Parms.IsInUmbral = IsInUmbral;
	Parms.SoundIntensity = SoundIntensity;
	Parms.Ak_Anathema_RTPC = Ak_Anathema_RTPC;
	Parms.ParticlesSpotColor = ParticlesSpotColor;
	Parms.ParticlesAxiomColor = ParticlesAxiomColor;
	Parms.ParticlesUmbralColor = ParticlesUmbralColor;
	Parms.LightSpotColor = LightSpotColor;
	Parms.LightAxiomColor_DEPRECATED = LightAxiomColor_DEPRECATED;
	Parms.LightUmbralColor_DEPRECATED = LightUmbralColor_DEPRECATED;
	Parms.UmbralSpeed = UmbralSpeed;
	Parms.MaxUmbralSize = MaxUmbralSize;
	Parms.MinUmbralSize = MinUmbralSize;
	Parms.MaxAxiomSpeed = MaxAxiomSpeed;
	Parms.MinAxiomSpeed = MinAxiomSpeed;
	Parms.MaxAxiomSize = MaxAxiomSize;
	Parms.MinAxiomSize = MinAxiomSize;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_LinearColorLerpUsingHSV_ReturnValue = CallFunc_LinearColorLerpUsingHSV_ReturnValue;
	Parms.CallFunc_LinearColorLerpUsingHSV_ReturnValue_1 = CallFunc_LinearColorLerpUsingHSV_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP = K2Node_DynamicCast_AsAnathema_Player_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_LinearColorLerpUsingHSV_Alpha_ImplicitCast = CallFunc_LinearColorLerpUsingHSV_Alpha_ImplicitCast;
	Parms.CallFunc_LinearColorLerpUsingHSV_Alpha_ImplicitCast_1 = CallFunc_LinearColorLerpUsingHSV_Alpha_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_2 = CallFunc_SetFloatParameter_Param_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_3 = CallFunc_SetFloatParameter_Param_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADualRealmSoulsLanternActor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ReceiveTick");

	Params::ADualRealmSoulsLanternActor_BP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_5_OnUpdateVisuals__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ADualRealmSoulsLanternActor_BP_C::BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_5_OnUpdateVisuals__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_5_OnUpdateVisuals__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_7_OnUpdateVisuals__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ADualRealmSoulsLanternActor_BP_C::BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_7_OnUpdateVisuals__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_7_OnUpdateVisuals__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_9_OnLanternHotspotStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USoulsLanternHotSpotComponent*HotSpot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_9_OnLanternHotspotStateChange__DelegateSignature(class USoulsLanternHotSpotComponent* HotSpot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_9_OnLanternHotspotStateChange__DelegateSignature");

	Params::ADualRealmSoulsLanternActor_BP_C_BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_9_OnLanternHotspotStateChange__DelegateSignature_Params Parms{};

	Parms.HotSpot = HotSpot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_11_OnLanternHotspotStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USoulsLanternHotSpotComponent*HotSpot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_11_OnLanternHotspotStateChange__DelegateSignature(class USoulsLanternHotSpotComponent* HotSpot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_11_OnLanternHotspotStateChange__DelegateSignature");

	Params::ADualRealmSoulsLanternActor_BP_C_BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_11_OnLanternHotspotStateChange__DelegateSignature_Params Parms{};

	Parms.HotSpot = HotSpot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_13_OnLanternStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInUmbral                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_13_OnLanternStateChanged__DelegateSignature(float Intensity, bool IsInUmbral)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_13_OnLanternStateChanged__DelegateSignature");

	Params::ADualRealmSoulsLanternActor_BP_C_BndEvt__DualRealmSoulsLanternActor_BP_SoulsLanternComponent_K2Node_ComponentBoundEvent_13_OnLanternStateChanged__DelegateSignature_Params Parms{};

	Parms.Intensity = Intensity;
	Parms.IsInUmbral = IsInUmbral;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.UpdateShiningLookAt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TickDeltaSeconds                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::UpdateShiningLookAt(double TickDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "UpdateShiningLookAt");

	Params::ADualRealmSoulsLanternActor_BP_C_UpdateShiningLookAt_Params Parms{};

	Parms.TickDeltaSeconds = TickDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.OnComponentBeginOverlap_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ADualRealmSoulsLanternActor_BP_C::OnComponentBeginOverlap_Event(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "OnComponentBeginOverlap_Event");

	Params::ADualRealmSoulsLanternActor_BP_C_OnComponentBeginOverlap_Event_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.OnComponentEndOverlap_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::OnComponentEndOverlap_Event(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "OnComponentEndOverlap_Event");

	Params::ADualRealmSoulsLanternActor_BP_C_OnComponentEndOverlap_Event_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.Init Shining Overlaps
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmSoulsLanternActor_BP_C::Init_Shining_Overlaps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "Init Shining Overlaps");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.OnCurrentRealmChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              CurrentRealm                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              PrevRealm                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::OnCurrentRealmChanged_Event(enum class EGameRealm CurrentRealm, enum class EGameRealm PrevRealm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "OnCurrentRealmChanged_Event");

	Params::ADualRealmSoulsLanternActor_BP_C_OnCurrentRealmChanged_Event_Params Parms{};

	Parms.CurrentRealm = CurrentRealm;
	Parms.PrevRealm = PrevRealm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmSoulsLanternActor_BP.DualRealmSoulsLanternActor_BP_C.ExecuteUbergraph_DualRealmSoulsLanternActor_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATranscendLookController_C*  K2Node_DynamicCast_AsTranscend_Look_Controller                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_3(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_4(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_5(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_6(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_7(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_7(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoulsLanternHotSpotComponent*K2Node_ComponentBoundEvent_hotSpot_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USoulsLanternHotSpotComponent*K2Node_ComponentBoundEvent_hotSpot                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Intensity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsInUmbral                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_LanternCompass_C*       K2Node_DynamicCast_AsABP_Lantern_Compass                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_TickDeltaSeconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP_2              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_5                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP_3              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANaturalLighting*            CallFunc_GetNaturalLighting_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_6                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_7                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_8                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Collider_LanternSoulsucking_C*K2Node_DynamicCast_AsBP_Collider_Lantern_Soulsucking             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn_2                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn_3                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClientLanternOnHostEnabled_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn_4                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClientLanternOnHostEnabled_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClientLanternOnHostEnabled_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_6                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP_4              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetBaseAimRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Collider_LanternSyphoning_C*CallFunc_GetSyphoningCollider_LanternSyphoningCollider           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OverlappedComponent_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherComp_1                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OtherBodyIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFromSweep                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_SweepResult                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OverlappedComponent                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherComp                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OtherBodyIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USoulsLanternComponent*      CallFunc_GetSoulsLanternComponent_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetIntensityForLantern_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectToActor_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// enum class ETeamAttitude           CallFunc_GetTeamAttitudeBetweenActors_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeamAttitude           CallFunc_GetTeamAttitudeBetweenActors_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_7                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP_5              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNaturalLightingPlayerLightDataCallFunc_GetPlayerLightData_ReturnValue                          (NoDestructor)
// bool                               CallFunc_GetLOTF2GameState_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2GameState*             CallFunc_GetLOTF2GameState_GameState                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_CurrentRealm                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_PrevRealm                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_9                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_10                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetLanternParameters_Cone_Length_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Set_Dual_Realm__Mask_Parameters_OuterUmbralMask_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Set_Dual_Realm__Mask_Parameters_OuterAxiomMask_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Set_Dual_Realm__Mask_Parameters_InnerUmbralMask_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Set_Dual_Realm__Mask_Parameters_InnerAxiomMask_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ShiningLightOuterConeAngle_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ShiningLightAttenuationRadius_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LanternLightAttenuantionRadius_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LanternLightIntensity_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ShiningLightIntensity_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRtpcOnPlayer_val_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateShiningLookAt_TickDeltaSeconds_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_A_ImplicitCast_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetIntensity_NewIntensity_ImplicitCast_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmSoulsLanternActor_BP_C::ExecuteUbergraph_DualRealmSoulsLanternActor_BP(int32 EntryPoint, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_2, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_3, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class ATranscendLookController_C* K2Node_DynamicCast_AsTranscend_Look_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_3, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_3, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_4, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_4, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_5, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_5, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_6, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_6, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_7, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_7, class USoulsLanternHotSpotComponent* K2Node_ComponentBoundEvent_hotSpot_1, class USoulsLanternHotSpotComponent* K2Node_ComponentBoundEvent_hotSpot, float K2Node_ComponentBoundEvent_Intensity, bool K2Node_ComponentBoundEvent_IsInUmbral, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UABP_LanternCompass_C* K2Node_DynamicCast_AsABP_Lantern_Compass, bool K2Node_DynamicCast_bSuccess_2, double K2Node_CustomEvent_TickDeltaSeconds, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue_2, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_3, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_5, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_3, bool K2Node_DynamicCast_bSuccess_5, class ANaturalLighting* CallFunc_GetNaturalLighting_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_6, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_4, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_8, class AActor* CallFunc_GetOwner_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, class ABP_Collider_LanternSoulsucking_C* K2Node_DynamicCast_AsBP_Collider_Lantern_Soulsucking, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_8, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_7, class APawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_8, class APawn* K2Node_DynamicCast_AsPawn_2, bool K2Node_DynamicCast_bSuccess_9, class APawn* K2Node_DynamicCast_AsPawn_3, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsLocallyControlled_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, bool CallFunc_IsClientLanternOnHostEnabled_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn_4, bool K2Node_DynamicCast_bSuccess_11, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsClientLanternOnHostEnabled_ReturnValue_1, bool CallFunc_IsClientLanternOnHostEnabled_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_6, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_4, bool K2Node_DynamicCast_bSuccess_12, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, class ABP_Collider_LanternSyphoning_C* CallFunc_GetSyphoningCollider_LanternSyphoningCollider, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_1, class AActor* K2Node_CustomEvent_OtherActor_1, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp_1, int32 K2Node_CustomEvent_OtherBodyIndex_1, bool K2Node_CustomEvent_bFromSweep, const struct FHitResult& K2Node_CustomEvent_SweepResult, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class USoulsLanternComponent* CallFunc_GetSoulsLanternComponent_ReturnValue, float CallFunc_GetIntensityForLantern_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue, enum class ETeamAttitude CallFunc_GetTeamAttitudeBetweenActors_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ETeamAttitude CallFunc_GetTeamAttitudeBetweenActors_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_7, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_5, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, const struct FNaturalLightingPlayerLightData& CallFunc_GetPlayerLightData_ReturnValue, bool CallFunc_GetLOTF2GameState_IsValid, class ALOTF2GameState* CallFunc_GetLOTF2GameState_GameState, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_ReturnValue_1, double CallFunc_Lerp_ReturnValue_2, double CallFunc_Lerp_ReturnValue_3, enum class EGameRealm K2Node_CustomEvent_CurrentRealm, enum class EGameRealm K2Node_CustomEvent_PrevRealm, bool CallFunc_HasAuthority_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, double CallFunc_MakeLiteralDouble_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_9, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_10, bool CallFunc_HasAuthority_ReturnValue_1, double CallFunc_SetLanternParameters_Cone_Length_ImplicitCast, double CallFunc_Set_Dual_Realm__Mask_Parameters_OuterUmbralMask_ImplicitCast, double CallFunc_Set_Dual_Realm__Mask_Parameters_OuterAxiomMask_ImplicitCast, double CallFunc_Set_Dual_Realm__Mask_Parameters_InnerUmbralMask_ImplicitCast, double CallFunc_Set_Dual_Realm__Mask_Parameters_InnerAxiomMask_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast, double K2Node_VariableSet_ShiningLightOuterConeAngle_ImplicitCast, double CallFunc_Lerp_A_ImplicitCast_1, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, double K2Node_VariableSet_ShiningLightAttenuationRadius_ImplicitCast, double K2Node_VariableSet_LanternLightAttenuantionRadius_ImplicitCast, double K2Node_VariableSet_LanternLightIntensity_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_ShiningLightIntensity_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetRtpcOnPlayer_val_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_UpdateShiningLookAt_TickDeltaSeconds_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast_1, double CallFunc_Lerp_Alpha_ImplicitCast_2, double CallFunc_Lerp_A_ImplicitCast_2, double CallFunc_Lerp_A_ImplicitCast_3, double CallFunc_Lerp_B_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast_1, double CallFunc_Lerp_B_ImplicitCast_2, float CallFunc_SetIntensity_NewIntensity_ImplicitCast, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_1, float CallFunc_SetIntensity_NewIntensity_ImplicitCast_2, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmSoulsLanternActor_BP_C", "ExecuteUbergraph_DualRealmSoulsLanternActor_BP");

	Params::ADualRealmSoulsLanternActor_BP_C_ExecuteUbergraph_DualRealmSoulsLanternActor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_3 = CallFunc_GetWorldSubsystem_ReturnValue_3;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue = CallFunc_GetCurrentGameRealm_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP = K2Node_DynamicCast_AsAnathema_Player_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsTranscend_Look_Controller = K2Node_DynamicCast_AsTranscend_Look_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_3 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_3;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_3 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_3;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_4 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_4;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_4 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_4;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_5 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_5;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_5 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_5;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_6 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_6;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_6 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_6;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_7 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_7;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_7 = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_7;
	Parms.K2Node_ComponentBoundEvent_hotSpot_1 = K2Node_ComponentBoundEvent_hotSpot_1;
	Parms.K2Node_ComponentBoundEvent_hotSpot = K2Node_ComponentBoundEvent_hotSpot;
	Parms.K2Node_ComponentBoundEvent_Intensity = K2Node_ComponentBoundEvent_Intensity;
	Parms.K2Node_ComponentBoundEvent_IsInUmbral = K2Node_ComponentBoundEvent_IsInUmbral;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsABP_Lantern_Compass = K2Node_DynamicCast_AsABP_Lantern_Compass;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_TickDeltaSeconds = K2Node_CustomEvent_TickDeltaSeconds;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_2 = CallFunc_Conv_VectorToLinearColor_ReturnValue_2;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_3 = CallFunc_Conv_VectorToLinearColor_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP_1 = K2Node_DynamicCast_AsAnathema_Player_Character_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP_2 = K2Node_DynamicCast_AsAnathema_Player_Character_BP_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_4 = CallFunc_GetWorldSubsystem_ReturnValue_4;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_5 = CallFunc_GetWorldSubsystem_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP_3 = K2Node_DynamicCast_AsAnathema_Player_Character_BP_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetNaturalLighting_ReturnValue = CallFunc_GetNaturalLighting_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_2 = CallFunc_IsLocallyControlled_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_6 = CallFunc_GetWorldSubsystem_ReturnValue_6;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_7 = CallFunc_GetWorldSubsystem_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_4 = CallFunc_Conv_VectorToLinearColor_ReturnValue_4;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_8 = CallFunc_GetWorldSubsystem_ReturnValue_8;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_Collider_Lantern_Soulsucking = K2Node_DynamicCast_AsBP_Collider_Lantern_Soulsucking;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsPawn_1 = K2Node_DynamicCast_AsPawn_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsPawn_2 = K2Node_DynamicCast_AsPawn_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsPawn_3 = K2Node_DynamicCast_AsPawn_3;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_3 = CallFunc_IsLocallyControlled_ReturnValue_3;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_4 = CallFunc_IsLocallyControlled_ReturnValue_4;
	Parms.CallFunc_GetOwner_ReturnValue_5 = CallFunc_GetOwner_ReturnValue_5;
	Parms.CallFunc_IsClientLanternOnHostEnabled_ReturnValue = CallFunc_IsClientLanternOnHostEnabled_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn_4 = K2Node_DynamicCast_AsPawn_4;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsClientLanternOnHostEnabled_ReturnValue_1 = CallFunc_IsClientLanternOnHostEnabled_ReturnValue_1;
	Parms.CallFunc_IsClientLanternOnHostEnabled_ReturnValue_2 = CallFunc_IsClientLanternOnHostEnabled_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_6 = CallFunc_GetOwner_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP_4 = K2Node_DynamicCast_AsAnathema_Player_Character_BP_4;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_GetBaseAimRotation_ReturnValue = CallFunc_GetBaseAimRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetSyphoningCollider_LanternSyphoningCollider = CallFunc_GetSyphoningCollider_LanternSyphoningCollider;
	Parms.K2Node_CustomEvent_OverlappedComponent_1 = K2Node_CustomEvent_OverlappedComponent_1;
	Parms.K2Node_CustomEvent_OtherActor_1 = K2Node_CustomEvent_OtherActor_1;
	Parms.K2Node_CustomEvent_OtherComp_1 = K2Node_CustomEvent_OtherComp_1;
	Parms.K2Node_CustomEvent_OtherBodyIndex_1 = K2Node_CustomEvent_OtherBodyIndex_1;
	Parms.K2Node_CustomEvent_bFromSweep = K2Node_CustomEvent_bFromSweep;
	Parms.K2Node_CustomEvent_SweepResult = K2Node_CustomEvent_SweepResult;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_CustomEvent_OverlappedComponent = K2Node_CustomEvent_OverlappedComponent;
	Parms.K2Node_CustomEvent_OtherActor = K2Node_CustomEvent_OtherActor;
	Parms.K2Node_CustomEvent_OtherComp = K2Node_CustomEvent_OtherComp;
	Parms.K2Node_CustomEvent_OtherBodyIndex = K2Node_CustomEvent_OtherBodyIndex;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_GetSoulsLanternComponent_ReturnValue = CallFunc_GetSoulsLanternComponent_ReturnValue;
	Parms.CallFunc_GetIntensityForLantern_ReturnValue = CallFunc_GetIntensityForLantern_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_ApplyBattleEffectToActor_ReturnValue = CallFunc_ApplyBattleEffectToActor_ReturnValue;
	Parms.CallFunc_GetTeamAttitudeBetweenActors_ReturnValue = CallFunc_GetTeamAttitudeBetweenActors_ReturnValue;
	Parms.CallFunc_GetAttachParentActor_ReturnValue_1 = CallFunc_GetAttachParentActor_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetTeamAttitudeBetweenActors_ReturnValue_1 = CallFunc_GetTeamAttitudeBetweenActors_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_7 = CallFunc_GetOwner_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP_5 = K2Node_DynamicCast_AsAnathema_Player_Character_BP_5;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_GetPlayerLightData_ReturnValue = CallFunc_GetPlayerLightData_ReturnValue;
	Parms.CallFunc_GetLOTF2GameState_IsValid = CallFunc_GetLOTF2GameState_IsValid;
	Parms.CallFunc_GetLOTF2GameState_GameState = CallFunc_GetLOTF2GameState_GameState;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.K2Node_CustomEvent_CurrentRealm = K2Node_CustomEvent_CurrentRealm;
	Parms.K2Node_CustomEvent_PrevRealm = K2Node_CustomEvent_PrevRealm;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_9 = CallFunc_GetWorldSubsystem_ReturnValue_9;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_10 = CallFunc_GetWorldSubsystem_ReturnValue_10;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_SetLanternParameters_Cone_Length_ImplicitCast = CallFunc_SetLanternParameters_Cone_Length_ImplicitCast;
	Parms.CallFunc_Set_Dual_Realm__Mask_Parameters_OuterUmbralMask_ImplicitCast = CallFunc_Set_Dual_Realm__Mask_Parameters_OuterUmbralMask_ImplicitCast;
	Parms.CallFunc_Set_Dual_Realm__Mask_Parameters_OuterAxiomMask_ImplicitCast = CallFunc_Set_Dual_Realm__Mask_Parameters_OuterAxiomMask_ImplicitCast;
	Parms.CallFunc_Set_Dual_Realm__Mask_Parameters_InnerUmbralMask_ImplicitCast = CallFunc_Set_Dual_Realm__Mask_Parameters_InnerUmbralMask_ImplicitCast;
	Parms.CallFunc_Set_Dual_Realm__Mask_Parameters_InnerAxiomMask_ImplicitCast = CallFunc_Set_Dual_Realm__Mask_Parameters_InnerAxiomMask_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast = CallFunc_Lerp_A_ImplicitCast;
	Parms.K2Node_VariableSet_ShiningLightOuterConeAngle_ImplicitCast = K2Node_VariableSet_ShiningLightOuterConeAngle_ImplicitCast;
	Parms.CallFunc_Lerp_A_ImplicitCast_1 = CallFunc_Lerp_A_ImplicitCast_1;
	Parms.CallFunc_RInterpTo_DeltaTime_ImplicitCast = CallFunc_RInterpTo_DeltaTime_ImplicitCast;
	Parms.K2Node_VariableSet_ShiningLightAttenuationRadius_ImplicitCast = K2Node_VariableSet_ShiningLightAttenuationRadius_ImplicitCast;
	Parms.K2Node_VariableSet_LanternLightAttenuantionRadius_ImplicitCast = K2Node_VariableSet_LanternLightAttenuantionRadius_ImplicitCast;
	Parms.K2Node_VariableSet_LanternLightIntensity_ImplicitCast = K2Node_VariableSet_LanternLightIntensity_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_ShiningLightIntensity_ImplicitCast = K2Node_VariableSet_ShiningLightIntensity_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetRtpcOnPlayer_val_ImplicitCast = CallFunc_SetRtpcOnPlayer_val_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_UpdateShiningLookAt_TickDeltaSeconds_ImplicitCast = CallFunc_UpdateShiningLookAt_TickDeltaSeconds_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_1 = CallFunc_Lerp_Alpha_ImplicitCast_1;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast_2 = CallFunc_Lerp_Alpha_ImplicitCast_2;
	Parms.CallFunc_Lerp_A_ImplicitCast_2 = CallFunc_Lerp_A_ImplicitCast_2;
	Parms.CallFunc_Lerp_A_ImplicitCast_3 = CallFunc_Lerp_A_ImplicitCast_3;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast_1 = CallFunc_Lerp_B_ImplicitCast_1;
	Parms.CallFunc_Lerp_B_ImplicitCast_2 = CallFunc_Lerp_B_ImplicitCast_2;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast = CallFunc_SetIntensity_NewIntensity_ImplicitCast;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_1 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_1;
	Parms.CallFunc_SetIntensity_NewIntensity_ImplicitCast_2 = CallFunc_SetIntensity_NewIntensity_ImplicitCast_2;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast = CallFunc_RInterpTo_InterpSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


