#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SoulsLanternShining_TranscendToUmbral.GA_SoulsLanternShining_TranscendToUmbral_C
// (None)

class UClass* UGA_SoulsLanternShining_TranscendToUmbral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SoulsLanternShining_TranscendToUmbral_C");

	return Clss;
}


// GA_SoulsLanternShining_TranscendToUmbral_C GA_SoulsLanternShining_TranscendToUmbral.Default__GA_SoulsLanternShining_TranscendToUmbral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SoulsLanternShining_TranscendToUmbral_C* UGA_SoulsLanternShining_TranscendToUmbral_C::GetDefaultObj()
{
	static class UGA_SoulsLanternShining_TranscendToUmbral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SoulsLanternShining_TranscendToUmbral_C*>(UGA_SoulsLanternShining_TranscendToUmbral_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_SoulsLanternShining_TranscendToUmbral.GA_SoulsLanternShining_TranscendToUmbral_C.OnFinish_B7A0F99545D6B1CF09A9BCA551DAAECF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_TranscendToUmbral_C::OnFinish_B7A0F99545D6B1CF09A9BCA551DAAECF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_TranscendToUmbral_C", "OnFinish_B7A0F99545D6B1CF09A9BCA551DAAECF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining_TranscendToUmbral.GA_SoulsLanternShining_TranscendToUmbral_C.OnFinish_E5C7421E41EFCA5EDCA78482ACBC4DB6
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_TranscendToUmbral_C::OnFinish_E5C7421E41EFCA5EDCA78482ACBC4DB6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_TranscendToUmbral_C", "OnFinish_E5C7421E41EFCA5EDCA78482ACBC4DB6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining_TranscendToUmbral.GA_SoulsLanternShining_TranscendToUmbral_C.OnFinish_4A67ED1B429600A0908AA48B7E52F751
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_TranscendToUmbral_C::OnFinish_4A67ED1B429600A0908AA48B7E52F751()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_TranscendToUmbral_C", "OnFinish_4A67ED1B429600A0908AA48B7E52F751");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining_TranscendToUmbral.GA_SoulsLanternShining_TranscendToUmbral_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_TranscendToUmbral_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_TranscendToUmbral_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining_TranscendToUmbral.GA_SoulsLanternShining_TranscendToUmbral_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SoulsLanternShining_TranscendToUmbral_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_TranscendToUmbral_C", "K2_OnEndAbility");

	Params::UGA_SoulsLanternShining_TranscendToUmbral_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SoulsLanternShining_TranscendToUmbral.GA_SoulsLanternShining_TranscendToUmbral_C.OnShiningInhibited
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_TranscendToUmbral_C::OnShiningInhibited()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_TranscendToUmbral_C", "OnShiningInhibited");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining_TranscendToUmbral.GA_SoulsLanternShining_TranscendToUmbral_C.OnShiningActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SoulsLanternShining_TranscendToUmbral_C::OnShiningActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_TranscendToUmbral_C", "OnShiningActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulsLanternShining_TranscendToUmbral.GA_SoulsLanternShining_TranscendToUmbral_C.ExecuteUbergraph_GA_SoulsLanternShining_TranscendToUmbral
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue_2                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SoulsLanternShining_TranscendToUmbral_C::ExecuteUbergraph_GA_SoulsLanternShining_TranscendToUmbral(int32 EntryPoint, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool K2Node_Event_bWasCancelled, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulsLanternShining_TranscendToUmbral_C", "ExecuteUbergraph_GA_SoulsLanternShining_TranscendToUmbral");

	Params::UGA_SoulsLanternShining_TranscendToUmbral_C_ExecuteUbergraph_GA_SoulsLanternShining_TranscendToUmbral_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_WaitDelay_ReturnValue_1 = CallFunc_WaitDelay_ReturnValue_1;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_WaitDelay_ReturnValue_2 = CallFunc_WaitDelay_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


