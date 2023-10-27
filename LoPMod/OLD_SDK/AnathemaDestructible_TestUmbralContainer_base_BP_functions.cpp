#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C
// (Actor)

class UClass* AAnathemaDestructible_TestUmbralContainer_base_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaDestructible_TestUmbralContainer_base_BP_C");

	return Clss;
}


// AnathemaDestructible_TestUmbralContainer_base_BP_C AnathemaDestructible_TestUmbralContainer_base_BP.Default__AnathemaDestructible_TestUmbralContainer_base_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaDestructible_TestUmbralContainer_base_BP_C* AAnathemaDestructible_TestUmbralContainer_base_BP_C::GetDefaultObj()
{
	static class AAnathemaDestructible_TestUmbralContainer_base_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaDestructible_TestUmbralContainer_base_BP_C*>(AAnathemaDestructible_TestUmbralContainer_base_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C.MoveItemDropSystem__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestUmbralContainer_base_BP_C::MoveItemDropSystem__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestUmbralContainer_base_BP_C", "MoveItemDropSystem__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C.MoveItemDropSystem__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestUmbralContainer_base_BP_C::MoveItemDropSystem__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestUmbralContainer_base_BP_C", "MoveItemDropSystem__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestUmbralContainer_base_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestUmbralContainer_base_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C.OnDestructibleDestroyed_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestUmbralContainer_base_BP_C::OnDestructibleDestroyed_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestUmbralContainer_base_BP_C", "OnDestructibleDestroyed_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C.OnDestructibleReset_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestUmbralContainer_base_BP_C::OnDestructibleReset_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestUmbralContainer_base_BP_C", "OnDestructibleReset_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C.BndEvt__AnathemaDestructible_TestUmbralContainer_base_BP_HexSoulFlayComponent_K2Node_ComponentBoundEvent_2_SoulPullStartedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PullDirectionWS                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnathemaDestructible_TestUmbralContainer_base_BP_C::BndEvt__AnathemaDestructible_TestUmbralContainer_base_BP_HexSoulFlayComponent_K2Node_ComponentBoundEvent_2_SoulPullStartedDelegate__DelegateSignature(class AActor* Instigator, const struct FVector& PullDirectionWS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestUmbralContainer_base_BP_C", "BndEvt__AnathemaDestructible_TestUmbralContainer_base_BP_HexSoulFlayComponent_K2Node_ComponentBoundEvent_2_SoulPullStartedDelegate__DelegateSignature");

	Params::AAnathemaDestructible_TestUmbralContainer_base_BP_C_BndEvt__AnathemaDestructible_TestUmbralContainer_base_BP_HexSoulFlayComponent_K2Node_ComponentBoundEvent_2_SoulPullStartedDelegate__DelegateSignature_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.PullDirectionWS = PullDirectionWS;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C.SpawnPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestUmbralContainer_base_BP_C::SpawnPickup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestUmbralContainer_base_BP_C", "SpawnPickup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C.DestroySuperLootFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestUmbralContainer_base_BP_C::DestroySuperLootFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestUmbralContainer_base_BP_C", "DestroySuperLootFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestUmbralContainer_base_BP.AnathemaDestructible_TestUmbralContainer_base_BP_C.ExecuteUbergraph_AnathemaDestructible_TestUmbralContainer_base_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecHandle  CallFunc_K2_GiveAbility_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_2                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_Instigator                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_PullDirectionWS                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHost_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_MakeSpawnPickupTargetDataHandle_ReturnValue             (None)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_3                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPlayRate_NewRate_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnathemaDestructible_TestUmbralContainer_base_BP_C::ExecuteUbergraph_AnathemaDestructible_TestUmbralContainer_base_BP(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, const struct FGameplayAbilitySpecHandle& CallFunc_K2_GiveAbility_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, class AActor* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_PullDirectionWS, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, bool CallFunc_IsHost_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, const struct FGameplayAbilityTargetDataHandle& CallFunc_MakeSpawnPickupTargetDataHandle_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetPlayRate_NewRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestUmbralContainer_base_BP_C", "ExecuteUbergraph_AnathemaDestructible_TestUmbralContainer_base_BP");

	Params::AAnathemaDestructible_TestUmbralContainer_base_BP_C_ExecuteUbergraph_AnathemaDestructible_TestUmbralContainer_base_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GiveAbility_ReturnValue = CallFunc_K2_GiveAbility_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_1 = CallFunc_SpawnSystemAtLocation_ReturnValue_1;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_2 = CallFunc_SpawnSystemAtLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Instigator = K2Node_ComponentBoundEvent_Instigator;
	Parms.K2Node_ComponentBoundEvent_PullDirectionWS = K2Node_ComponentBoundEvent_PullDirectionWS;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP = K2Node_DynamicCast_AsAnathema_Player_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_IsHost_ReturnValue = CallFunc_IsHost_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_4 = CallFunc_K2_GetComponentLocation_ReturnValue_4;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_5 = CallFunc_K2_GetComponentLocation_ReturnValue_5;
	Parms.CallFunc_MakeSpawnPickupTargetDataHandle_ReturnValue = CallFunc_MakeSpawnPickupTargetDataHandle_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_3 = CallFunc_SpawnSystemAtLocation_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetPlayRate_NewRate_ImplicitCast = CallFunc_SetPlayRate_NewRate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


