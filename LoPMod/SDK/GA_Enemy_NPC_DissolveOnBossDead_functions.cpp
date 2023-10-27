#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Enemy_NPC_DissolveOnBossDead.GA_Enemy_NPC_DissolveOnBossDead_C
// (None)

class UClass* UGA_Enemy_NPC_DissolveOnBossDead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Enemy_NPC_DissolveOnBossDead_C");

	return Clss;
}


// GA_Enemy_NPC_DissolveOnBossDead_C GA_Enemy_NPC_DissolveOnBossDead.Default__GA_Enemy_NPC_DissolveOnBossDead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Enemy_NPC_DissolveOnBossDead_C* UGA_Enemy_NPC_DissolveOnBossDead_C::GetDefaultObj()
{
	static class UGA_Enemy_NPC_DissolveOnBossDead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Enemy_NPC_DissolveOnBossDead_C*>(UGA_Enemy_NPC_DissolveOnBossDead_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Enemy_NPC_DissolveOnBossDead.GA_Enemy_NPC_DissolveOnBossDead_C.OnFinish_AB593B16486EFCD83D257EBEAE5BA37C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Enemy_NPC_DissolveOnBossDead_C::OnFinish_AB593B16486EFCD83D257EBEAE5BA37C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Enemy_NPC_DissolveOnBossDead_C", "OnFinish_AB593B16486EFCD83D257EBEAE5BA37C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Enemy_NPC_DissolveOnBossDead.GA_Enemy_NPC_DissolveOnBossDead_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Enemy_NPC_DissolveOnBossDead_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Enemy_NPC_DissolveOnBossDead_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Enemy_NPC_DissolveOnBossDead.GA_Enemy_NPC_DissolveOnBossDead_C.Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Enemy_NPC_DissolveOnBossDead_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Enemy_NPC_DissolveOnBossDead_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Enemy_NPC_DissolveOnBossDead.GA_Enemy_NPC_DissolveOnBossDead_C.ExecuteUbergraph_GA_Enemy_NPC_DissolveOnBossDead
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTaskOwnerInterface>CallFunc_TaskWaitDelay_TaskOwner_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UGameplayTask_WaitDelay*     CallFunc_TaskWaitDelay_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDissolveFXComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Enemy_NPC_DissolveOnBossDead_C::ExecuteUbergraph_GA_Enemy_NPC_DissolveOnBossDead(int32 EntryPoint, TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput, class UGameplayTask_WaitDelay* CallFunc_TaskWaitDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Enemy_NPC_DissolveOnBossDead_C", "ExecuteUbergraph_GA_Enemy_NPC_DissolveOnBossDead");

	Params::UGA_Enemy_NPC_DissolveOnBossDead_C_ExecuteUbergraph_GA_Enemy_NPC_DissolveOnBossDead_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TaskWaitDelay_TaskOwner_CastInput = CallFunc_TaskWaitDelay_TaskOwner_CastInput;
	Parms.CallFunc_TaskWaitDelay_ReturnValue = CallFunc_TaskWaitDelay_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


