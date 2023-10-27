#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_HidePrimaryWeapon.ANS_HidePrimaryWeapon_C
// (None)

class UClass* UANS_HidePrimaryWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_HidePrimaryWeapon_C");

	return Clss;
}


// ANS_HidePrimaryWeapon_C ANS_HidePrimaryWeapon.Default__ANS_HidePrimaryWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_HidePrimaryWeapon_C* UANS_HidePrimaryWeapon_C::GetDefaultObj()
{
	static class UANS_HidePrimaryWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_HidePrimaryWeapon_C*>(UANS_HidePrimaryWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANS_HidePrimaryWeapon.ANS_HidePrimaryWeapon_C.BP_NotifyEndImplementation
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CustomData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFEquipmentSlot         CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryRangedWeapon*CallFunc_GetRangedWeaponEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryAmmo*     CallFunc_GetRangedAmmoEquipment_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryWeapon*   CallFunc_GetSecondaryWeaponEquipment_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryWeapon*   CallFunc_GetPrimaryWeaponEquipment_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryWeapon*   K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryWeapon*   K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_HidePrimaryWeapon_C::BP_NotifyEndImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class UObject* CustomData, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, enum class EFEquipmentSlot CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue, class UEquipableInventoryRangedWeapon* CallFunc_GetRangedWeaponEquipment_ReturnValue, class UEquipableInventoryAmmo* CallFunc_GetRangedAmmoEquipment_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetSecondaryWeaponEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetPrimaryWeaponEquipment_ReturnValue, class UEquipableInventoryWeapon* K2Node_Select_Default, class UEquipableInventoryWeapon* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_HidePrimaryWeapon_C", "BP_NotifyEndImplementation");

	Params::UANS_HidePrimaryWeapon_C_BP_NotifyEndImplementation_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.Animation = Animation;
	Parms.CustomData = CustomData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue = CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue;
	Parms.CallFunc_GetRangedWeaponEquipment_ReturnValue = CallFunc_GetRangedWeaponEquipment_ReturnValue;
	Parms.CallFunc_GetRangedAmmoEquipment_ReturnValue = CallFunc_GetRangedAmmoEquipment_ReturnValue;
	Parms.CallFunc_GetSecondaryWeaponEquipment_ReturnValue = CallFunc_GetSecondaryWeaponEquipment_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPrimaryWeaponEquipment_ReturnValue = CallFunc_GetPrimaryWeaponEquipment_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ANS_HidePrimaryWeapon.ANS_HidePrimaryWeapon_C.BP_NotifyBeginImplementation
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MontageInstanceID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFEquipmentSlot         CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryRangedWeapon*CallFunc_GetRangedWeaponEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryAmmo*     CallFunc_GetRangedAmmoEquipment_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryWeapon*   CallFunc_GetSecondaryWeaponEquipment_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryWeapon*   CallFunc_GetPrimaryWeaponEquipment_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryWeapon*   K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryWeapon*   K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UANS_HidePrimaryWeapon_C::BP_NotifyBeginImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, float TotalDuration, int32 MontageInstanceID, bool Temp_bool_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, enum class EFEquipmentSlot CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue, class UEquipableInventoryRangedWeapon* CallFunc_GetRangedWeaponEquipment_ReturnValue, class UEquipableInventoryAmmo* CallFunc_GetRangedAmmoEquipment_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetSecondaryWeaponEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetPrimaryWeaponEquipment_ReturnValue, class UEquipableInventoryWeapon* K2Node_Select_Default, class UEquipableInventoryWeapon* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_HidePrimaryWeapon_C", "BP_NotifyBeginImplementation");

	Params::UANS_HidePrimaryWeapon_C_BP_NotifyBeginImplementation_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.Animation = Animation;
	Parms.TotalDuration = TotalDuration;
	Parms.MontageInstanceID = MontageInstanceID;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue = CallFunc_GetRangedAmmoEquipmentSlot_ReturnValue;
	Parms.CallFunc_GetRangedWeaponEquipment_ReturnValue = CallFunc_GetRangedWeaponEquipment_ReturnValue;
	Parms.CallFunc_GetRangedAmmoEquipment_ReturnValue = CallFunc_GetRangedAmmoEquipment_ReturnValue;
	Parms.CallFunc_GetSecondaryWeaponEquipment_ReturnValue = CallFunc_GetSecondaryWeaponEquipment_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPrimaryWeaponEquipment_ReturnValue = CallFunc_GetPrimaryWeaponEquipment_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


