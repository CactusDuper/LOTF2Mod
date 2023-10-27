#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C
// (None)

class UClass* UEnemyStatusUIWidget_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyStatusUIWidget_BP_C");

	return Clss;
}


// EnemyStatusUIWidget_BP_C EnemyStatusUIWidget_BP.Default__EnemyStatusUIWidget_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyStatusUIWidget_BP_C* UEnemyStatusUIWidget_BP_C::GetDefaultObj()
{
	static class UEnemyStatusUIWidget_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyStatusUIWidget_BP_C*>(UEnemyStatusUIWidget_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.UpdateProvisionalDamageBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentHealthPercent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentProvisionalDamagePercent                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationTimeRange_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyStatusUIWidget_BP_C::UpdateProvisionalDamageBar(double CurrentHealthPercent, double CurrentProvisionalDamagePercent, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, float CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast, float CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "UpdateProvisionalDamageBar");

	Params::UEnemyStatusUIWidget_BP_C_UpdateProvisionalDamageBar_Params Parms{};

	Parms.CurrentHealthPercent = CurrentHealthPercent;
	Parms.CurrentProvisionalDamagePercent = CurrentProvisionalDamagePercent;
	Parms.CallFunc_PlayAnimationTimeRange_ReturnValue = CallFunc_PlayAnimationTimeRange_ReturnValue;
	Parms.CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast = CallFunc_PlayAnimationTimeRange_StartAtTime_ImplicitCast;
	Parms.CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast = CallFunc_PlayAnimationTimeRange_EndAtTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.Set Damage Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 InColorAndOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Font_Size                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToText_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyStatusUIWidget_BP_C::Set_Damage_Text(float Value, const struct FSlateColor& InColorAndOpacity, int32 Font_Size, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, double CallFunc_Conv_DoubleToText_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "Set Damage Text");

	Params::UEnemyStatusUIWidget_BP_C_Set_Damage_Text_Params Parms{};

	Parms.Value = Value;
	Parms.InColorAndOpacity = InColorAndOpacity;
	Parms.Font_Size = Font_Size;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_Conv_DoubleToText_Value_ImplicitCast = CallFunc_Conv_DoubleToText_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.Finished_174006D345BFBF97E98666B018E8A34D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::Finished_174006D345BFBF97E98666B018E8A34D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "Finished_174006D345BFBF97E98666B018E8A34D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.Finished_E6A1CA414C4A6B25C9AB6BBD78D947D4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::Finished_E6A1CA414C4A6B25C9AB6BBD78D947D4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "Finished_E6A1CA414C4A6B25C9AB6BBD78D947D4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.Added_CDFB327542688D57C82AABB708E6BFBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::Added_CDFB327542688D57C82AABB708E6BFBC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "Added_CDFB327542688D57C82AABB708E6BFBC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.Removed_82D707EF4A906D972255A7A2B26B38A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::Removed_82D707EF4A906D972255A7A2B26B38A4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "Removed_82D707EF4A906D972255A7A2B26B38A4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.Added_D7A482914D8A2AC069349981517B0BC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::Added_D7A482914D8A2AC069349981517B0BC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "Added_D7A482914D8A2AC069349981517B0BC8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.Removed_0D9829F24E4CFE7CEFBDEB90973EFE58
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::Removed_0D9829F24E4CFE7CEFBDEB90973EFE58()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "Removed_0D9829F24E4CFE7CEFBDEB90973EFE58");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.OnEnemyDeath
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatorActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       InstigatorTags                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bDeathWasObserved                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyStatusUIWidget_BP_C::OnEnemyDeath(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "OnEnemyDeath");

	Params::UEnemyStatusUIWidget_BP_C_OnEnemyDeath_Params Parms{};

	Parms.InstigatorActor = InstigatorActor;
	Parms.InstigatorTags = InstigatorTags;
	Parms.bDeathWasObserved = bDeathWasObserved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.MoveProvisionalDamageBar
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              CurrentHealth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ProvisionalDamage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyStatusUIWidget_BP_C::MoveProvisionalDamageBar(float CurrentHealth, float ProvisionalDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "MoveProvisionalDamageBar");

	Params::UEnemyStatusUIWidget_BP_C_MoveProvisionalDamageBar_Params Parms{};

	Parms.CurrentHealth = CurrentHealth;
	Parms.ProvisionalDamage = ProvisionalDamage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.PlayDamageTextAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              FontSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyStatusUIWidget_BP_C::PlayDamageTextAnimation(float Damage, const struct FSlateColor& Color, int32 FontSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "PlayDamageTextAnimation");

	Params::UEnemyStatusUIWidget_BP_C_PlayDamageTextAnimation_Params Parms{};

	Parms.Damage = Damage;
	Parms.Color = Color;
	Parms.FontSize = FontSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.BP_OnDamageTaken
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::BP_OnDamageTaken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "BP_OnDamageTaken");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.SetupPlayerName
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::SetupPlayerName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "SetupPlayerName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.OnFadeIn
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::OnFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "OnFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.OnFadeOut
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEnemyStatusUIWidget_BP_C::OnFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "OnFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyStatusUIWidget_BP.EnemyStatusUIWidget_BP_C.ExecuteUbergraph_EnemyStatusUIWidget_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_instigatorActor                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_instigatorTags                                      (ConstParm)
// bool                               K2Node_Event_bDeathWasObserved                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_currentHealth                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_provisionalDamage                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Event_color                                               (None)
// int32                              K2Node_Event_fontSize                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAddToActor_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAsync_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2PlayerState*           K2Node_DynamicCast_AsLOTF2Player_State                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHexMultiplayerRole     CallFunc_GetMultiplayerRole_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateProvisionalDamageBar_CurrentHealthPercent_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateProvisionalDamageBar_CurrentProvisionalDamagePercent_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyStatusUIWidget_BP_C::ExecuteUbergraph_EnemyStatusUIWidget_BP(int32 EntryPoint, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AActor* K2Node_Event_instigatorActor, const struct FGameplayTagContainer& K2Node_Event_instigatorTags, bool K2Node_Event_bDeathWasObserved, float K2Node_Event_currentHealth, float K2Node_Event_provisionalDamage, float K2Node_Event_damage, const struct FSlateColor& K2Node_Event_color, int32 K2Node_Event_fontSize, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAbilityAsync_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAddToActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, class ALOTF2PlayerState* K2Node_DynamicCast_AsLOTF2Player_State, bool K2Node_DynamicCast_bSuccess_2, enum class EHexMultiplayerRole CallFunc_GetMultiplayerRole_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_1, class AHUD* CallFunc_GetHUD_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue_2, class AHUD* CallFunc_GetHUD_ReturnValue_2, double CallFunc_UpdateProvisionalDamageBar_CurrentHealthPercent_ImplicitCast, double CallFunc_UpdateProvisionalDamageBar_CurrentProvisionalDamagePercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyStatusUIWidget_BP_C", "ExecuteUbergraph_EnemyStatusUIWidget_BP");

	Params::UEnemyStatusUIWidget_BP_C_ExecuteUbergraph_EnemyStatusUIWidget_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_instigatorActor = K2Node_Event_instigatorActor;
	Parms.K2Node_Event_instigatorTags = K2Node_Event_instigatorTags;
	Parms.K2Node_Event_bDeathWasObserved = K2Node_Event_bDeathWasObserved;
	Parms.K2Node_Event_currentHealth = K2Node_Event_currentHealth;
	Parms.K2Node_Event_provisionalDamage = K2Node_Event_provisionalDamage;
	Parms.K2Node_Event_damage = K2Node_Event_damage;
	Parms.K2Node_Event_color = K2Node_Event_color;
	Parms.K2Node_Event_fontSize = K2Node_Event_fontSize;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue = CallFunc_WaitGameplayTagAddToActor_ReturnValue;
	Parms.CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue = CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_WaitGameplayTagAddToActor_ReturnValue_1 = CallFunc_WaitGameplayTagAddToActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1 = CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsLOTF2Player_State = K2Node_DynamicCast_AsLOTF2Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetMultiplayerRole_ReturnValue = CallFunc_GetMultiplayerRole_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerController_ReturnValue_1;
	Parms.CallFunc_GetHUD_ReturnValue_1 = CallFunc_GetHUD_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue_2 = CallFunc_GetLocalPlayerController_ReturnValue_2;
	Parms.CallFunc_GetHUD_ReturnValue_2 = CallFunc_GetHUD_ReturnValue_2;
	Parms.CallFunc_UpdateProvisionalDamageBar_CurrentHealthPercent_ImplicitCast = CallFunc_UpdateProvisionalDamageBar_CurrentHealthPercent_ImplicitCast;
	Parms.CallFunc_UpdateProvisionalDamageBar_CurrentProvisionalDamagePercent_ImplicitCast = CallFunc_UpdateProvisionalDamageBar_CurrentProvisionalDamagePercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


