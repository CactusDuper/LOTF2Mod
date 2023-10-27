#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C
// (Actor)

class UClass* ADualRealmForgedAnchorActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DualRealmForgedAnchorActor_BP_C");

	return Clss;
}


// DualRealmForgedAnchorActor_BP_C DualRealmForgedAnchorActor_BP.Default__DualRealmForgedAnchorActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADualRealmForgedAnchorActor_BP_C* ADualRealmForgedAnchorActor_BP_C::GetDefaultObj()
{
	static class ADualRealmForgedAnchorActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADualRealmForgedAnchorActor_BP_C*>(ADualRealmForgedAnchorActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADualRealmForgedAnchorActor_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.StateChangeHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EForgedAnchorState      State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmForgedAnchorActor_BP_C::StateChangeHandler(enum class EForgedAnchorState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "StateChangeHandler");

	Params::ADualRealmForgedAnchorActor_BP_C_StateChangeHandler_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.OnAnimationStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmForgedAnchorActor_BP_C::OnAnimationStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "OnAnimationStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.OnAnimationEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmForgedAnchorActor_BP_C::OnAnimationEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "OnAnimationEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmForgedAnchorActor_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "ReceiveTick");

	Params::ADualRealmForgedAnchorActor_BP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.OnDestroyedState_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSkipTransitionAnimation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmForgedAnchorActor_BP_C::OnDestroyedState_BP(bool bSkipTransitionAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "OnDestroyedState_BP");

	Params::ADualRealmForgedAnchorActor_BP_C_OnDestroyedState_BP_Params Parms{};

	Parms.bSkipTransitionAnimation = bSkipTransitionAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.ShowDestroyTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmForgedAnchorActor_BP_C::ShowDestroyTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "ShowDestroyTransition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.OnLoadingFinished_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmForgedAnchorActor_BP_C::OnLoadingFinished_Event_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "OnLoadingFinished_Event_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ADualRealmForgedAnchorActor_BP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.OnPlacingStateUpdated_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADualRealmForgedAnchorActor_BP_C::OnPlacingStateUpdated_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "OnPlacingStateUpdated_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.UpdateForgedStateSideEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmForgedAnchorActor_BP_C::UpdateForgedStateSideEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "UpdateForgedStateSideEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.OnOldForgingAnchorDestroyed_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void ADualRealmForgedAnchorActor_BP_C::OnOldForgingAnchorDestroyed_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "OnOldForgingAnchorDestroyed_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.OnOldForgingAnchorDestroyedCosmetic
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADualRealmForgedAnchorActor_BP_C::OnOldForgingAnchorDestroyedCosmetic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "OnOldForgingAnchorDestroyedCosmetic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DualRealmForgedAnchorActor_BP.DualRealmForgedAnchorActor_BP_C.ExecuteUbergraph_DualRealmForgedAnchorActor_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EForgedAnchorState      K2Node_CustomEvent_state                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayRate_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_DynamicCast_AsAnim_Sequence_Base                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSkipTransitionAnimation                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AProto_forgedAnchor_remains_BP_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLOTF2GameState_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2GameState*             CallFunc_GetLOTF2GameState_GameState                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLOTF2GameState_IsValid_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2GameState*             CallFunc_GetLOTF2GameState_GameState_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLoadingLevels_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSafeToForge_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EForgedAnchorState      CallFunc_GetForgedState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AWitherForbiddenArea_BP_C*   K2Node_DynamicCast_AsWither_Forbidden_Area_BP                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWitherForbiddenArea_BP_C*   K2Node_DynamicCast_AsWither_Forbidden_Area_BP_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAkAnathemaEvent            K2Node_MakeStruct_AkAnathemaEvent                                (None)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_RequiredTimeToForge_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADualRealmForgedAnchorActor_BP_C::ExecuteUbergraph_DualRealmForgedAnchorActor_BP(int32 EntryPoint, enum class EForgedAnchorState K2Node_CustomEvent_state, float CallFunc_GetPlayRate_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UAnimSequenceBase* K2Node_DynamicCast_AsAnim_Sequence_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, bool K2Node_Event_bSkipTransitionAnimation, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AProto_forgedAnchor_remains_BP_C* CallFunc_FinishSpawningActor_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetLOTF2GameState_IsValid, class ALOTF2GameState* CallFunc_GetLOTF2GameState_GameState, bool CallFunc_GetLOTF2GameState_IsValid_1, class ALOTF2GameState* CallFunc_GetLOTF2GameState_GameState_1, bool CallFunc_IsLoadingLevels_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsSafeToForge_ReturnValue, enum class EForgedAnchorState CallFunc_GetForgedState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AWitherForbiddenArea_BP_C* K2Node_DynamicCast_AsWither_Forbidden_Area_BP, bool K2Node_DynamicCast_bSuccess_1, class AWitherForbiddenArea_BP_C* K2Node_DynamicCast_AsWither_Forbidden_Area_BP_1, bool K2Node_DynamicCast_bSuccess_2, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FAkAnathemaEvent& K2Node_MakeStruct_AkAnathemaEvent, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float K2Node_VariableSet_RequiredTimeToForge_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DualRealmForgedAnchorActor_BP_C", "ExecuteUbergraph_DualRealmForgedAnchorActor_BP");

	Params::ADualRealmForgedAnchorActor_BP_C_ExecuteUbergraph_DualRealmForgedAnchorActor_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_state = K2Node_CustomEvent_state;
	Parms.CallFunc_GetPlayRate_ReturnValue = CallFunc_GetPlayRate_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Sequence_Base = K2Node_DynamicCast_AsAnim_Sequence_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.K2Node_Event_bSkipTransitionAnimation = K2Node_Event_bSkipTransitionAnimation;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_1 = CallFunc_SpawnSystemAtLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLOTF2GameState_IsValid = CallFunc_GetLOTF2GameState_IsValid;
	Parms.CallFunc_GetLOTF2GameState_GameState = CallFunc_GetLOTF2GameState_GameState;
	Parms.CallFunc_GetLOTF2GameState_IsValid_1 = CallFunc_GetLOTF2GameState_IsValid_1;
	Parms.CallFunc_GetLOTF2GameState_GameState_1 = CallFunc_GetLOTF2GameState_GameState_1;
	Parms.CallFunc_IsLoadingLevels_ReturnValue = CallFunc_IsLoadingLevels_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsSafeToForge_ReturnValue = CallFunc_IsSafeToForge_ReturnValue;
	Parms.CallFunc_GetForgedState_ReturnValue = CallFunc_GetForgedState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWither_Forbidden_Area_BP = K2Node_DynamicCast_AsWither_Forbidden_Area_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWither_Forbidden_Area_BP_1 = K2Node_DynamicCast_AsWither_Forbidden_Area_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_MakeStruct_AkAnathemaEvent = K2Node_MakeStruct_AkAnathemaEvent;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_2 = CallFunc_SpawnSystemAtLocation_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.K2Node_VariableSet_RequiredTimeToForge_ImplicitCast = K2Node_VariableSet_RequiredTimeToForge_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


