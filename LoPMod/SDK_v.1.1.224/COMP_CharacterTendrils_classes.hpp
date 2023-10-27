#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x12C - 0xE0)
// BlueprintGeneratedClass COMP_CharacterTendrils.COMP_CharacterTendrils_C
class UCOMP_CharacterTendrils_C : public UHexCharacterTendrilComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FF_CharacterTendrilData>       Tendrils_Data;                                     // 0xF0(0x10)(Edit, BlueprintVisible)
	class USkeletalMeshComponent*                Skeletal;                                          // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldActivate;                                    // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3D91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Tendrils_Color;                                    // 0x10C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          Tendrils_Emissive;                                 // 0x11C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCOMP_CharacterTendrils_C* GetDefaultObj();

	void Update_Data(const TArray<struct FLinearColor>& DirectionsAndLength, const TArray<struct FLinearColor>& Data, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FF_CharacterTendrilData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_TransformFromBoneSpace_OutPosition, const struct FRotator& CallFunc_TransformFromBoneSpace_OutRotation, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, float K2Node_MakeStruct_A_ImplicitCast, float K2Node_MakeStruct_A_ImplicitCast_1, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, float K2Node_MakeStruct_R_ImplicitCast_1, float K2Node_MakeStruct_G_ImplicitCast_1, float K2Node_MakeStruct_B_ImplicitCast_1);
	void Added_E50E8EFB4D07663EF95D72AE515BCAC2(const struct FGameplayTag& TagWaitingFor);
	void Removed_589B4C3F441160A877FCD1936868CF4E(const struct FGameplayTag& TagWaitingFor);
	void ReceiveBeginPlay();
	void OnRealmChangedHandler(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm);
	void DeactivateAll();
	void ActivateAll();
	void ExecuteUbergraph_COMP_CharacterTendrils(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, bool K2Node_SwitchEnum_CmpSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UGameplayTask_HexWaitGameplayTagsAdded* CallFunc_WaitGameplayTagsAdd_ReturnValue, class UGameplayTask_HexWaitGameplayTagsRemoved* CallFunc_WaitGameplayTagsRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UDualRealmStateComponent* CallFunc_GetComponentByClass_ReturnValue_1, enum class EGameRealm CallFunc_GetDualRealm_ReturnValue, enum class EGameRealm CallFunc_GetDualRealm_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_4, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FF_CharacterTendrilData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FHexCharacterTendrilData& K2Node_MakeStruct_HexCharacterTendrilData, int32 CallFunc_Array_Add_ReturnValue, float K2Node_MakeStruct_Length_ImplicitCast, float K2Node_MakeStruct_Width_ImplicitCast);
};

}


