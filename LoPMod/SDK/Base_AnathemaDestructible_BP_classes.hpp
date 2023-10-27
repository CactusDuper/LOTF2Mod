#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x468 - 0x418)
// BlueprintGeneratedClass Base_AnathemaDestructible_BP.Base_AnathemaDestructible_BP_C
class ABase_AnathemaDestructible_BP_C : public ADestructible
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                Damage_Causer;                                     // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    Spawned_VFX;                                       // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Props_Destruction_Link;                            // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         Register_and_Serialize_Tag;                        // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Tag_to_Register;                                   // 0x448(0x20)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class ABase_AnathemaDestructible_BP_C* GetDefaultObj();

	void OnVisualFXSpawned(class UFXSystemComponent* SpawnedVFX);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HealthComponentOnDeathDelegate__DelegateSignature(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved);
	void SetEnableHighlight(bool bEnable);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Base_AnathemaDestructible_BP(int32 EntryPoint, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFXSystemComponent* K2Node_Event_spawnedVFX, class AActor* K2Node_ComponentBoundEvent_InstigatorActor, const struct FGameplayTagContainer& K2Node_ComponentBoundEvent_InstigatorTags, bool K2Node_ComponentBoundEvent_bDeathWasObserved, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, class AStaticMeshActor* K2Node_DynamicCast_AsStatic_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, class ADestructible* K2Node_DynamicCast_AsDestructible, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue, bool K2Node_Event_bEnable, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


