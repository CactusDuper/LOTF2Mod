#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_BossStats.W_BossStats_C
// (None)

class UClass* UW_BossStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_BossStats_C");

	return Clss;
}


// W_BossStats_C W_BossStats.Default__W_BossStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_BossStats_C* UW_BossStats_C::GetDefaultObj()
{
	static class UW_BossStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_BossStats_C*>(UW_BossStats_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_BossStats.W_BossStats_C.RemoveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::RemoveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "RemoveWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.Set Damage Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 InColorAndOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BossStats_C::Set_Damage_Text(float Value, const struct FSlateColor& InColorAndOpacity, class FText CallFunc_Conv_DoubleToText_ReturnValue, double CallFunc_Conv_DoubleToText_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Set Damage Text");

	Params::UW_BossStats_C_Set_Damage_Text_Params Parms{};

	Parms.Value = Value;
	Parms.InColorAndOpacity = InColorAndOpacity;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast = CallFunc_Conv_DoubleToText_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BossStats.W_BossStats_C.UpdateProvisionalDamageBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentHealthPercent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentProvisionalDamagePercent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BossStats_C::UpdateProvisionalDamageBar(double CurrentHealthPercent, double CurrentProvisionalDamagePercent, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, float CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast, float CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "UpdateProvisionalDamageBar");

	Params::UW_BossStats_C_UpdateProvisionalDamageBar_Params Parms{};

	Parms.CurrentHealthPercent = CurrentHealthPercent;
	Parms.CurrentProvisionalDamagePercent = CurrentProvisionalDamagePercent;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;
	Parms.CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast = CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast;
	Parms.CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast = CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BossStats.W_BossStats_C.Finished_11C226764C5F36672B948CB225F07804
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::Finished_11C226764C5F36672B948CB225F07804()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Finished_11C226764C5F36672B948CB225F07804");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.Finished_27F246F24BF7E7FA26ED068245EC7BC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::Finished_27F246F24BF7E7FA26ED068245EC7BC7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Finished_27F246F24BF7E7FA26ED068245EC7BC7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.Added_18A2761A45294D3219CDF682EC75C365
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::Added_18A2761A45294D3219CDF682EC75C365()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Added_18A2761A45294D3219CDF682EC75C365");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.Removed_7C2885D145304F49A8EDCD8055E88524
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::Removed_7C2885D145304F49A8EDCD8055E88524()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Removed_7C2885D145304F49A8EDCD8055E88524");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.Added_BAA60E01463C7782D2185CA02A3914F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::Added_BAA60E01463C7782D2185CA02A3914F0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Added_BAA60E01463C7782D2185CA02A3914F0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.Removed_12D5EB644A68AD25F94E23B3A6C00C2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::Removed_12D5EB644A68AD25F94E23B3A6C00C2A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Removed_12D5EB644A68AD25F94E23B3A6C00C2A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.Removed_E4C5173F49C571BF121422B6649653CC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::Removed_E4C5173F49C571BF121422B6649653CC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Removed_E4C5173F49C571BF121422B6649653CC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.Added_267002C44449DE0BD7DF6EB8E363B2F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::Added_267002C44449DE0BD7DF6EB8E363B2F0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Added_267002C44449DE0BD7DF6EB8E363B2F0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.Removed_0C43BC914CBC12CB16AC42B6A5E3F553
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::Removed_0C43BC914CBC12CB16AC42B6A5E3F553()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Removed_0C43BC914CBC12CB16AC42B6A5E3F553");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.Added_A45545EC49CC2B1F1081F4BDE3F8758F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::Added_A45545EC49CC2B1F1081F4BDE3F8758F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "Added_A45545EC49CC2B1F1081F4BDE3F8758F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.PlayTextDamageAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_BossStats_C::PlayTextDamageAnimation(float Damage, const struct FSlateColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "PlayTextDamageAnimation");

	Params::UW_BossStats_C_PlayTextDamageAnimation_Params Parms{};

	Parms.Damage = Damage;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BossStats.W_BossStats_C.MoveProvisionalDamageBar
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              CurrentHealth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ProvisionalDamage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BossStats_C::MoveProvisionalDamageBar(float CurrentHealth, float ProvisionalDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "MoveProvisionalDamageBar");

	Params::UW_BossStats_C_MoveProvisionalDamageBar_Params Parms{};

	Parms.CurrentHealth = CurrentHealth;
	Parms.ProvisionalDamage = ProvisionalDamage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BossStats.W_BossStats_C.BP_OnActivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.BP_OnDeactivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.BP_SetDuration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BossStats_C::BP_SetDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "BP_SetDuration");

	Params::UW_BossStats_C_BP_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BossStats.W_BossStats_C.BP_OnBossAssigned
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BossStats_C::BP_OnBossAssigned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "BP_OnBossAssigned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BossStats.W_BossStats_C.ExecuteUbergraph_W_BossStats
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Event_color                                               (None)
// float                              K2Node_Event_currentHealth                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_provisionalDamage                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_2            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_3            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Set_Damage_Text_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateProvisionalDamageBar_CurrentHealthPercent_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateProvisionalDamageBar_CurrentProvisionalDamagePercent_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BossStats_C::ExecuteUbergraph_W_BossStats(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_Event_damage, const struct FSlateColor& K2Node_Event_color, float K2Node_Event_currentHealth, float K2Node_Event_provisionalDamage, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, float K2Node_Event_duration, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_1, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_3, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, float CallFunc_Set_Damage_Text_Value_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_UpdateProvisionalDamageBar_CurrentHealthPercent_ImplicitCast, double CallFunc_UpdateProvisionalDamageBar_CurrentProvisionalDamagePercent_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BossStats_C", "ExecuteUbergraph_W_BossStats");

	Params::UW_BossStats_C_ExecuteUbergraph_W_BossStats_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_damage = K2Node_Event_damage;
	Parms.K2Node_Event_color = K2Node_Event_color;
	Parms.K2Node_Event_currentHealth = K2Node_Event_currentHealth;
	Parms.K2Node_Event_provisionalDamage = K2Node_Event_provisionalDamage;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_Event_duration = K2Node_Event_duration;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue = CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue = CallFunc_WaitGameplayTagAddToActor_ReturnValue;
	Parms.CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue = CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue_1 = CallFunc_WaitGameplayTagAddToActor_ReturnValue_1;
	Parms.CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1 = CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput_1 = CallFunc_HasMatchingGameplayTag_self_CastInput_1;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_1 = CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_2 = CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue_2 = CallFunc_WaitGameplayTagAddToActor_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result = CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue = CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_3 = CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_3;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue_3 = CallFunc_WaitGameplayTagAddToActor_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Set_Damage_Text_Value_ImplicitCast = CallFunc_Set_Damage_Text_Value_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_UpdateProvisionalDamageBar_CurrentHealthPercent_ImplicitCast = CallFunc_UpdateProvisionalDamageBar_CurrentHealthPercent_ImplicitCast;
	Parms.CallFunc_UpdateProvisionalDamageBar_CurrentProvisionalDamagePercent_ImplicitCast = CallFunc_UpdateProvisionalDamageBar_CurrentProvisionalDamagePercent_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


