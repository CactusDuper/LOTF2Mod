#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA9 (0x4F1 - 0x448)
// BlueprintGeneratedClass GA_ItemSetActivation.GA_ItemSetActivation_C
class UGA_ItemSetActivation_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle           BuffApplied;                                       // 0x450(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGameplayTag, enum class EFEquipmentSlot> ItemRequiredSlot;                                  // 0x458(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSubclassOf<class UGameplayEffect>           ItemSetBuffGE;                                     // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ItemSetEquipableItemsTag;                          // 0x4B0(0x20)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 ItemSetNonEquipableItemsTag;                       // 0x4D0(0x20)(Edit, BlueprintVisible)
	bool                                         Enabled;                                           // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ItemSetActivation_C* GetDefaultObj();

	void GetAllItemSetTags(struct FGameplayTagContainer* Result, const struct FGameplayTagContainer& AllItemSetTags);
	void IsItemInTheRequiredSlot(struct FGameplayTag& ItemTag, class UObject* Iitem, bool* Result, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Map_IsEmpty_ReturnValue, enum class EFEquipmentSlot CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UEquipableInventoryItem* CallFunc_GetEquippedGear_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AllItemFromItemSetEquippedAndAtMaxLevel(bool* Result, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasItemByTag_result, class UEquipableInventoryItem* CallFunc_HasItemByTag_item, bool CallFunc_IsItemInTheRequiredSlot_result, bool CallFunc_IsItemAtMaxLevel_ReturnValue);
	bool IsItemAtMaxLevel(class UInventoryItem* Item, int32 CallFunc_GetItemLevel_ReturnValue, int32 CallFunc_GetMaxItemLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void CanApplyItemSetBuff(bool* Result, const struct FGameplayTagContainer& CallFunc_GetAllItemSetTags_result, bool CallFunc_AllItemFromItemSetEquippedAndAtMaxLevel_result, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_self_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue);
	void HasItemByTag(const struct FGameplayTag& Tag, bool* Result, class UEquipableInventoryItem** Item, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventoryItem* CallFunc_GetEquippedGear_ReturnValue, class UItemData* CallFunc_GetItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	void Removed_338BBDCF467297D67F66178E44A26576(const struct FGameplayTag& TagWaitingFor);
	void Added_AE796693428C238AC98DF0A7FCA78209(const struct FGameplayTag& TagWaitingFor);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_ItemSetActivation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor_1, const struct FGameplayTag& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor, const struct FGameplayTag& Temp_struct_Variable_1, bool K2Node_Event_bWasCancelled, bool CallFunc_RemoveGameplayEffectByHandle_ReturnValue, bool CallFunc_RemoveGameplayEffectByHandle_ReturnValue_1, bool CallFunc_RemoveGameplayEffectByHandle_ReturnValue_2, bool CallFunc_CanApplyItemSetBuff_result, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetAllItemSetTags_result, class UAbilityTask_HexWaitGameplayTagsAdded* CallFunc_WaitGameplayTagsAdd_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetAllItemSetTags_result_1, class UAbilityTask_HexWaitGameplayTagsRemoved* CallFunc_WaitGameplayTagsRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


