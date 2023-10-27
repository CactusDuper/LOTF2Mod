#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StatueSpawner.BP_StatueSpawner_C
// (Actor)

class UClass* ABP_StatueSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StatueSpawner_C");

	return Clss;
}


// BP_StatueSpawner_C BP_StatueSpawner.Default__BP_StatueSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StatueSpawner_C* ABP_StatueSpawner_C::GetDefaultObj()
{
	static class ABP_StatueSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StatueSpawner_C*>(ABP_StatueSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StatueSpawner.BP_StatueSpawner_C.SelectRandomStatueMesh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStatueSpawnerCharacterData* StatueSpawnerCharacterData                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 StatueMesh                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FStatueSpawnerPose>  CallFunc_GetPoses_ReturnValue                                    (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatueSpawnerPose          CallFunc_Array_Get_Item                                          (NoDestructor)

void ABP_StatueSpawner_C::SelectRandomStatueMesh(class UStatueSpawnerCharacterData* StatueSpawnerCharacterData, class UStaticMesh** StatueMesh, TArray<struct FStatueSpawnerPose>& CallFunc_GetPoses_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FStatueSpawnerPose& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "SelectRandomStatueMesh");

	Params::ABP_StatueSpawner_C_SelectRandomStatueMesh_Params Parms{};

	Parms.StatueSpawnerCharacterData = StatueSpawnerCharacterData;
	Parms.CallFunc_GetPoses_ReturnValue = CallFunc_GetPoses_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (StatueMesh != nullptr)
		*StatueMesh = Parms.StatueMesh;

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.OnRep_FirstEncounterTriggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StatueSpawner_C::OnRep_FirstEncounterTriggered(bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "OnRep_FirstEncounterTriggered");

	Params::ABP_StatueSpawner_C_OnRep_FirstEncounterTriggered_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.OnRep_SelectedStatueMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StatueSpawner_C::OnRep_SelectedStatueMesh(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "OnRep_SelectedStatueMesh");

	Params::ABP_StatueSpawner_C_OnRep_SelectedStatueMesh_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.Find Static Mesh for Idle Animation Tag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                IdleAnimationTag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 Statue_Mesh                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatueSpawnerCharacterData* CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStatueSpawnerPose>  CallFunc_GetPoses_ReturnValue                                    (ConstParm, ReferenceParm)
// struct FStatueSpawnerPose          CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StatueSpawner_C::Find_Static_Mesh_for_Idle_Animation_Tag(class UClass* Character, const struct FGameplayTag& IdleAnimationTag, class UStaticMesh** Statue_Mesh, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStatueSpawnerCharacterData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FStatueSpawnerPose>& CallFunc_GetPoses_ReturnValue, const struct FStatueSpawnerPose& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "Find Static Mesh for Idle Animation Tag");

	Params::ABP_StatueSpawner_C_Find_Static_Mesh_for_Idle_Animation_Tag_Params Parms{};

	Parms.Character = Character;
	Parms.IdleAnimationTag = IdleAnimationTag;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetPoses_ReturnValue = CallFunc_GetPoses_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Statue_Mesh != nullptr)
		*Statue_Mesh = Parms.Statue_Mesh;

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.FindAllFirstEncounterAnimationsForCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFirstEncounterAnimationGameplayTags>FirstEncounterAnimations                                         (Parm, OutParm)
// TArray<struct FFirstEncounterAnimationGameplayTags>Animations                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatueSpawnerCharacterData* CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStatueSpawnerPose>  CallFunc_GetPoses_ReturnValue                                    (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatueSpawnerPose          CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StatueSpawner_C::FindAllFirstEncounterAnimationsForCharacter(class UClass* Character, TArray<struct FFirstEncounterAnimationGameplayTags>* FirstEncounterAnimations, const TArray<struct FFirstEncounterAnimationGameplayTags>& Animations, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStatueSpawnerCharacterData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FStatueSpawnerPose>& CallFunc_GetPoses_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FStatueSpawnerPose& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "FindAllFirstEncounterAnimationsForCharacter");

	Params::ABP_StatueSpawner_C_FindAllFirstEncounterAnimationsForCharacter_Params Parms{};

	Parms.Character = Character;
	Parms.Animations = Animations;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetPoses_ReturnValue = CallFunc_GetPoses_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FirstEncounterAnimations != nullptr)
		*FirstEncounterAnimations = std::move(Parms.FirstEncounterAnimations);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.Opacity__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StatueSpawner_C::Opacity__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "Opacity__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.Opacity__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StatueSpawner_C::Opacity__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "Opacity__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StatueSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.OnFirstEncounterTriggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TriggerVolumeActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TriggeringActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StatueSpawner_C::OnFirstEncounterTriggered(class AActor* TriggerVolumeActor, class AActor* TriggeringActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "OnFirstEncounterTriggered");

	Params::ABP_StatueSpawner_C_OnFirstEncounterTriggered_Params Parms{};

	Parms.TriggerVolumeActor = TriggerVolumeActor;
	Parms.TriggeringActor = TriggeringActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.StatueMeshUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        StatueMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_StatueSpawner_C::StatueMeshUpdated(class UStaticMeshComponent* StatueMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "StatueMeshUpdated");

	Params::ABP_StatueSpawner_C_StatueMeshUpdated_Params Parms{};

	Parms.StatueMesh = StatueMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.OnFirstEncTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TriggerVolumeActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TriggeringActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StatueSpawner_C::OnFirstEncTrigger(class AActor* TriggerVolumeActor, class AActor* TriggeringActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "OnFirstEncTrigger");

	Params::ABP_StatueSpawner_C_OnFirstEncTrigger_Params Parms{};

	Parms.TriggerVolumeActor = TriggerVolumeActor;
	Parms.TriggeringActor = TriggeringActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.OnRep_SpawnedCharacter
// (BlueprintEvent)
// Parameters:

void ABP_StatueSpawner_C::OnRep_SpawnedCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "OnRep_SpawnedCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.OnCharacterSpawnedDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASimpleCharacterSpawner*     Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StatueSpawner_C::OnCharacterSpawnedDelegate_Event(class ASimpleCharacterSpawner* Spawner, class ALOTF2Character* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "OnCharacterSpawnedDelegate_Event");

	Params::ABP_StatueSpawner_C_OnCharacterSpawnedDelegate_Event_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.OnCharacterDeadDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASimpleCharacterSpawner*     Spawner                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StatueSpawner_C::OnCharacterDeadDelegate_Event(class ASimpleCharacterSpawner* Spawner, class ALOTF2Character* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "OnCharacterDeadDelegate_Event");

	Params::ABP_StatueSpawner_C_OnCharacterDeadDelegate_Event_Params Parms{};

	Parms.Spawner = Spawner;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StatueSpawner.BP_StatueSpawner_C.ExecuteUbergraph_BP_StatueSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             CallFunc_GetSpawnedCharacter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_triggerVolumeActor_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_triggeringActor_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTargetComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_Z                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsCharacter_Data                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_SoftClassReferenceToString_ReturnValue             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             CallFunc_GetSpawnedCharacter_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UStatueSpawnerCharacterData*>CallFunc_Map_Values_Values                                       (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatueSpawnerCharacterData* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTargetComponent*            CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_SelectRandomStatueMesh_StatueMesh                       (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_StatueMesh                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_triggerVolumeActor                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_triggeringActor                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsCharacter_Data_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStatueSpawnerCharacterData* CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_SelectRandomStatueMesh_StatueMesh_1                     (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASimpleCharacterSpawner*     K2Node_CustomEvent_spawner_1                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_CustomEvent_Character_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIWaitFirstEncounterSystemComp*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAIWaitFirstEncounterSystemComp*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpawningEnabled_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetWaitFirstEncounterAnimationTag_ReturnValue           (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ConvertTagToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Find_Static_Mesh_for_Idle_Animation_Tag_Statue_Mesh     (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class ASimpleCharacterSpawner*     K2Node_CustomEvent_spawner                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_CustomEvent_Character                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             CallFunc_GetSpawnedCharacter_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UClass*                      K2Node_ClassDynamicCast_AsCharacter_Data_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFirstEncounterAnimationGameplayTags>CallFunc_FindAllFirstEncounterAnimationsForCharacter_FirstEncounterAnimations(ReferenceParm)
// class UWaitFirstEncounterConfigComp*CallFunc_GetComponentByClass_ReturnValue_4                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector3f                   CallFunc_BreakVector3f_InVec_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StatueSpawner_C::ExecuteUbergraph_BP_StatueSpawner(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, class ALOTF2Character* CallFunc_GetSpawnedCharacter_ReturnValue, class AActor* K2Node_CustomEvent_triggerVolumeActor_1, class AActor* K2Node_CustomEvent_triggeringActor_1, class UTargetComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, float CallFunc_BreakVector3f_X, float CallFunc_BreakVector3f_Y, float CallFunc_BreakVector3f_Z, class UClass* K2Node_ClassDynamicCast_AsCharacter_Data, bool K2Node_ClassDynamicCast_bSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue_1, class ALOTF2Character* CallFunc_GetSpawnedCharacter_ReturnValue_1, TArray<class UStatueSpawnerCharacterData*>& CallFunc_Map_Values_Values, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStatueSpawnerCharacterData* CallFunc_Array_Get_Item, class UTargetComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UStaticMesh* CallFunc_SelectRandomStatueMesh_StatueMesh, class UStaticMeshComponent* K2Node_CustomEvent_StatueMesh, class AActor* K2Node_CustomEvent_triggerVolumeActor, class AActor* K2Node_CustomEvent_triggeringActor, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsCharacter_Data_1, bool K2Node_ClassDynamicCast_bSuccess_1, class UStatueSpawnerCharacterData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UStaticMesh* CallFunc_SelectRandomStatueMesh_StatueMesh_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ASimpleCharacterSpawner* K2Node_CustomEvent_spawner_1, class ALOTF2Character* K2Node_CustomEvent_Character_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, class UAIWaitFirstEncounterSystemComp* CallFunc_GetComponentByClass_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class UAIWaitFirstEncounterSystemComp* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsSpawningEnabled_ReturnValue, const struct FGameplayTag& CallFunc_GetWaitFirstEncounterAnimationTag_ReturnValue, const class FString& CallFunc_ConvertTagToString_ReturnValue, class UStaticMesh* CallFunc_Find_Static_Mesh_for_Idle_Animation_Tag_Statue_Mesh, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class ASimpleCharacterSpawner* K2Node_CustomEvent_spawner, class ALOTF2Character* K2Node_CustomEvent_Character, class ALOTF2Character* CallFunc_GetSpawnedCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2, class FText CallFunc_Format_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsCharacter_Data_2, bool K2Node_ClassDynamicCast_bSuccess_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<struct FFirstEncounterAnimationGameplayTags>& CallFunc_FindAllFirstEncounterAnimationsForCharacter_FirstEncounterAnimations, class UWaitFirstEncounterConfigComp* CallFunc_GetComponentByClass_ReturnValue_4, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StatueSpawner_C", "ExecuteUbergraph_BP_StatueSpawner");

	Params::ABP_StatueSpawner_C_ExecuteUbergraph_BP_StatueSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetSpawnedCharacter_ReturnValue = CallFunc_GetSpawnedCharacter_ReturnValue;
	Parms.K2Node_CustomEvent_triggerVolumeActor_1 = K2Node_CustomEvent_triggerVolumeActor_1;
	Parms.K2Node_CustomEvent_triggeringActor_1 = K2Node_CustomEvent_triggeringActor_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_BreakVector3f_X = CallFunc_BreakVector3f_X;
	Parms.CallFunc_BreakVector3f_Y = CallFunc_BreakVector3f_Y;
	Parms.CallFunc_BreakVector3f_Z = CallFunc_BreakVector3f_Z;
	Parms.K2Node_ClassDynamicCast_AsCharacter_Data = K2Node_ClassDynamicCast_AsCharacter_Data;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToString_ReturnValue = CallFunc_Conv_SoftClassReferenceToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSpawnedCharacter_ReturnValue_1 = CallFunc_GetSpawnedCharacter_ReturnValue_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_SelectRandomStatueMesh_StatueMesh = CallFunc_SelectRandomStatueMesh_StatueMesh;
	Parms.K2Node_CustomEvent_StatueMesh = K2Node_CustomEvent_StatueMesh;
	Parms.K2Node_CustomEvent_triggerVolumeActor = K2Node_CustomEvent_triggerVolumeActor;
	Parms.K2Node_CustomEvent_triggeringActor = K2Node_CustomEvent_triggeringActor;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsCharacter_Data_1 = K2Node_ClassDynamicCast_AsCharacter_Data_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SelectRandomStatueMesh_StatueMesh_1 = CallFunc_SelectRandomStatueMesh_StatueMesh_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_spawner_1 = K2Node_CustomEvent_spawner_1;
	Parms.K2Node_CustomEvent_Character_1 = K2Node_CustomEvent_Character_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_IsSpawningEnabled_ReturnValue = CallFunc_IsSpawningEnabled_ReturnValue;
	Parms.CallFunc_GetWaitFirstEncounterAnimationTag_ReturnValue = CallFunc_GetWaitFirstEncounterAnimationTag_ReturnValue;
	Parms.CallFunc_ConvertTagToString_ReturnValue = CallFunc_ConvertTagToString_ReturnValue;
	Parms.CallFunc_Find_Static_Mesh_for_Idle_Animation_Tag_Statue_Mesh = CallFunc_Find_Static_Mesh_for_Idle_Animation_Tag_Statue_Mesh;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_CustomEvent_spawner = K2Node_CustomEvent_spawner;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.CallFunc_GetSpawnedCharacter_ReturnValue_2 = CallFunc_GetSpawnedCharacter_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsCharacter_Data_2 = K2Node_ClassDynamicCast_AsCharacter_Data_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_FindAllFirstEncounterAnimationsForCharacter_FirstEncounterAnimations = CallFunc_FindAllFirstEncounterAnimationsForCharacter_FirstEncounterAnimations;
	Parms.CallFunc_GetComponentByClass_ReturnValue_4 = CallFunc_GetComponentByClass_ReturnValue_4;
	Parms.CallFunc_BreakVector3f_InVec_ImplicitCast = CallFunc_BreakVector3f_InVec_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


