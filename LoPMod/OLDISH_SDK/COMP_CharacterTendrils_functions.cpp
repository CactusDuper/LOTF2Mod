#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass COMP_CharacterTendrils.COMP_CharacterTendrils_C
// (None)

class UClass* UCOMP_CharacterTendrils_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("COMP_CharacterTendrils_C");

	return Clss;
}


// COMP_CharacterTendrils_C COMP_CharacterTendrils.Default__COMP_CharacterTendrils_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCOMP_CharacterTendrils_C* UCOMP_CharacterTendrils_C::GetDefaultObj()
{
	static class UCOMP_CharacterTendrils_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCOMP_CharacterTendrils_C*>(UCOMP_CharacterTendrils_C::StaticClass()->DefaultObject);

	return Default;
}


// Function COMP_CharacterTendrils.COMP_CharacterTendrils_C.Update Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLinearColor>        DirectionsAndLength                                              (Edit, BlueprintVisible)
// TArray<struct FLinearColor>        Data                                                             (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_CharacterTendrilData     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformFromBoneSpace_OutPosition                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_TransformFromBoneSpace_OutRotation                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_A_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCOMP_CharacterTendrils_C::Update_Data(const TArray<struct FLinearColor>& DirectionsAndLength, const TArray<struct FLinearColor>& Data, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FF_CharacterTendrilData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_TransformFromBoneSpace_OutPosition, const struct FRotator& CallFunc_TransformFromBoneSpace_OutRotation, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast_1, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast_1, float K2Node_MakeStruct_G_ImplicitCast_1, float K2Node_MakeStruct_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("COMP_CharacterTendrils_C", "Update Data");

	Params::UCOMP_CharacterTendrils_C_Update_Data_Params Parms{};

	Parms.DirectionsAndLength = DirectionsAndLength;
	Parms.Data = Data;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TransformFromBoneSpace_OutPosition = CallFunc_TransformFromBoneSpace_OutPosition;
	Parms.CallFunc_TransformFromBoneSpace_OutRotation = CallFunc_TransformFromBoneSpace_OutRotation;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_MakeStruct_A_ImplicitCast = K2Node_MakeStruct_A_ImplicitCast;
	Parms.K2Node_MakeStruct_A_ImplicitCast_1 = K2Node_MakeStruct_A_ImplicitCast_1;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.K2Node_MakeStruct_R_ImplicitCast_1 = K2Node_MakeStruct_R_ImplicitCast_1;
	Parms.K2Node_MakeStruct_G_ImplicitCast_1 = K2Node_MakeStruct_G_ImplicitCast_1;
	Parms.K2Node_MakeStruct_B_ImplicitCast_1 = K2Node_MakeStruct_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function COMP_CharacterTendrils.COMP_CharacterTendrils_C.Added_E50E8EFB4D07663EF95D72AE515BCAC2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TagWaitingFor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UCOMP_CharacterTendrils_C::Added_E50E8EFB4D07663EF95D72AE515BCAC2(const struct FGameplayTag& TagWaitingFor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("COMP_CharacterTendrils_C", "Added_E50E8EFB4D07663EF95D72AE515BCAC2");

	Params::UCOMP_CharacterTendrils_C_Added_E50E8EFB4D07663EF95D72AE515BCAC2_Params Parms{};

	Parms.TagWaitingFor = TagWaitingFor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function COMP_CharacterTendrils.COMP_CharacterTendrils_C.Removed_589B4C3F441160A877FCD1936868CF4E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TagWaitingFor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UCOMP_CharacterTendrils_C::Removed_589B4C3F441160A877FCD1936868CF4E(const struct FGameplayTag& TagWaitingFor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("COMP_CharacterTendrils_C", "Removed_589B4C3F441160A877FCD1936868CF4E");

	Params::UCOMP_CharacterTendrils_C_Removed_589B4C3F441160A877FCD1936868CF4E_Params Parms{};

	Parms.TagWaitingFor = TagWaitingFor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function COMP_CharacterTendrils.COMP_CharacterTendrils_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UCOMP_CharacterTendrils_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("COMP_CharacterTendrils_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function COMP_CharacterTendrils.COMP_CharacterTendrils_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCOMP_CharacterTendrils_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("COMP_CharacterTendrils_C", "ReceiveTick");

	Params::UCOMP_CharacterTendrils_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function COMP_CharacterTendrils.COMP_CharacterTendrils_C.OnRealmChangedHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              OldRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              NewRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCOMP_CharacterTendrils_C::OnRealmChangedHandler(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("COMP_CharacterTendrils_C", "OnRealmChangedHandler");

	Params::UCOMP_CharacterTendrils_C_OnRealmChangedHandler_Params Parms{};

	Parms.OldRealm = OldRealm;
	Parms.NewRealm = NewRealm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function COMP_CharacterTendrils.COMP_CharacterTendrils_C.DeactivateAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCOMP_CharacterTendrils_C::DeactivateAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("COMP_CharacterTendrils_C", "DeactivateAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function COMP_CharacterTendrils.COMP_CharacterTendrils_C.ActivateAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCOMP_CharacterTendrils_C::ActivateAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("COMP_CharacterTendrils_C", "ActivateAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function COMP_CharacterTendrils.COMP_CharacterTendrils_C.ExecuteUbergraph_COMP_CharacterTendrils
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_TagWaitingFor                                 (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_oldRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_newRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayTask_HexWaitGameplayTagsAdded*CallFunc_WaitGameplayTagsAdd_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayTask_HexWaitGameplayTagsRemoved*CallFunc_WaitGameplayTagsRemove_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDualRealmStateComponent*    CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetDualRealm_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetDualRealm_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_TagWaitingFor_1                               (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCOMP_CharacterTendrils_C::ExecuteUbergraph_COMP_CharacterTendrils(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, bool K2Node_SwitchEnum_CmpSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UGameplayTask_HexWaitGameplayTagsAdded* CallFunc_WaitGameplayTagsAdd_ReturnValue, class UGameplayTask_HexWaitGameplayTagsRemoved* CallFunc_WaitGameplayTagsRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UDualRealmStateComponent* CallFunc_GetComponentByClass_ReturnValue_1, enum class EGameRealm CallFunc_GetDualRealm_ReturnValue, enum class EGameRealm CallFunc_GetDualRealm_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("COMP_CharacterTendrils_C", "ExecuteUbergraph_COMP_CharacterTendrils");

	Params::UCOMP_CharacterTendrils_C_ExecuteUbergraph_COMP_CharacterTendrils_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_TagWaitingFor = K2Node_CustomEvent_TagWaitingFor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_oldRealm = K2Node_CustomEvent_oldRealm;
	Parms.K2Node_CustomEvent_newRealm = K2Node_CustomEvent_newRealm;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_WaitGameplayTagsAdd_ReturnValue = CallFunc_WaitGameplayTagsAdd_ReturnValue;
	Parms.CallFunc_WaitGameplayTagsRemove_ReturnValue = CallFunc_WaitGameplayTagsRemove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetDualRealm_ReturnValue = CallFunc_GetDualRealm_ReturnValue;
	Parms.CallFunc_GetDualRealm_ReturnValue_1 = CallFunc_GetDualRealm_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_TagWaitingFor_1 = K2Node_CustomEvent_TagWaitingFor_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


