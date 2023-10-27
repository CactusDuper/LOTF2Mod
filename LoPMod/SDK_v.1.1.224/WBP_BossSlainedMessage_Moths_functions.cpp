#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BossSlainedMessage_Moths.WBP_BossSlainedMessage_Moths_C
// (None)

class UClass* UWBP_BossSlainedMessage_Moths_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BossSlainedMessage_Moths_C");

	return Clss;
}


// WBP_BossSlainedMessage_Moths_C WBP_BossSlainedMessage_Moths.Default__WBP_BossSlainedMessage_Moths_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BossSlainedMessage_Moths_C* UWBP_BossSlainedMessage_Moths_C::GetDefaultObj()
{
	static class UWBP_BossSlainedMessage_Moths_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BossSlainedMessage_Moths_C*>(UWBP_BossSlainedMessage_Moths_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BossSlainedMessage_Moths.WBP_BossSlainedMessage_Moths_C.SequenceEvent__ENTRYPOINTWBP_BossSlainedMessage_Moths_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossSlainedMessage_Moths_C::SequenceEvent__ENTRYPOINTWBP_BossSlainedMessage_Moths_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossSlainedMessage_Moths_C", "SequenceEvent__ENTRYPOINTWBP_BossSlainedMessage_Moths_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossSlainedMessage_Moths.WBP_BossSlainedMessage_Moths_C.SequenceEvent__ENTRYPOINTWBP_BossSlainedMessage_Moths
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossSlainedMessage_Moths_C::SequenceEvent__ENTRYPOINTWBP_BossSlainedMessage_Moths()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossSlainedMessage_Moths_C", "SequenceEvent__ENTRYPOINTWBP_BossSlainedMessage_Moths");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossSlainedMessage_Moths.WBP_BossSlainedMessage_Moths_C.Update Realm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossSlainedMessage_Moths_C::Update_Realm(enum class EGameRealm Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossSlainedMessage_Moths_C", "Update Realm");

	Params::UWBP_BossSlainedMessage_Moths_C_Update_Realm_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossSlainedMessage_Moths.WBP_BossSlainedMessage_Moths_C.SetBossInfo
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      ActorToShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UCharacterUIData*            CallFunc_GetUIData_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Map_Find_Value_1                                        (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossSlainedMessage_Moths_C::SetBossInfo(class AActor* ActorToShow, const struct FGameplayTag& Temp_struct_Variable, class UCharacterUIData* CallFunc_GetUIData_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FGameplayTag& Temp_struct_Variable_2, class FText CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossSlainedMessage_Moths_C", "SetBossInfo");

	Params::UWBP_BossSlainedMessage_Moths_C_SetBossInfo_Params Parms{};

	Parms.ActorToShow = ActorToShow;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetUIData_ReturnValue = CallFunc_GetUIData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossSlainedMessage_Moths.WBP_BossSlainedMessage_Moths_C.Finished_E5B7AEC94A533DB6088D4ABC972A8119
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossSlainedMessage_Moths_C::Finished_E5B7AEC94A533DB6088D4ABC972A8119()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossSlainedMessage_Moths_C", "Finished_E5B7AEC94A533DB6088D4ABC972A8119");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossSlainedMessage_Moths.WBP_BossSlainedMessage_Moths_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossSlainedMessage_Moths_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossSlainedMessage_Moths_C", "SequenceEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossSlainedMessage_Moths.WBP_BossSlainedMessage_Moths_C.BP_OnActivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_BossSlainedMessage_Moths_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossSlainedMessage_Moths_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BossSlainedMessage_Moths.WBP_BossSlainedMessage_Moths_C.OnEndTranscendRealm_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              OldRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              NewRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActivateRealmReason    Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossSlainedMessage_Moths_C::OnEndTranscendRealm_Event_0(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm, enum class EActivateRealmReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossSlainedMessage_Moths_C", "OnEndTranscendRealm_Event_0");

	Params::UWBP_BossSlainedMessage_Moths_C_OnEndTranscendRealm_Event_0_Params Parms{};

	Parms.OldRealm = OldRealm;
	Parms.NewRealm = NewRealm;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BossSlainedMessage_Moths.WBP_BossSlainedMessage_Moths_C.ExecuteUbergraph_WBP_BossSlainedMessage_Moths
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_oldRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_newRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActivateRealmReason    K2Node_CustomEvent_reason                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BossSlainedMessage_Moths_C::ExecuteUbergraph_WBP_BossSlainedMessage_Moths(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, enum class EActivateRealmReason K2Node_CustomEvent_reason, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BossSlainedMessage_Moths_C", "ExecuteUbergraph_WBP_BossSlainedMessage_Moths");

	Params::UWBP_BossSlainedMessage_Moths_C_ExecuteUbergraph_WBP_BossSlainedMessage_Moths_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.K2Node_CustomEvent_oldRealm = K2Node_CustomEvent_oldRealm;
	Parms.K2Node_CustomEvent_newRealm = K2Node_CustomEvent_newRealm;
	Parms.K2Node_CustomEvent_reason = K2Node_CustomEvent_reason;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


