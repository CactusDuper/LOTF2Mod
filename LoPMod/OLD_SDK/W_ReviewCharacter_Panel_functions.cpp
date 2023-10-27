#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C
// (None)

class UClass* UW_ReviewCharacter_Panel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ReviewCharacter_Panel_C");

	return Clss;
}


// W_ReviewCharacter_Panel_C W_ReviewCharacter_Panel.Default__W_ReviewCharacter_Panel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ReviewCharacter_Panel_C* UW_ReviewCharacter_Panel_C::GetDefaultObj()
{
	static class UW_ReviewCharacter_Panel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ReviewCharacter_Panel_C*>(UW_ReviewCharacter_Panel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_ReviewCharacter_Panel_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "GetDesiredFocusTarget");

	Params::UW_ReviewCharacter_Panel_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.OnShown_1A20018B44A80CAA6233C0B1725D6A66
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ReviewCharacter_Panel_C::OnShown_1A20018B44A80CAA6233C0B1725D6A66(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "OnShown_1A20018B44A80CAA6233C0B1725D6A66");

	Params::UW_ReviewCharacter_Panel_C_OnShown_1A20018B44A80CAA6233C0B1725D6A66_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.OnResultNamed_1A20018B44A80CAA6233C0B1725D6A66
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ReviewCharacter_Panel_C::OnResultNamed_1A20018B44A80CAA6233C0B1725D6A66(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "OnResultNamed_1A20018B44A80CAA6233C0B1725D6A66");

	Params::UW_ReviewCharacter_Panel_C_OnResultNamed_1A20018B44A80CAA6233C0B1725D6A66_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.OnResult_1A20018B44A80CAA6233C0B1725D6A66
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ReviewCharacter_Panel_C::OnResult_1A20018B44A80CAA6233C0B1725D6A66(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "OnResult_1A20018B44A80CAA6233C0B1725D6A66");

	Params::UW_ReviewCharacter_Panel_C_OnResult_1A20018B44A80CAA6233C0B1725D6A66_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.BndEvt__W_ReviewCharacter_Panel_Button_LoadGame_K2Node_ComponentBoundEvent_0_OnHoldActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReviewCharacter_Panel_C::BndEvt__W_ReviewCharacter_Panel_Button_LoadGame_K2Node_ComponentBoundEvent_0_OnHoldActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "BndEvt__W_ReviewCharacter_Panel_Button_LoadGame_K2Node_ComponentBoundEvent_0_OnHoldActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.PlayGame
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_ReviewCharacter_Panel_C::PlayGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "PlayGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.BP_ChangePlayerName
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReviewCharacter_Panel_C::BP_ChangePlayerName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "BP_ChangePlayerName");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReviewCharacter_Panel_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.BP_UpdateEquipmentStatus
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReviewCharacter_Panel_C::BP_UpdateEquipmentStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "BP_UpdateEquipmentStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.BndEvt__W_ReviewCharacter_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_2_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ReviewCharacter_Panel_C::BndEvt__W_ReviewCharacter_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_2_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "BndEvt__W_ReviewCharacter_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_2_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.BP_PanelDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ReviewCharacter_Panel_C::BP_PanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "BP_PanelDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.BndEvt__W_ReviewCharacter_Panel_W_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReviewCharacter_Panel_C::BndEvt__W_ReviewCharacter_Panel_W_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "BndEvt__W_ReviewCharacter_Panel_W_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");

	Params::UW_ReviewCharacter_Panel_C_BndEvt__W_ReviewCharacter_Panel_W_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params Parms{};

	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C.ExecuteUbergraph_W_ReviewCharacter_Panel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_EnterNameWidget_C*        K2Node_DynamicCast_AsW_Enter_Name_Widget                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2StartupGameMode*       K2Node_DynamicCast_AsLOTF2Startup_Game_Mode                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLevelToLoad_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerState_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Checked                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameUserSettings*        K2Node_DynamicCast_AsHex_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameUserSettings*        K2Node_DynamicCast_AsHex_Game_User_Settings_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShowTutorialsEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ReviewCharacter_Panel_C::ExecuteUbergraph_W_ReviewCharacter_Panel(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UW_EnterNameWidget_C* K2Node_DynamicCast_AsW_Enter_Name_Widget, bool K2Node_DynamicCast_bSuccess, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALOTF2StartupGameMode* K2Node_DynamicCast_AsLOTF2Startup_Game_Mode, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetLevelToLoad_ReturnValue, class APlayerState* CallFunc_GetPlayerState_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_ComponentBoundEvent_Checked, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UHexGameUserSettings* K2Node_DynamicCast_AsHex_Game_User_Settings, bool K2Node_DynamicCast_bSuccess_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UHexGameUserSettings* K2Node_DynamicCast_AsHex_Game_User_Settings_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, bool CallFunc_IsShowTutorialsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ReviewCharacter_Panel_C", "ExecuteUbergraph_W_ReviewCharacter_Panel");

	Params::UW_ReviewCharacter_Panel_C_ExecuteUbergraph_W_ReviewCharacter_Panel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.K2Node_CustomEvent_Dialog_2 = K2Node_CustomEvent_Dialog_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ActionId = K2Node_CustomEvent_ActionId;
	Parms.K2Node_CustomEvent_Dialog_1 = K2Node_CustomEvent_Dialog_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_Dialog = K2Node_CustomEvent_Dialog;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsW_Enter_Name_Widget = K2Node_DynamicCast_AsW_Enter_Name_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue = CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Startup_Game_Mode = K2Node_DynamicCast_AsLOTF2Startup_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetLevelToLoad_ReturnValue = CallFunc_GetLevelToLoad_ReturnValue;
	Parms.CallFunc_GetPlayerState_ReturnValue = CallFunc_GetPlayerState_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_1 = CallFunc_PostEventAtLocation_ReturnValue_1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_2 = CallFunc_PostEventAtLocation_ReturnValue_2;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_3 = CallFunc_PostEventAtLocation_ReturnValue_3;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_4 = CallFunc_PostEventAtLocation_ReturnValue_4;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_ComponentBoundEvent_Checked = K2Node_ComponentBoundEvent_Checked;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsHex_Game_User_Settings = K2Node_DynamicCast_AsHex_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsHex_Game_User_Settings_1 = K2Node_DynamicCast_AsHex_Game_User_Settings_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_5 = CallFunc_PostEventAtLocation_ReturnValue_5;
	Parms.CallFunc_IsShowTutorialsEnabled_ReturnValue = CallFunc_IsShowTutorialsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


