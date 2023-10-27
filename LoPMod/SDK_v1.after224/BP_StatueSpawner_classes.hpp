#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x568 - 0x4D8)
// BlueprintGeneratedClass BP_StatueSpawner.BP_StatueSpawner_C
class ABP_StatueSpawner_C : public ABP_AnathemaEnemySpawner_v2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     SpawnVFX;                                          // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StatueMesh;                                        // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Opacity_DissolveNiagara_17CA2BD84F7B2E7776523C938539043B; // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Opacity_Opacity_17CA2BD84F7B2E7776523C938539043B;  // 0x4F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Opacity__Direction_17CA2BD84F7B2E7776523C938539043B; // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Opacity;                                           // 0x500(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, class UStatueSpawnerCharacterData*> Characters;                                        // 0x508(0x50)(Edit, BlueprintVisible)
	bool                                         FirstEncounterTriggered;                           // 0x558(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           SelectedStatueMesh;                                // 0x560(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StatueSpawner_C* GetDefaultObj();

	void SelectRandomStatueMesh(class UStatueSpawnerCharacterData* StatueSpawnerCharacterData, class UStaticMesh** StatueMesh, TArray<struct FStatueSpawnerPose>& CallFunc_GetPoses_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FStatueSpawnerPose& CallFunc_Array_Get_Item);
	void OnRep_FirstEncounterTriggered(bool CallFunc_HasAuthority_ReturnValue);
	void OnRep_SelectedStatueMesh(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void Find_Static_Mesh_for_Idle_Animation_Tag(class UClass* Character, const struct FGameplayTag& IdleAnimationTag, class UStaticMesh** Statue_Mesh, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStatueSpawnerCharacterData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FStatueSpawnerPose>& CallFunc_GetPoses_ReturnValue, const struct FStatueSpawnerPose& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void FindAllFirstEncounterAnimationsForCharacter(class UClass* Character, TArray<struct FFirstEncounterAnimationGameplayTags>* FirstEncounterAnimations, const TArray<struct FFirstEncounterAnimationGameplayTags>& Animations, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStatueSpawnerCharacterData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FStatueSpawnerPose>& CallFunc_GetPoses_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FStatueSpawnerPose& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Opacity__FinishedFunc();
	void Opacity__UpdateFunc();
	void ReceiveBeginPlay();
	void OnFirstEncounterTriggered(class AActor* TriggerVolumeActor, class AActor* TriggeringActor);
	void StatueMeshUpdated(class UStaticMeshComponent* StatueMesh);
	void OnFirstEncTrigger(class AActor* TriggerVolumeActor, class AActor* TriggeringActor);
	void OnRep_SpawnedCharacter();
	void OnCharacterSpawnedDelegate_Event(class ASimpleCharacterSpawner* Spawner, class ALOTF2Character* Character);
	void OnCharacterDeadDelegate_Event(class ASimpleCharacterSpawner* Spawner, class ALOTF2Character* Character);
	void ExecuteUbergraph_BP_StatueSpawner(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, class ALOTF2Character* CallFunc_GetSpawnedCharacter_ReturnValue, class AActor* K2Node_CustomEvent_triggerVolumeActor_1, class AActor* K2Node_CustomEvent_triggeringActor_1, class UTargetComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, float CallFunc_BreakVector3f_X, float CallFunc_BreakVector3f_Y, float CallFunc_BreakVector3f_Z, class UClass* K2Node_ClassDynamicCast_AsCharacter_Data, bool K2Node_ClassDynamicCast_bSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue_1, class ALOTF2Character* CallFunc_GetSpawnedCharacter_ReturnValue_1, TArray<class UStatueSpawnerCharacterData*>& CallFunc_Map_Values_Values, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStatueSpawnerCharacterData* CallFunc_Array_Get_Item, class UTargetComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UStaticMesh* CallFunc_SelectRandomStatueMesh_StatueMesh, class UStaticMeshComponent* K2Node_CustomEvent_StatueMesh, class AActor* K2Node_CustomEvent_triggerVolumeActor, class AActor* K2Node_CustomEvent_triggeringActor, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsCharacter_Data_1, bool K2Node_ClassDynamicCast_bSuccess_1, class UStatueSpawnerCharacterData* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UStaticMesh* CallFunc_SelectRandomStatueMesh_StatueMesh_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ASimpleCharacterSpawner* K2Node_CustomEvent_spawner_1, class ALOTF2Character* K2Node_CustomEvent_Character_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, class UAIWaitFirstEncounterSystemComp* CallFunc_GetComponentByClass_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class UAIWaitFirstEncounterSystemComp* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsSpawningEnabled_ReturnValue, const struct FGameplayTag& CallFunc_GetWaitFirstEncounterAnimationTag_ReturnValue, const class FString& CallFunc_ConvertTagToString_ReturnValue, class UStaticMesh* CallFunc_Find_Static_Mesh_for_Idle_Animation_Tag_Statue_Mesh, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class ASimpleCharacterSpawner* K2Node_CustomEvent_spawner, class ALOTF2Character* K2Node_CustomEvent_Character, class ALOTF2Character* CallFunc_GetSpawnedCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2, class FText CallFunc_Format_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsCharacter_Data_2, bool K2Node_ClassDynamicCast_bSuccess_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<struct FFirstEncounterAnimationGameplayTags>& CallFunc_FindAllFirstEncounterAnimationsForCharacter_FirstEncounterAnimations, class UWaitFirstEncounterConfigComp* CallFunc_GetComponentByClass_ReturnValue_4, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
};

}


