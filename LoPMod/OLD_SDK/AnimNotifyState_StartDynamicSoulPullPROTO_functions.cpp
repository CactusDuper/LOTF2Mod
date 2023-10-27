#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotifyState_StartDynamicSoulPullPROTO.AnimNotifyState_StartDynamicSoulPullPROTO_C
// (None)

class UClass* UAnimNotifyState_StartDynamicSoulPullPROTO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_StartDynamicSoulPullPROTO_C");

	return Clss;
}


// AnimNotifyState_StartDynamicSoulPullPROTO_C AnimNotifyState_StartDynamicSoulPullPROTO.Default__AnimNotifyState_StartDynamicSoulPullPROTO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotifyState_StartDynamicSoulPullPROTO_C* UAnimNotifyState_StartDynamicSoulPullPROTO_C::GetDefaultObj()
{
	static class UAnimNotifyState_StartDynamicSoulPullPROTO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_StartDynamicSoulPullPROTO_C*>(UAnimNotifyState_StartDynamicSoulPullPROTO_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotifyState_StartDynamicSoulPullPROTO.AnimNotifyState_StartDynamicSoulPullPROTO_C.Received_NotifyBegin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseAICharacter_BP_C*       K2Node_DynamicCast_AsBase_AICharacter_BP                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexSoulFlayComponent*       CallFunc_GetSoulFlayComponentFromActor_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetedActor_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnathemaAbilitySystemComponent*K2Node_DynamicCast_AsAnathema_Ability_System_Component           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            CallFunc_FindFirstPrimaryInstanceFromParentClass_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_SyncAnim*                K2Node_DynamicCast_AsGA_Sync_Anim                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOtherParticipantActor_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_StartDynamicSoulPull_maxDistance_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotifyState_StartDynamicSoulPullPROTO_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* TargetActor, class AActor* CallFunc_GetOwner_ReturnValue, class ABaseAICharacter_BP_C* K2Node_DynamicCast_AsBase_AICharacter_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class UHexSoulFlayComponent* CallFunc_GetSoulFlayComponentFromActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetTargetedActor_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAnathemaAbilitySystemComponent* K2Node_DynamicCast_AsAnathema_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UGameplayAbility* CallFunc_FindFirstPrimaryInstanceFromParentClass_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UGA_SyncAnim* K2Node_DynamicCast_AsGA_Sync_Anim, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_Normal_ReturnValue, class AActor* CallFunc_GetOtherParticipantActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_StartDynamicSoulPull_maxDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_StartDynamicSoulPullPROTO_C", "Received_NotifyBegin");

	Params::UAnimNotifyState_StartDynamicSoulPullPROTO_C_Received_NotifyBegin_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.EventReference = EventReference;
	Parms.TargetActor = TargetActor;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_AICharacter_BP = K2Node_DynamicCast_AsBase_AICharacter_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetSoulFlayComponentFromActor_ReturnValue = CallFunc_GetSoulFlayComponentFromActor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetTargetedActor_ReturnValue = CallFunc_GetTargetedActor_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnathema_Ability_System_Component = K2Node_DynamicCast_AsAnathema_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_FindFirstPrimaryInstanceFromParentClass_ReturnValue = CallFunc_FindFirstPrimaryInstanceFromParentClass_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Sync_Anim = K2Node_DynamicCast_AsGA_Sync_Anim;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_GetOtherParticipantActor_ReturnValue = CallFunc_GetOtherParticipantActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StartDynamicSoulPull_maxDistance_ImplicitCast = CallFunc_StartDynamicSoulPull_maxDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


