#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDWidget_BP.HUDWidget_BP_C
// (None)

class UClass* UHUDWidget_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDWidget_BP_C");

	return Clss;
}


// HUDWidget_BP_C HUDWidget_BP.Default__HUDWidget_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDWidget_BP_C* UHUDWidget_BP_C::GetDefaultObj()
{
	static class UHUDWidget_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDWidget_BP_C*>(UHUDWidget_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDWidget_BP.HUDWidget_BP_C.ToggleHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDWidget_BP_C::ToggleHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "ToggleHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDWidget_BP.HUDWidget_BP_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2HUD*                   LOTF2HUD                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_BP_C::Initialize(class APlayerController* PlayerController, class ALOTF2HUD* LOTF2HUD)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "Initialize");

	Params::UHUDWidget_BP_C_Initialize_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.LOTF2HUD = LOTF2HUD;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDWidget_BP.HUDWidget_BP_C.UpdateRemotePlayerStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*            Player_Character                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_BP_C::UpdateRemotePlayerStatus(class APlayerCharacter* Player_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "UpdateRemotePlayerStatus");

	Params::UHUDWidget_BP_C_UpdateRemotePlayerStatus_Params Parms{};

	Parms.Player_Character = Player_Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDWidget_BP.HUDWidget_BP_C.HideRemotePlayerStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDWidget_BP_C::HideRemotePlayerStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "HideRemotePlayerStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDWidget_BP.HUDWidget_BP_C.ShowRemotePlayerStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter*            Player_Character                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_BP_C::ShowRemotePlayerStatus(class APlayerCharacter* Player_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "ShowRemotePlayerStatus");

	Params::UHUDWidget_BP_C_ShowRemotePlayerStatus_Params Parms{};

	Parms.Player_Character = Player_Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDWidget_BP.HUDWidget_BP_C.OnRemotePlayerDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_BP_C::OnRemotePlayerDeath(float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "OnRemotePlayerDeath");

	Params::UHUDWidget_BP_C_OnRemotePlayerDeath_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDWidget_BP.HUDWidget_BP_C.OnFailedToUnlockDoor_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UItemData*                   LockFailItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_BP_C::OnFailedToUnlockDoor_BP(class UItemData* LockFailItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "OnFailedToUnlockDoor_BP");

	Params::UHUDWidget_BP_C_OnFailedToUnlockDoor_BP_Params Parms{};

	Parms.LockFailItem = LockFailItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDWidget_BP.HUDWidget_BP_C.OnOpenDoorIncorrectSide_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHUDWidget_BP_C::OnOpenDoorIncorrectSide_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "OnOpenDoorIncorrectSide_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDWidget_BP.HUDWidget_BP_C.OnForgeAnchorFailedToForge_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EForgeAnchorFailReason  FailReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_BP_C::OnForgeAnchorFailedToForge_BP(enum class EForgeAnchorFailReason FailReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "OnForgeAnchorFailedToForge_BP");

	Params::UHUDWidget_BP_C_OnForgeAnchorFailedToForge_BP_Params Parms{};

	Parms.FailReason = FailReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDWidget_BP.HUDWidget_BP_C.OnWitherSideEffect_BP
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UGameplayEffectUIData*>UiDatas                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUDWidget_BP_C::OnWitherSideEffect_BP(TArray<class UGameplayEffectUIData*>& UiDatas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "OnWitherSideEffect_BP");

	Params::UHUDWidget_BP_C_OnWitherSideEffect_BP_Params Parms{};

	Parms.UiDatas = UiDatas;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDWidget_BP.HUDWidget_BP_C.OnWitherStageChange_BP
// (BlueprintEvent)
// Parameters:
// int32                              StageIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_BP_C::OnWitherStageChange_BP(int32 StageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "OnWitherStageChange_BP");

	Params::UHUDWidget_BP_C_OnWitherStageChange_BP_Params Parms{};

	Parms.StageIndex = StageIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDWidget_BP.HUDWidget_BP_C.OnWitherStart_BP
// (BlueprintEvent)
// Parameters:

void UHUDWidget_BP_C::OnWitherStart_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "OnWitherStart_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDWidget_BP.HUDWidget_BP_C.HideHUD
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHUDWidget_BP_C::HideHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "HideHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDWidget_BP.HUDWidget_BP_C.ShowHUD
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHUDWidget_BP_C::ShowHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "ShowHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDWidget_BP.HUDWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDWidget_BP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDWidget_BP.HUDWidget_BP_C.On Wither Level Progress Change Handler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewWither                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_BP_C::On_Wither_Level_Progress_Change_Handler(float NewWither)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "On Wither Level Progress Change Handler");

	Params::UHUDWidget_BP_C_On_Wither_Level_Progress_Change_Handler_Params Parms{};

	Parms.NewWither = NewWither;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDWidget_BP.HUDWidget_BP_C.ExecuteUbergraph_HUDWidget_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWitherSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLevelProgress_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumLevels_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOnFailedToUnlockDoorText_ReturnValue                 (ConstParm)
// float                              K2Node_CustomEvent_DamageAmount                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UItemData*                   K2Node_Event_lockFailItem                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetForgeAnchorInsufficientResourcesToForgeText_ReturnValue(ConstParm)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (ConstParm)
// class FText                        Temp_text_Variable                                               (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class EForgeAnchorFailReason  K2Node_Event_failReason                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EForgeAnchorFailReason  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// TArray<class UGameplayEffectUIData*>K2Node_Event_uiDatas                                             (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffectUIData*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffectUIData_IconAndText*K2Node_DynamicCast_AsGameplay_Effect_UIData_Icon_and_Text        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffectUIData_TextOnly*K2Node_DynamicCast_AsGameplay_Effect_UIData_Text_Only            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_stageIndex                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOnOpenDoorIncorrectSideText_ReturnValue              (ConstParm)
// float                              K2Node_CustomEvent_newWither                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWitherSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_BP_C::ExecuteUbergraph_HUDWidget_BP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWitherSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, float CallFunc_GetLevelProgress_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetNumLevels_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 Temp_int_Array_Index_Variable, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 Temp_int_Variable, class FText CallFunc_GetOnFailedToUnlockDoorText_ReturnValue, float K2Node_CustomEvent_DamageAmount, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, class UItemData* K2Node_Event_lockFailItem, class FText CallFunc_GetForgeAnchorInsufficientResourcesToForgeText_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, class FText Temp_text_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class EForgeAnchorFailReason K2Node_Event_failReason, enum class EForgeAnchorFailReason Temp_byte_Variable, class FText K2Node_Select_Default, TArray<class UGameplayEffectUIData*>& K2Node_Event_uiDatas, int32 Temp_int_Loop_Counter_Variable, class UGameplayEffectUIData* CallFunc_Array_Get_Item, class UGameplayEffectUIData_IconAndText* K2Node_DynamicCast_AsGameplay_Effect_UIData_Icon_and_Text, bool K2Node_DynamicCast_bSuccess, class UGameplayEffectUIData_TextOnly* K2Node_DynamicCast_AsGameplay_Effect_UIData_Text_Only, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 K2Node_Event_stageIndex, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText CallFunc_GetOnOpenDoorIncorrectSideText_ReturnValue, float K2Node_CustomEvent_newWither, class UWitherSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_BP_C", "ExecuteUbergraph_HUDWidget_BP");

	Params::UHUDWidget_BP_C_ExecuteUbergraph_HUDWidget_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_GetLevelProgress_ReturnValue = CallFunc_GetLevelProgress_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_GetNumLevels_ReturnValue = CallFunc_GetNumLevels_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetOnFailedToUnlockDoorText_ReturnValue = CallFunc_GetOnFailedToUnlockDoorText_ReturnValue;
	Parms.K2Node_CustomEvent_DamageAmount = K2Node_CustomEvent_DamageAmount;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_Event_lockFailItem = K2Node_Event_lockFailItem;
	Parms.CallFunc_GetForgeAnchorInsufficientResourcesToForgeText_ReturnValue = CallFunc_GetForgeAnchorInsufficientResourcesToForgeText_ReturnValue;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Event_failReason = K2Node_Event_failReason;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_uiDatas = K2Node_Event_uiDatas;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsGameplay_Effect_UIData_Icon_and_Text = K2Node_DynamicCast_AsGameplay_Effect_UIData_Icon_and_Text;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGameplay_Effect_UIData_Text_Only = K2Node_DynamicCast_AsGameplay_Effect_UIData_Text_Only;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_stageIndex = K2Node_Event_stageIndex;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetOnOpenDoorIncorrectSideText_ReturnValue = CallFunc_GetOnOpenDoorIncorrectSideText_ReturnValue;
	Parms.K2Node_CustomEvent_newWither = K2Node_CustomEvent_newWither;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


