#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VigorDropPickup_BP.VigorDropPickup_BP_C
// (Actor)

class UClass* AVigorDropPickup_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VigorDropPickup_BP_C");

	return Clss;
}


// VigorDropPickup_BP_C VigorDropPickup_BP.Default__VigorDropPickup_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVigorDropPickup_BP_C* AVigorDropPickup_BP_C::GetDefaultObj()
{
	static class AVigorDropPickup_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVigorDropPickup_BP_C*>(AVigorDropPickup_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VigorDropPickup_BP.VigorDropPickup_BP_C.RandomizeLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_AddActorWorldOffset_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AVigorDropPickup_BP_C::RandomizeLocation(const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddActorWorldOffset_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VigorDropPickup_BP_C", "RandomizeLocation");

	Params::AVigorDropPickup_BP_C_RandomizeLocation_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_K2_AddActorWorldOffset_SweepHitResult = CallFunc_K2_AddActorWorldOffset_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VigorDropPickup_BP.VigorDropPickup_BP_C.GetItemAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Quantity                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryItem*              CallFunc_GetInventoryItem_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVigorDrop_InventoryItem_BP_C*K2Node_DynamicCast_AsVigor_Drop_Inventory_Item_BP                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVigorQuantity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVigorDropPickup_BP_C::GetItemAmount(int32* Quantity, class UInventoryItem* CallFunc_GetInventoryItem_ReturnValue, class UVigorDrop_InventoryItem_BP_C* K2Node_DynamicCast_AsVigor_Drop_Inventory_Item_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetVigorQuantity_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VigorDropPickup_BP_C", "GetItemAmount");

	Params::AVigorDropPickup_BP_C_GetItemAmount_Params Parms{};

	Parms.CallFunc_GetInventoryItem_ReturnValue = CallFunc_GetInventoryItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsVigor_Drop_Inventory_Item_BP = K2Node_DynamicCast_AsVigor_Drop_Inventory_Item_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetVigorQuantity_ReturnValue = CallFunc_GetVigorQuantity_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Quantity != nullptr)
		*Quantity = Parms.Quantity;

}


// Function VigorDropPickup_BP.VigorDropPickup_BP_C.Completed_497E5909410246192564AFB7C86F7AF0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayingID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVigorDropPickup_BP_C::Completed_497E5909410246192564AFB7C86F7AF0(int32 PlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VigorDropPickup_BP_C", "Completed_497E5909410246192564AFB7C86F7AF0");

	Params::AVigorDropPickup_BP_C_Completed_497E5909410246192564AFB7C86F7AF0_Params Parms{};

	Parms.PlayingID = PlayingID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VigorDropPickup_BP.VigorDropPickup_BP_C.SpawnVFXTrail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALOTF2Character*             Target_Character                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AVigorDropPickup_BP_C::SpawnVFXTrail(class ALOTF2Character* Target_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VigorDropPickup_BP_C", "SpawnVFXTrail");

	Params::AVigorDropPickup_BP_C_SpawnVFXTrail_Params Parms{};

	Parms.Target_Character = Target_Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VigorDropPickup_BP.VigorDropPickup_BP_C.OnParticleReach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVigorDropPickup_BP_C::OnParticleReach(int32 Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VigorDropPickup_BP_C", "OnParticleReach");

	Params::AVigorDropPickup_BP_C_OnParticleReach_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VigorDropPickup_BP.VigorDropPickup_BP_C.ExecuteUbergraph_VigorDropPickup_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_PlayingID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_Event_Target_Character                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Data                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostEventAtLocationAsync*   CallFunc_PostEventAtLocationAsync_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_VigorProjectile_VFX_3_C* CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVigorDropPickup_BP_C::ExecuteUbergraph_VigorDropPickup_BP(int32 EntryPoint, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, int32 K2Node_CustomEvent_PlayingID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, class ALOTF2Character* K2Node_Event_Target_Character, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class FName Temp_name_Variable_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 K2Node_CustomEvent_Data, class UPostEventAtLocationAsync* CallFunc_PostEventAtLocationAsync_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_VigorProjectile_VFX_3_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VigorDropPickup_BP_C", "ExecuteUbergraph_VigorDropPickup_BP");

	Params::AVigorDropPickup_BP_C_ExecuteUbergraph_VigorDropPickup_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_PlayingID = K2Node_CustomEvent_PlayingID;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_Target_Character = K2Node_Event_Target_Character;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Data = K2Node_CustomEvent_Data;
	Parms.CallFunc_PostEventAtLocationAsync_ReturnValue = CallFunc_PostEventAtLocationAsync_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


