#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x4A0 - 0x448)
// BlueprintGeneratedClass GA_ChangeRangedAmmo.GA_ChangeRangedAmmo_C
class UGA_ChangeRangedAmmo_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          CurrentMontagePlayed;                              // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         WaitingForChange;                                  // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayEvent*        WaitingForInput;                                   // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EFEquipmentSlot                   ThrowableAmmoToSet;                                // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A9D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayEvent*        WaitForInputWhileOwnMontage;                       // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          InitialChangeRangedAmmoTag;                        // 0x478(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TagsToWaitFor;                                     // 0x480(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_ChangeRangedAmmo_C* GetDefaultObj();

	void GetMontageByTag(const struct FGameplayTag& AnimTag, class UAnimMontage** MontageToPlay, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCharacterConfigComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimMontage* CallFunc_GetAnimMontageByTag_ReturnValue);
	void SetThrowableEquipmentToSelect(class UEquipmentManagerComponent* EquipmentManagerComponent, const struct FGameplayTag& GameplayTag, bool* SameSlotSelected, enum class EFEquipmentSlot Temp_byte_Variable, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, enum class EFEquipmentSlot CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue, bool Temp_bool_Variable, enum class EFEquipmentSlot Temp_byte_Variable_1, enum class EFEquipmentSlot Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class EFEquipmentSlot K2Node_Select_Default, enum class EFEquipmentSlot K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetRangedEquipmentToSelect(const struct FGameplayTag& GameplayTag, enum class EFEquipmentSlot* RangedAmmoEnum, enum class EFEquipmentSlot Temp_byte_Variable, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool Temp_bool_Variable, enum class EFEquipmentSlot Temp_byte_Variable_1, enum class EFEquipmentSlot Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class EFEquipmentSlot K2Node_Select_Default, enum class EFEquipmentSlot K2Node_Select_Default_1);
	void EventReceived_954432194DBBB594B2684F96B18DD8B1(const struct FGameplayEventData& Payload);
	void Removed_914C21564AEEC3069BAD96850AC8A259(const struct FGameplayTag& TagWaitingFor);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_ChangeRangedAmmo(int32 EntryPoint, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& Temp_struct_Variable_1, bool Temp_bool_Variable, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_SetThrowableEquipmentToSelect_SameSlotSelected, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, class UEquipableInventoryRangedWeapon* CallFunc_GetRangedWeaponEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTag& CallFunc_GetItemCategory_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_SetThrowableEquipmentToSelect_SameSlotSelected_1, enum class EFEquipmentSlot CallFunc_GetRangedEquipmentToSelect_RangedAmmoEnum, bool K2Node_Event_bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class UGameplayTask_HexWaitGameplayTagsRemoved* CallFunc_WaitGameplayTagsRemove_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


