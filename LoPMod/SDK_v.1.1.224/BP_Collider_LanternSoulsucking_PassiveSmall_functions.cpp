#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C
// (Actor)

class UClass* ABP_Collider_LanternSoulsucking_PassiveSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Collider_LanternSoulsucking_PassiveSmall_C");

	return Clss;
}


// BP_Collider_LanternSoulsucking_PassiveSmall_C BP_Collider_LanternSoulsucking_PassiveSmall.Default__BP_Collider_LanternSoulsucking_PassiveSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Collider_LanternSoulsucking_PassiveSmall_C* ABP_Collider_LanternSoulsucking_PassiveSmall_C::GetDefaultObj()
{
	static class ABP_Collider_LanternSoulsucking_PassiveSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Collider_LanternSoulsucking_PassiveSmall_C*>(ABP_Collider_LanternSoulsucking_PassiveSmall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.BndEvt__LanternSyphoning_VigorCollider_BP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::BndEvt__LanternSyphoning_VigorCollider_BP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "BndEvt__LanternSyphoning_VigorCollider_BP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_Collider_LanternSoulsucking_PassiveSmall_C_BndEvt__LanternSyphoning_VigorCollider_BP_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.BndEvt__LanternSyphoning_VigorCollider_BP_OuterAttractorSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::BndEvt__LanternSyphoning_VigorCollider_BP_OuterAttractorSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "BndEvt__LanternSyphoning_VigorCollider_BP_OuterAttractorSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_Collider_LanternSoulsucking_PassiveSmall_C_BndEvt__LanternSyphoning_VigorCollider_BP_OuterAttractorSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "ReceiveEndPlay");

	Params::ABP_Collider_LanternSoulsucking_PassiveSmall_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.UpdateDebugSphereSizes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::UpdateDebugSphereSizes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "UpdateDebugSphereSizes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.StopAllTriggeredPreAbsorbingDrops
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::StopAllTriggeredPreAbsorbingDrops()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "StopAllTriggeredPreAbsorbingDrops");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.StartPreAbsorb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseAbsorbablePickup_BP_C*  Pickup                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::StartPreAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "StartPreAbsorb");

	Params::ABP_Collider_LanternSoulsucking_PassiveSmall_C_StartPreAbsorb_Params Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.DoAbsorb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseAbsorbablePickup_BP_C*  Pickup                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::DoAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "DoAbsorb");

	Params::ABP_Collider_LanternSoulsucking_PassiveSmall_C_DoAbsorb_Params Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.BndEvt__BP_Collider_LanternSoulsucking_PassiveSmall_OuterAttractorSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::BndEvt__BP_Collider_LanternSoulsucking_PassiveSmall_OuterAttractorSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "BndEvt__BP_Collider_LanternSoulsucking_PassiveSmall_OuterAttractorSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABP_Collider_LanternSoulsucking_PassiveSmall_C_BndEvt__BP_Collider_LanternSoulsucking_PassiveSmall_OuterAttractorSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.StopPreAbsorb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseAbsorbablePickup_BP_C*  Pickup                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::StopPreAbsorb(class ABaseAbsorbablePickup_BP_C* Pickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "StopPreAbsorb");

	Params::ABP_Collider_LanternSoulsucking_PassiveSmall_C_StopPreAbsorb_Params Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Collider_LanternSoulsucking_PassiveSmall.BP_Collider_LanternSoulsucking_PassiveSmall_C.ExecuteUbergraph_BP_Collider_LanternSoulsucking_PassiveSmall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetParentActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ALOTF2PlayerState*           K2Node_DynamicCast_AsLOTF2Player_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetMultiplayerRoleAsBitmask_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUnscaledSphereRadius_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  K2Node_CustomEvent_Pickup_2                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetParentActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  K2Node_CustomEvent_Pickup_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  K2Node_CustomEvent_Pickup                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUnscaledSphereRadius_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_2                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult_1                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAbsorbablePickup_BP_C*  K2Node_DynamicCast_AsBase_Absorbable_Pickup_BP                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasBeenAbsorbed_bValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetMultiplayerVisibilityMask_ReturnValue                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_FloatToVector_InFloat_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_FloatToVector_InFloat_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Collider_LanternSoulsucking_PassiveSmall_C::ExecuteUbergraph_BP_Collider_LanternSoulsucking_PassiveSmall(int32 EntryPoint, class AActor* CallFunc_GetParentActor_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ALOTF2PlayerState* K2Node_DynamicCast_AsLOTF2Player_State, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, uint8 CallFunc_GetMultiplayerRoleAsBitmask_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetUnscaledSphereRadius_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup_2, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue_1, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ABaseAbsorbablePickup_BP_C* K2Node_CustomEvent_Pickup, bool CallFunc_IsDead_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_RemoveItem_ReturnValue, class ABaseAbsorbablePickup_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetUnscaledSphereRadius_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue_1, class ABaseAbsorbablePickup_BP_C* K2Node_DynamicCast_AsBase_Absorbable_Pickup_BP, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasBeenAbsorbed_bValue, bool CallFunc_Array_Contains_ReturnValue, uint8 CallFunc_GetMultiplayerVisibilityMask_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, float CallFunc_Conv_FloatToVector_InFloat_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Collider_LanternSoulsucking_PassiveSmall_C", "ExecuteUbergraph_BP_Collider_LanternSoulsucking_PassiveSmall");

	Params::ABP_Collider_LanternSoulsucking_PassiveSmall_C_ExecuteUbergraph_BP_Collider_LanternSoulsucking_PassiveSmall_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetParentActor_ReturnValue = CallFunc_GetParentActor_ReturnValue;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsLOTF2Player_State = K2Node_DynamicCast_AsLOTF2Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetMultiplayerRoleAsBitmask_ReturnValue = CallFunc_GetMultiplayerRoleAsBitmask_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetUnscaledSphereRadius_ReturnValue = CallFunc_GetUnscaledSphereRadius_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.K2Node_CustomEvent_Pickup_2 = K2Node_CustomEvent_Pickup_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetParentActor_ReturnValue_1 = CallFunc_GetParentActor_ReturnValue_1;
	Parms.K2Node_CustomEvent_Pickup_1 = K2Node_CustomEvent_Pickup_1;
	Parms.CallFunc_GetAttachParentActor_ReturnValue_1 = CallFunc_GetAttachParentActor_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2Character_1 = K2Node_DynamicCast_AsLOTF2Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_CustomEvent_Pickup = K2Node_CustomEvent_Pickup;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUnscaledSphereRadius_ReturnValue_1 = CallFunc_GetUnscaledSphereRadius_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_2 = K2Node_ComponentBoundEvent_OverlappedComponent_2;
	Parms.K2Node_ComponentBoundEvent_OtherActor_2 = K2Node_ComponentBoundEvent_OtherActor_2;
	Parms.K2Node_ComponentBoundEvent_OtherComp_2 = K2Node_ComponentBoundEvent_OtherComp_2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_2 = K2Node_ComponentBoundEvent_OtherBodyIndex_2;
	Parms.K2Node_ComponentBoundEvent_bFromSweep_1 = K2Node_ComponentBoundEvent_bFromSweep_1;
	Parms.K2Node_ComponentBoundEvent_SweepResult_1 = K2Node_ComponentBoundEvent_SweepResult_1;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue_1 = CallFunc_Conv_FloatToVector_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBase_Absorbable_Pickup_BP = K2Node_DynamicCast_AsBase_Absorbable_Pickup_BP;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_HasBeenAbsorbed_bValue = CallFunc_HasBeenAbsorbed_bValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetMultiplayerVisibilityMask_ReturnValue = CallFunc_GetMultiplayerVisibilityMask_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Conv_FloatToVector_InFloat_ImplicitCast = CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast_1 = CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Conv_FloatToVector_InFloat_ImplicitCast_1 = CallFunc_Conv_FloatToVector_InFloat_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


