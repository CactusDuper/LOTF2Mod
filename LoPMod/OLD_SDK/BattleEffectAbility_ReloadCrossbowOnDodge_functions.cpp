#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_ReloadCrossbowOnDodge.BattleEffectAbility_ReloadCrossbowOnDodge_C
// (None)

class UClass* UBattleEffectAbility_ReloadCrossbowOnDodge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_ReloadCrossbowOnDodge_C");

	return Clss;
}


// BattleEffectAbility_ReloadCrossbowOnDodge_C BattleEffectAbility_ReloadCrossbowOnDodge.Default__BattleEffectAbility_ReloadCrossbowOnDodge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_ReloadCrossbowOnDodge_C* UBattleEffectAbility_ReloadCrossbowOnDodge_C::GetDefaultObj()
{
	static class UBattleEffectAbility_ReloadCrossbowOnDodge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_ReloadCrossbowOnDodge_C*>(UBattleEffectAbility_ReloadCrossbowOnDodge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_ReloadCrossbowOnDodge.BattleEffectAbility_ReloadCrossbowOnDodge_C.OnActivate_AD8E128A4E04FB82B2D4178B52C8A869
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameplayAbility*            ActivatedAbility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_ReloadCrossbowOnDodge_C::OnActivate_AD8E128A4E04FB82B2D4178B52C8A869(class UGameplayAbility* ActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ReloadCrossbowOnDodge_C", "OnActivate_AD8E128A4E04FB82B2D4178B52C8A869");

	Params::UBattleEffectAbility_ReloadCrossbowOnDodge_C_OnActivate_AD8E128A4E04FB82B2D4178B52C8A869_Params Parms{};

	Parms.ActivatedAbility = ActivatedAbility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_ReloadCrossbowOnDodge.BattleEffectAbility_ReloadCrossbowOnDodge_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattleEffectAbility_ReloadCrossbowOnDodge_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ReloadCrossbowOnDodge_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattleEffectAbility_ReloadCrossbowOnDodge.BattleEffectAbility_ReloadCrossbowOnDodge_C.ExecuteUbergraph_BattleEffectAbility_ReloadCrossbowOnDodge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            K2Node_CustomEvent_ActivatedAbility                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitAbilityActivate*CallFunc_WaitForAbilityActivate_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryRangedWeapon*CallFunc_GetRangedWeaponEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_ReloadCrossbowOnDodge_C::ExecuteUbergraph_BattleEffectAbility_ReloadCrossbowOnDodge(int32 EntryPoint, class UGameplayAbility* K2Node_CustomEvent_ActivatedAbility, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameplayAbility* Temp_object_Variable, class UAbilityTask_WaitAbilityActivate* CallFunc_WaitForAbilityActivate_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UEquipableInventoryRangedWeapon* CallFunc_GetRangedWeaponEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_ReloadCrossbowOnDodge_C", "ExecuteUbergraph_BattleEffectAbility_ReloadCrossbowOnDodge");

	Params::UBattleEffectAbility_ReloadCrossbowOnDodge_C_ExecuteUbergraph_BattleEffectAbility_ReloadCrossbowOnDodge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ActivatedAbility = K2Node_CustomEvent_ActivatedAbility;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_WaitForAbilityActivate_ReturnValue = CallFunc_WaitForAbilityActivate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRangedWeaponEquipment_ReturnValue = CallFunc_GetRangedWeaponEquipment_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


