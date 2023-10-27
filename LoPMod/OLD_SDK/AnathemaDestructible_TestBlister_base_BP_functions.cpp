#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaDestructible_TestBlister_base_BP.AnathemaDestructible_TestBlister_base_BP_C
// (Actor)

class UClass* AAnathemaDestructible_TestBlister_base_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaDestructible_TestBlister_base_BP_C");

	return Clss;
}


// AnathemaDestructible_TestBlister_base_BP_C AnathemaDestructible_TestBlister_base_BP.Default__AnathemaDestructible_TestBlister_base_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaDestructible_TestBlister_base_BP_C* AAnathemaDestructible_TestBlister_base_BP_C::GetDefaultObj()
{
	static class AAnathemaDestructible_TestBlister_base_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaDestructible_TestBlister_base_BP_C*>(AAnathemaDestructible_TestBlister_base_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnathemaDestructible_TestBlister_base_BP.AnathemaDestructible_TestBlister_base_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestBlister_base_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestBlister_base_BP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestBlister_base_BP.AnathemaDestructible_TestBlister_base_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestBlister_base_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestBlister_base_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestBlister_base_BP.AnathemaDestructible_TestBlister_base_BP_C.BndEvt__AnathemaDestructible_TestBlister_base_BP_HealthComponent_K2Node_ComponentBoundEvent_0_HealthComponentOnDeathDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatorActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       InstigatorTags                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bDeathWasObserved                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnathemaDestructible_TestBlister_base_BP_C::BndEvt__AnathemaDestructible_TestBlister_base_BP_HealthComponent_K2Node_ComponentBoundEvent_0_HealthComponentOnDeathDelegate__DelegateSignature(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestBlister_base_BP_C", "BndEvt__AnathemaDestructible_TestBlister_base_BP_HealthComponent_K2Node_ComponentBoundEvent_0_HealthComponentOnDeathDelegate__DelegateSignature");

	Params::AAnathemaDestructible_TestBlister_base_BP_C_BndEvt__AnathemaDestructible_TestBlister_base_BP_HealthComponent_K2Node_ComponentBoundEvent_0_HealthComponentOnDeathDelegate__DelegateSignature_Params Parms{};

	Parms.InstigatorActor = InstigatorActor;
	Parms.InstigatorTags = InstigatorTags;
	Parms.bDeathWasObserved = bDeathWasObserved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnathemaDestructible_TestBlister_base_BP.AnathemaDestructible_TestBlister_base_BP_C.BndEvt__AnathemaDestructible_TestBlister_base_BP_Mojo_K2Node_ComponentBoundEvent_1_OnMojoChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewMojo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      MojoChangeInstigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAnathemaDestructible_TestBlister_base_BP_C::BndEvt__AnathemaDestructible_TestBlister_base_BP_Mojo_K2Node_ComponentBoundEvent_1_OnMojoChanged__DelegateSignature(float NewMojo, class AActor* MojoChangeInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestBlister_base_BP_C", "BndEvt__AnathemaDestructible_TestBlister_base_BP_Mojo_K2Node_ComponentBoundEvent_1_OnMojoChanged__DelegateSignature");

	Params::AAnathemaDestructible_TestBlister_base_BP_C_BndEvt__AnathemaDestructible_TestBlister_base_BP_Mojo_K2Node_ComponentBoundEvent_1_OnMojoChanged__DelegateSignature_Params Parms{};

	Parms.NewMojo = NewMojo;
	Parms.MojoChangeInstigator = MojoChangeInstigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnathemaDestructible_TestBlister_base_BP.AnathemaDestructible_TestBlister_base_BP_C.BndEvt__AnathemaDestructible_TestBlister_base_BP_Vigor_K2Node_ComponentBoundEvent_2_OnVigorChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewVigor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnathemaDestructible_TestBlister_base_BP_C::BndEvt__AnathemaDestructible_TestBlister_base_BP_Vigor_K2Node_ComponentBoundEvent_2_OnVigorChanged__DelegateSignature(int32 NewVigor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestBlister_base_BP_C", "BndEvt__AnathemaDestructible_TestBlister_base_BP_Vigor_K2Node_ComponentBoundEvent_2_OnVigorChanged__DelegateSignature");

	Params::AAnathemaDestructible_TestBlister_base_BP_C_BndEvt__AnathemaDestructible_TestBlister_base_BP_Vigor_K2Node_ComponentBoundEvent_2_OnVigorChanged__DelegateSignature_Params Parms{};

	Parms.NewVigor = NewVigor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnathemaDestructible_TestBlister_base_BP.AnathemaDestructible_TestBlister_base_BP_C.OnDestructibleReset_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAnathemaDestructible_TestBlister_base_BP_C::OnDestructibleReset_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestBlister_base_BP_C", "OnDestructibleReset_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnathemaDestructible_TestBlister_base_BP.AnathemaDestructible_TestBlister_base_BP_C.ExecuteUbergraph_AnathemaDestructible_TestBlister_base_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_InstigatorActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_ComponentBoundEvent_InstigatorTags                        (ConstParm)
// bool                               K2Node_ComponentBoundEvent_bDeathWasObserved                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilitySpecHandle  CallFunc_K2_GiveAbility_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetInventoryComponent_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacterController_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVigorDrop_InventoryItem_BP_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMojoDrop_InventoryItem_BP_C*CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_newMojo                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_mojoChangeInstigator                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_newVigor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVigor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMojo_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVigorCapacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMojoCapacity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVigor_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMojo_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVigor_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMojo_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMojoQuantity_value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnathemaDestructible_TestBlister_base_BP_C::ExecuteUbergraph_AnathemaDestructible_TestBlister_base_BP(int32 EntryPoint, class AActor* K2Node_ComponentBoundEvent_InstigatorActor, const struct FGameplayTagContainer& K2Node_ComponentBoundEvent_InstigatorTags, bool K2Node_ComponentBoundEvent_bDeathWasObserved, const struct FGameplayAbilitySpecHandle& CallFunc_K2_GiveAbility_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UInventoryComponent* CallFunc_GetInventoryComponent_ReturnValue, class AAnathemaPlayerCharacterController_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP, bool K2Node_DynamicCast_bSuccess_1, class UVigorDrop_InventoryItem_BP_C* CallFunc_SpawnObject_ReturnValue, class UMojoDrop_InventoryItem_BP_C* CallFunc_SpawnObject_ReturnValue_1, float K2Node_ComponentBoundEvent_newMojo, class AActor* K2Node_ComponentBoundEvent_mojoChangeInstigator, int32 K2Node_ComponentBoundEvent_newVigor, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_GetVigor_ReturnValue, float CallFunc_GetMojo_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetVigorCapacity_ReturnValue, float CallFunc_GetMojoCapacity_ReturnValue, int32 CallFunc_GetVigor_ReturnValue_1, float CallFunc_GetMojo_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_GetVigor_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetMojo_ReturnValue_2, int32 CallFunc_FCeil_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetMojoQuantity_value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnathemaDestructible_TestBlister_base_BP_C", "ExecuteUbergraph_AnathemaDestructible_TestBlister_base_BP");

	Params::AAnathemaDestructible_TestBlister_base_BP_C_ExecuteUbergraph_AnathemaDestructible_TestBlister_base_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_InstigatorActor = K2Node_ComponentBoundEvent_InstigatorActor;
	Parms.K2Node_ComponentBoundEvent_InstigatorTags = K2Node_ComponentBoundEvent_InstigatorTags;
	Parms.K2Node_ComponentBoundEvent_bDeathWasObserved = K2Node_ComponentBoundEvent_bDeathWasObserved;
	Parms.CallFunc_K2_GiveAbility_ReturnValue = CallFunc_K2_GiveAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetInventoryComponent_ReturnValue = CallFunc_GetInventoryComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP = K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_newMojo = K2Node_ComponentBoundEvent_newMojo;
	Parms.K2Node_ComponentBoundEvent_mojoChangeInstigator = K2Node_ComponentBoundEvent_mojoChangeInstigator;
	Parms.K2Node_ComponentBoundEvent_newVigor = K2Node_ComponentBoundEvent_newVigor;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetVigor_ReturnValue = CallFunc_GetVigor_ReturnValue;
	Parms.CallFunc_GetMojo_ReturnValue = CallFunc_GetMojo_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetVigorCapacity_ReturnValue = CallFunc_GetVigorCapacity_ReturnValue;
	Parms.CallFunc_GetMojoCapacity_ReturnValue = CallFunc_GetMojoCapacity_ReturnValue;
	Parms.CallFunc_GetVigor_ReturnValue_1 = CallFunc_GetVigor_ReturnValue_1;
	Parms.CallFunc_GetMojo_ReturnValue_1 = CallFunc_GetMojo_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetVigor_ReturnValue_2 = CallFunc_GetVigor_ReturnValue_2;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetMojo_ReturnValue_2 = CallFunc_GetMojo_ReturnValue_2;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1 = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetMojoQuantity_value_ImplicitCast = CallFunc_SetMojoQuantity_value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


