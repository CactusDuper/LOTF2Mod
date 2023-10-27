#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_EncumberedStateManager.GA_EncumberedStateManager_C
// (None)

class UClass* UGA_EncumberedStateManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_EncumberedStateManager_C");

	return Clss;
}


// GA_EncumberedStateManager_C GA_EncumberedStateManager.Default__GA_EncumberedStateManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_EncumberedStateManager_C* UGA_EncumberedStateManager_C::GetDefaultObj()
{
	static class UGA_EncumberedStateManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_EncumberedStateManager_C*>(UGA_EncumberedStateManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_EncumberedStateManager.GA_EncumberedStateManager_C.OnChange_BB57114843A07312E77BB19AB95CDC21
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_EncumberedStateManager_C::OnChange_BB57114843A07312E77BB19AB95CDC21()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EncumberedStateManager_C", "OnChange_BB57114843A07312E77BB19AB95CDC21");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_EncumberedStateManager.GA_EncumberedStateManager_C.OnChange_3F2F5F9A4C7E8816D10FE29B0F505D13
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_EncumberedStateManager_C::OnChange_3F2F5F9A4C7E8816D10FE29B0F505D13()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EncumberedStateManager_C", "OnChange_3F2F5F9A4C7E8816D10FE29B0F505D13");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_EncumberedStateManager.GA_EncumberedStateManager_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_EncumberedStateManager_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EncumberedStateManager_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_EncumberedStateManager.GA_EncumberedStateManager_C.ApplyEffectBasedOnCurrentWeightTier
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_EncumberedStateManager_C::ApplyEffectBasedOnCurrentWeightTier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EncumberedStateManager_C", "ApplyEffectBasedOnCurrentWeightTier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_EncumberedStateManager.GA_EncumberedStateManager_C.ExecuteUbergraph_GA_EncumberedStateManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitAttributeChange*CallFunc_WaitForAttributeChange_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitAttributeChange*CallFunc_WaitForAttributeChange_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue                           (None)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// enum class EHexEquipmentLoadTier   CallFunc_GetCurrentEquipmentLoadWeightTier_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2              (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3              (NoDestructor, HasGetValueTypeHash)

void UGA_EncumberedStateManager_C::ExecuteUbergraph_GA_EncumberedStateManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitAttributeChange* CallFunc_WaitForAttributeChange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitAttributeChange* CallFunc_WaitForAttributeChange_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, enum class EHexEquipmentLoadTier CallFunc_GetCurrentEquipmentLoadWeightTier_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_EncumberedStateManager_C", "ExecuteUbergraph_GA_EncumberedStateManager");

	Params::UGA_EncumberedStateManager_C_ExecuteUbergraph_GA_EncumberedStateManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WaitForAttributeChange_ReturnValue = CallFunc_WaitForAttributeChange_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WaitForAttributeChange_ReturnValue_1 = CallFunc_WaitForAttributeChange_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_MakeEffectContext_ReturnValue = CallFunc_MakeEffectContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_GetCurrentEquipmentLoadWeightTier_ReturnValue = CallFunc_GetCurrentEquipmentLoadWeightTier_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


