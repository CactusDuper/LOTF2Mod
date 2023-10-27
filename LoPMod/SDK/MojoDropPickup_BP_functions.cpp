#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MojoDropPickup_BP.MojoDropPickup_BP_C
// (Actor)

class UClass* AMojoDropPickup_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MojoDropPickup_BP_C");

	return Clss;
}


// MojoDropPickup_BP_C MojoDropPickup_BP.Default__MojoDropPickup_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMojoDropPickup_BP_C* AMojoDropPickup_BP_C::GetDefaultObj()
{
	static class AMojoDropPickup_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMojoDropPickup_BP_C*>(AMojoDropPickup_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MojoDropPickup_BP.MojoDropPickup_BP_C.UpdateVisualSize
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMojoDropPickup_BP_C::UpdateVisualSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MojoDropPickup_BP_C", "UpdateVisualSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MojoDropPickup_BP.MojoDropPickup_BP_C.SpawnVFXTrail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALOTF2Character*             Target_Character                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AMojoDropPickup_BP_C::SpawnVFXTrail(class ALOTF2Character* Target_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MojoDropPickup_BP_C", "SpawnVFXTrail");

	Params::AMojoDropPickup_BP_C_SpawnVFXTrail_Params Parms{};

	Parms.Target_Character = Target_Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MojoDropPickup_BP.MojoDropPickup_BP_C.OnParticleReach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMojoDropPickup_BP_C::OnParticleReach(int32 Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MojoDropPickup_BP_C", "OnParticleReach");

	Params::AMojoDropPickup_BP_C_OnParticleReach_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MojoDropPickup_BP.MojoDropPickup_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMojoDropPickup_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MojoDropPickup_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MojoDropPickup_BP.MojoDropPickup_BP_C.ExecuteUbergraph_MojoDropPickup_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetItemVisual_ReturnValue                               (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_Event_Target_Character                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Data                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MojoSyphoning_Trail_VFX_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMojoDropPickup_BP_C::ExecuteUbergraph_MojoDropPickup_BP(int32 EntryPoint, class UStaticMeshComponent* CallFunc_GetItemVisual_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, class ALOTF2Character* K2Node_Event_Target_Character, class FName Temp_name_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, int32 K2Node_CustomEvent_Data, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_MojoSyphoning_Trail_VFX_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class FName Temp_name_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MojoDropPickup_BP_C", "ExecuteUbergraph_MojoDropPickup_BP");

	Params::AMojoDropPickup_BP_C_ExecuteUbergraph_MojoDropPickup_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetItemVisual_ReturnValue = CallFunc_GetItemVisual_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_Event_Target_Character = K2Node_Event_Target_Character;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.K2Node_CustomEvent_Data = K2Node_CustomEvent_Data;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


