#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xA4 - 0xA0)
// BlueprintGeneratedClass ANS_HidePrimaryWeapon.ANS_HidePrimaryWeapon_C
class UANS_HidePrimaryWeapon_C : public UAnimNotifyState_BaseConditionalTag
{
public:
	bool                                         ShouldHide_;                                       // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GetSecondaryWeapon;                                // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GetRangedWeapon;                                   // 0xA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GetThrowableAmmo;                                  // 0xA3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_HidePrimaryWeapon_C* GetDefaultObj();

	void BP_NotifyEndImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class UObject* CustomData, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, enum class EFEquipmentSlot CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue, class UEquipableInventoryRangedWeapon* CallFunc_GetRangedWeaponEquipment_ReturnValue, class UEquipableInventoryAmmo* CallFunc_GetRangedAmmoEquipment_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetSecondaryWeaponEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetPrimaryWeaponEquipment_ReturnValue, class UEquipableInventoryWeapon* K2Node_Select_Default, class UEquipableInventoryWeapon* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1);
	void BP_NotifyBeginImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, float TotalDuration, int32 MontageInstanceID, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, enum class EFEquipmentSlot CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue, class UEquipableInventoryRangedWeapon* CallFunc_GetRangedWeaponEquipment_ReturnValue, class UEquipableInventoryAmmo* CallFunc_GetRangedAmmoEquipment_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetSecondaryWeaponEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetPrimaryWeaponEquipment_ReturnValue, class UEquipableInventoryWeapon* K2Node_Select_Default, class UEquipableInventoryWeapon* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


