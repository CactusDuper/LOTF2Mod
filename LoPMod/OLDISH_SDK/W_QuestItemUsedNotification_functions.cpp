#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_QuestItemUsedNotification.W_QuestItemUsedNotification_C
// (None)

class UClass* UW_QuestItemUsedNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_QuestItemUsedNotification_C");

	return Clss;
}


// W_QuestItemUsedNotification_C W_QuestItemUsedNotification.Default__W_QuestItemUsedNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_QuestItemUsedNotification_C* UW_QuestItemUsedNotification_C::GetDefaultObj()
{
	static class UW_QuestItemUsedNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_QuestItemUsedNotification_C*>(UW_QuestItemUsedNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_QuestItemUsedNotification.W_QuestItemUsedNotification_C.Update Realm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuestItemUsedNotification_C::Update_Realm(enum class EGameRealm Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuestItemUsedNotification_C", "Update Realm");

	Params::UW_QuestItemUsedNotification_C_Update_Realm_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuestItemUsedNotification.W_QuestItemUsedNotification_C.Finished_EAF02EB046FD0D159D11FFAA56FA2F22
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_QuestItemUsedNotification_C::Finished_EAF02EB046FD0D159D11FFAA56FA2F22()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuestItemUsedNotification_C", "Finished_EAF02EB046FD0D159D11FFAA56FA2F22");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_QuestItemUsedNotification.W_QuestItemUsedNotification_C.Finished_CD371D7D4AFCE0C24F410AB9ACB91E7B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_QuestItemUsedNotification_C::Finished_CD371D7D4AFCE0C24F410AB9ACB91E7B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuestItemUsedNotification_C", "Finished_CD371D7D4AFCE0C24F410AB9ACB91E7B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_QuestItemUsedNotification.W_QuestItemUsedNotification_C.BP_OnActivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_QuestItemUsedNotification_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuestItemUsedNotification_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_QuestItemUsedNotification.W_QuestItemUsedNotification_C.BP_SetDuration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuestItemUsedNotification_C::BP_SetDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuestItemUsedNotification_C", "BP_SetDuration");

	Params::UW_QuestItemUsedNotification_C_BP_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuestItemUsedNotification.W_QuestItemUsedNotification_C.BP_OnDeactivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_QuestItemUsedNotification_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuestItemUsedNotification_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_QuestItemUsedNotification.W_QuestItemUsedNotification_C.OnEndTranscendRealm_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              OldRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              NewRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActivateRealmReason    Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuestItemUsedNotification_C::OnEndTranscendRealm_Event_0(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm, enum class EActivateRealmReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuestItemUsedNotification_C", "OnEndTranscendRealm_Event_0");

	Params::UW_QuestItemUsedNotification_C_OnEndTranscendRealm_Event_0_Params Parms{};

	Parms.OldRealm = OldRealm;
	Parms.NewRealm = NewRealm;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_QuestItemUsedNotification.W_QuestItemUsedNotification_C.ExecuteUbergraph_W_QuestItemUsedNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_oldRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_newRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActivateRealmReason    K2Node_CustomEvent_reason                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_QuestItemUsedNotification_C::ExecuteUbergraph_W_QuestItemUsedNotification(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_duration, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, enum class EActivateRealmReason K2Node_CustomEvent_reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_QuestItemUsedNotification_C", "ExecuteUbergraph_W_QuestItemUsedNotification");

	Params::UW_QuestItemUsedNotification_C_ExecuteUbergraph_W_QuestItemUsedNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue = CallFunc_GetCurrentGameRealm_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_duration = K2Node_Event_duration;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_oldRealm = K2Node_CustomEvent_oldRealm;
	Parms.K2Node_CustomEvent_newRealm = K2Node_CustomEvent_newRealm;
	Parms.K2Node_CustomEvent_reason = K2Node_CustomEvent_reason;

	UObject::ProcessEvent(Func, &Parms);

}

}


