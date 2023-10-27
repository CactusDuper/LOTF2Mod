#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_OverwriteGamePanel.W_OverwriteGamePanel_C
// (None)

class UClass* UW_OverwriteGamePanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_OverwriteGamePanel_C");

	return Clss;
}


// W_OverwriteGamePanel_C W_OverwriteGamePanel.Default__W_OverwriteGamePanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_OverwriteGamePanel_C* UW_OverwriteGamePanel_C::GetDefaultObj()
{
	static class UW_OverwriteGamePanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_OverwriteGamePanel_C*>(UW_OverwriteGamePanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_OverwriteGamePanel_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "GetDesiredFocusTarget");

	Params::UW_OverwriteGamePanel_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.OnShown_028216A847EE43B7CF8B88B53B5A1136
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_OverwriteGamePanel_C::OnShown_028216A847EE43B7CF8B88B53B5A1136(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "OnShown_028216A847EE43B7CF8B88B53B5A1136");

	Params::UW_OverwriteGamePanel_C_OnShown_028216A847EE43B7CF8B88B53B5A1136_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.OnResultNamed_028216A847EE43B7CF8B88B53B5A1136
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_OverwriteGamePanel_C::OnResultNamed_028216A847EE43B7CF8B88B53B5A1136(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "OnResultNamed_028216A847EE43B7CF8B88B53B5A1136");

	Params::UW_OverwriteGamePanel_C_OnResultNamed_028216A847EE43B7CF8B88B53B5A1136_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.OnResult_028216A847EE43B7CF8B88B53B5A1136
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_OverwriteGamePanel_C::OnResult_028216A847EE43B7CF8B88B53B5A1136(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "OnResult_028216A847EE43B7CF8B88B53B5A1136");

	Params::UW_OverwriteGamePanel_C_OnResult_028216A847EE43B7CF8B88B53B5A1136_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.OnShown_CEF9F3414658AEE19FF33F8710C7ACDC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_OverwriteGamePanel_C::OnShown_CEF9F3414658AEE19FF33F8710C7ACDC(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "OnShown_CEF9F3414658AEE19FF33F8710C7ACDC");

	Params::UW_OverwriteGamePanel_C_OnShown_CEF9F3414658AEE19FF33F8710C7ACDC_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.OnResultNamed_CEF9F3414658AEE19FF33F8710C7ACDC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_OverwriteGamePanel_C::OnResultNamed_CEF9F3414658AEE19FF33F8710C7ACDC(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "OnResultNamed_CEF9F3414658AEE19FF33F8710C7ACDC");

	Params::UW_OverwriteGamePanel_C_OnResultNamed_CEF9F3414658AEE19FF33F8710C7ACDC_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.OnResult_CEF9F3414658AEE19FF33F8710C7ACDC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_OverwriteGamePanel_C::OnResult_CEF9F3414658AEE19FF33F8710C7ACDC(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "OnResult_CEF9F3414658AEE19FF33F8710C7ACDC");

	Params::UW_OverwriteGamePanel_C_OnResult_CEF9F3414658AEE19FF33F8710C7ACDC_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OverwriteGamePanel_C::BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UW_OverwriteGamePanel_C_BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.BP_DeleteSaveGame
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGameSlotViewListData*   SlotToRemove                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_OverwriteGamePanel_C::BP_DeleteSaveGame(class USaveGameSlotViewListData* SlotToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "BP_DeleteSaveGame");

	Params::UW_OverwriteGamePanel_C_BP_DeleteSaveGame_Params Parms{};

	Parms.SlotToRemove = SlotToRemove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.BP_NoSaveGames
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OverwriteGamePanel_C::BP_NoSaveGames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "BP_NoSaveGames");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.BP_SelectItem
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OverwriteGamePanel_C::BP_SelectItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "BP_SelectItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OverwriteGamePanel_C::BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UW_OverwriteGamePanel_C_BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OverwriteGamePanel_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.BP_PanelDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_OverwriteGamePanel_C::BP_PanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "BP_PanelDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_OverwriteGamePanel.W_OverwriteGamePanel_C.ExecuteUbergraph_W_OverwriteGamePanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_5                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_4                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_3                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOk_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGameSlotViewListData*   K2Node_Event_SlotToRemove                                        (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_SaveGame_Entry_C*         K2Node_DynamicCast_AsW_Save_Game_Entry                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancel_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_SaveGame_Entry_C*         K2Node_DynamicCast_AsW_Save_Game_Entry_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SaveGame_Entry_C*         K2Node_DynamicCast_AsW_Save_Game_Entry_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2StartupGameMode_BP_C*  K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACustomizationLevelScript*   CallFunc_GetCustomizationLevel_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_OverwriteGamePanel_C::ExecuteUbergraph_W_OverwriteGamePanel(int32 EntryPoint, enum class EMessagingResult K2Node_CustomEvent_Result_5, class UHexGameDialog* K2Node_CustomEvent_Dialog_5, enum class EMessagingResult K2Node_CustomEvent_Result_4, class FName K2Node_CustomEvent_ActionId_1, class UHexGameDialog* K2Node_CustomEvent_Dialog_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMessagingResult K2Node_CustomEvent_Result_3, class UHexGameDialog* K2Node_CustomEvent_Dialog_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UHexGameDialog* Temp_object_Variable_1, enum class EMessagingResult Temp_byte_Variable_1, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOk_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class USaveGameSlotViewListData* K2Node_Event_SlotToRemove, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, class UW_SaveGame_Entry_C* K2Node_DynamicCast_AsW_Save_Game_Entry, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, class UW_SaveGame_Entry_C* K2Node_DynamicCast_AsW_Save_Game_Entry_1, bool K2Node_DynamicCast_bSuccess_1, class UW_SaveGame_Entry_C* K2Node_DynamicCast_AsW_Save_Game_Entry_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALOTF2StartupGameMode_BP_C* K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable, class ACustomizationLevelScript* CallFunc_GetCustomizationLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_OverwriteGamePanel_C", "ExecuteUbergraph_W_OverwriteGamePanel");

	Params::UW_OverwriteGamePanel_C_ExecuteUbergraph_W_OverwriteGamePanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result_5 = K2Node_CustomEvent_Result_5;
	Parms.K2Node_CustomEvent_Dialog_5 = K2Node_CustomEvent_Dialog_5;
	Parms.K2Node_CustomEvent_Result_4 = K2Node_CustomEvent_Result_4;
	Parms.K2Node_CustomEvent_ActionId_1 = K2Node_CustomEvent_ActionId_1;
	Parms.K2Node_CustomEvent_Dialog_4 = K2Node_CustomEvent_Dialog_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result_3 = K2Node_CustomEvent_Result_3;
	Parms.K2Node_CustomEvent_Dialog_3 = K2Node_CustomEvent_Dialog_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.K2Node_CustomEvent_Dialog_2 = K2Node_CustomEvent_Dialog_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ActionId = K2Node_CustomEvent_ActionId;
	Parms.K2Node_CustomEvent_Dialog_1 = K2Node_CustomEvent_Dialog_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_Dialog = K2Node_CustomEvent_Dialog;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_ShowConfirmationOk_ReturnValue = CallFunc_ShowConfirmationOk_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_bIsHovered = K2Node_ComponentBoundEvent_bIsHovered;
	Parms.K2Node_Event_SlotToRemove = K2Node_Event_SlotToRemove;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue = CallFunc_GetWidgetFromItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Save_Game_Entry = K2Node_DynamicCast_AsW_Save_Game_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ShowConfirmationOkCancel_ReturnValue = CallFunc_ShowConfirmationOkCancel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_1 = CallFunc_GetWidgetFromItem_ReturnValue_1;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_2 = CallFunc_GetWidgetFromItem_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsW_Save_Game_Entry_1 = K2Node_DynamicCast_AsW_Save_Game_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsW_Save_Game_Entry_2 = K2Node_DynamicCast_AsW_Save_Game_Entry_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP = K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetCustomizationLevel_ReturnValue = CallFunc_GetCustomizationLevel_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


