#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_BuffDamageOnSpellCast.BattleEffectAbility_BuffDamageOnSpellCast_C
// (None)

class UClass* UBattleEffectAbility_BuffDamageOnSpellCast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_BuffDamageOnSpellCast_C");

	return Clss;
}


// BattleEffectAbility_BuffDamageOnSpellCast_C BattleEffectAbility_BuffDamageOnSpellCast.Default__BattleEffectAbility_BuffDamageOnSpellCast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_BuffDamageOnSpellCast_C* UBattleEffectAbility_BuffDamageOnSpellCast_C::GetDefaultObj()
{
	static class UBattleEffectAbility_BuffDamageOnSpellCast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_BuffDamageOnSpellCast_C*>(UBattleEffectAbility_BuffDamageOnSpellCast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattleEffectAbility_BuffDamageOnSpellCast.BattleEffectAbility_BuffDamageOnSpellCast_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattleEffectAbility_BuffDamageOnSpellCast_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_BuffDamageOnSpellCast_C", "K2_ActivateAbilityFromEvent");

	Params::UBattleEffectAbility_BuffDamageOnSpellCast_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattleEffectAbility_BuffDamageOnSpellCast.BattleEffectAbility_BuffDamageOnSpellCast_C.ExecuteUbergraph_BattleEffectAbility_BuffDamageOnSpellCast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// class UMagicItemData*              K2Node_DynamicCast_AsMagic_Item_Data                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMagicFamily            CallFunc_GetMagicFamily_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHexBattleEffectIdentifier  K2Node_MakeStruct_HexBattleEffectIdentifier                      (NoDestructor)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBattleEffectStringParam_outValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattleEffectStringParam_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHexBattleEffectIdentifier  K2Node_MakeStruct_HexBattleEffectIdentifier_1                    (NoDestructor)
// struct FHexBattleEffectIdentifier  K2Node_MakeStruct_HexBattleEffectIdentifier_2                    (NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectToActor_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectToActor_ReturnValue_1                  (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectToActor_ReturnValue_2                  (NoDestructor, HasGetValueTypeHash)

void UBattleEffectAbility_BuffDamageOnSpellCast_C::ExecuteUbergraph_BattleEffectAbility_BuffDamageOnSpellCast(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class UMagicItemData* K2Node_DynamicCast_AsMagic_Item_Data, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetBattleEffectStringParam_outValue, bool CallFunc_GetBattleEffectStringParam_ReturnValue, enum class EMagicFamily CallFunc_GetMagicFamily_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FHexBattleEffectIdentifier& K2Node_MakeStruct_HexBattleEffectIdentifier, class FName CallFunc_GetBattleEffectStringParam_outValue_1, bool CallFunc_GetBattleEffectStringParam_ReturnValue_1, class FName CallFunc_GetBattleEffectStringParam_outValue_2, bool CallFunc_GetBattleEffectStringParam_ReturnValue_2, const struct FHexBattleEffectIdentifier& K2Node_MakeStruct_HexBattleEffectIdentifier_1, const struct FHexBattleEffectIdentifier& K2Node_MakeStruct_HexBattleEffectIdentifier_2, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattleEffectAbility_BuffDamageOnSpellCast_C", "ExecuteUbergraph_BattleEffectAbility_BuffDamageOnSpellCast");

	Params::UBattleEffectAbility_BuffDamageOnSpellCast_C_ExecuteUbergraph_BattleEffectAbility_BuffDamageOnSpellCast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.K2Node_DynamicCast_AsMagic_Item_Data = K2Node_DynamicCast_AsMagic_Item_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBattleEffectStringParam_outValue = CallFunc_GetBattleEffectStringParam_outValue;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue = CallFunc_GetBattleEffectStringParam_ReturnValue;
	Parms.CallFunc_GetMagicFamily_ReturnValue = CallFunc_GetMagicFamily_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_HexBattleEffectIdentifier = K2Node_MakeStruct_HexBattleEffectIdentifier;
	Parms.CallFunc_GetBattleEffectStringParam_outValue_1 = CallFunc_GetBattleEffectStringParam_outValue_1;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue_1 = CallFunc_GetBattleEffectStringParam_ReturnValue_1;
	Parms.CallFunc_GetBattleEffectStringParam_outValue_2 = CallFunc_GetBattleEffectStringParam_outValue_2;
	Parms.CallFunc_GetBattleEffectStringParam_ReturnValue_2 = CallFunc_GetBattleEffectStringParam_ReturnValue_2;
	Parms.K2Node_MakeStruct_HexBattleEffectIdentifier_1 = K2Node_MakeStruct_HexBattleEffectIdentifier_1;
	Parms.K2Node_MakeStruct_HexBattleEffectIdentifier_2 = K2Node_MakeStruct_HexBattleEffectIdentifier_2;
	Parms.CallFunc_ApplyBattleEffectToActor_ReturnValue = CallFunc_ApplyBattleEffectToActor_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;
	Parms.CallFunc_ApplyBattleEffectToActor_ReturnValue_1 = CallFunc_ApplyBattleEffectToActor_ReturnValue_1;
	Parms.CallFunc_ApplyBattleEffectToActor_ReturnValue_2 = CallFunc_ApplyBattleEffectToActor_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


