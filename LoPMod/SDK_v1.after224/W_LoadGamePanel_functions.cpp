#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_LoadGamePanel.W_LoadGamePanel_C
// (None)

class UClass* UW_LoadGamePanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_LoadGamePanel_C");

	return Clss;
}


// W_LoadGamePanel_C W_LoadGamePanel.Default__W_LoadGamePanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_LoadGamePanel_C* UW_LoadGamePanel_C::GetDefaultObj()
{
	static class UW_LoadGamePanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_LoadGamePanel_C*>(UW_LoadGamePanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_LoadGamePanel.W_LoadGamePanel_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_LoadGamePanel_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "GetDesiredFocusTarget");

	Params::UW_LoadGamePanel_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.Custom Load Slot 0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_LoadGameFromSlot_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::Custom_Load_Slot_0(enum class EUINavigation Navigation, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "Custom Load Slot 0");

	Params::UW_LoadGamePanel_C_Custom_Load_Slot_0_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_LoadGameFromSlot_ReturnValue = CallFunc_LoadGameFromSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.OnShown_6D36FE6C4D9C0FAE3F4BB1A020E0AE83
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::OnShown_6D36FE6C4D9C0FAE3F4BB1A020E0AE83(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "OnShown_6D36FE6C4D9C0FAE3F4BB1A020E0AE83");

	Params::UW_LoadGamePanel_C_OnShown_6D36FE6C4D9C0FAE3F4BB1A020E0AE83_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.OnResultNamed_6D36FE6C4D9C0FAE3F4BB1A020E0AE83
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::OnResultNamed_6D36FE6C4D9C0FAE3F4BB1A020E0AE83(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "OnResultNamed_6D36FE6C4D9C0FAE3F4BB1A020E0AE83");

	Params::UW_LoadGamePanel_C_OnResultNamed_6D36FE6C4D9C0FAE3F4BB1A020E0AE83_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.OnResult_6D36FE6C4D9C0FAE3F4BB1A020E0AE83
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::OnResult_6D36FE6C4D9C0FAE3F4BB1A020E0AE83(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "OnResult_6D36FE6C4D9C0FAE3F4BB1A020E0AE83");

	Params::UW_LoadGamePanel_C_OnResult_6D36FE6C4D9C0FAE3F4BB1A020E0AE83_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.Finished_84FC2E37437187FF25A4B5BCDA76EB74
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::Finished_84FC2E37437187FF25A4B5BCDA76EB74()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "Finished_84FC2E37437187FF25A4B5BCDA76EB74");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.Finished_AADFC36B4A18DD162B0963A32DC3423E
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::Finished_AADFC36B4A18DD162B0963A32DC3423E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "Finished_AADFC36B4A18DD162B0963A32DC3423E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UW_LoadGamePanel_C_BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BP_DeleteSaveGame
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGameSlotViewListData*   SlotToRemove                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::BP_DeleteSaveGame(class USaveGameSlotViewListData* SlotToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BP_DeleteSaveGame");

	Params::UW_LoadGamePanel_C_BP_DeleteSaveGame_Params Parms{};

	Parms.SlotToRemove = SlotToRemove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BP_NoSaveGames
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSaveGamesAvailable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::BP_NoSaveGames(bool bSaveGamesAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BP_NoSaveGames");

	Params::UW_LoadGamePanel_C_BP_NoSaveGames_Params Parms{};

	Parms.bSaveGamesAvailable = bSaveGamesAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BP_SelectItem
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::BP_SelectItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BP_SelectItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UW_LoadGamePanel_C_BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BP_HandleBackAction
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::BP_HandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BP_HandleBackAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BP_PanelDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::BP_PanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BP_PanelDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BP_SetVisibility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::BP_SetVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BP_SetVisibility");

	Params::UW_LoadGamePanel_C_BP_SetVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BP_StartDissolve
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGameSlotViewListData*   SaveSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::BP_StartDissolve(class USaveGameSlotViewListData* SaveSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BP_StartDissolve");

	Params::UW_LoadGamePanel_C_BP_StartDissolve_Params Parms{};

	Parms.SaveSlot = SaveSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.On Dissolve End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::On_Dissolve_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "On Dissolve End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BP_EndDissolve
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForceDissolve                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::BP_EndDissolve(bool bForceDissolve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BP_EndDissolve");

	Params::UW_LoadGamePanel_C_BP_EndDissolve_Params Parms{};

	Parms.bForceDissolve = bForceDissolve;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.On Dissolve Reverse End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::On_Dissolve_Reverse_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "On Dissolve Reverse End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.BP_StartDissolveAndGoBack
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::BP_StartDissolveAndGoBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "BP_StartDissolveAndGoBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.On Dissolve End 2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::On_Dissolve_End_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "On Dissolve End 2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.UpdateInvetoryStatsVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_LoadGamePanel_C::UpdateInvetoryStatsVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "UpdateInvetoryStatsVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_LoadGamePanel.W_LoadGamePanel_C.ExecuteUbergraph_W_LoadGamePanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGameSlotViewListData*   K2Node_Event_SlotToRemove                                        (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_Event_bSaveGamesAvailable                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancel_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_SaveGame_Entry_C*         K2Node_DynamicCast_AsW_Save_Game_Entry                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_SaveGame_Entry_C*         K2Node_DynamicCast_AsW_Save_Game_Entry_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_SaveGame_Entry_C*         K2Node_DynamicCast_AsW_Save_Game_Entry_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGameSlotViewListData*   K2Node_Event_saveSlot                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDissolveFXComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bForceDissolve                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDissolveFXComponent_C*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_3                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDissolveFXComponent_C*      CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_LoadGamePanel_C::ExecuteUbergraph_W_LoadGamePanel(int32 EntryPoint, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class USaveGameSlotViewListData* K2Node_Event_SlotToRemove, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_Event_bSaveGamesAvailable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_bVisible, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, class UW_SaveGame_Entry_C* K2Node_DynamicCast_AsW_Save_Game_Entry, bool K2Node_DynamicCast_bSuccess_1, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, class UW_SaveGame_Entry_C* K2Node_DynamicCast_AsW_Save_Game_Entry_1, bool K2Node_DynamicCast_bSuccess_2, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, class UW_SaveGame_Entry_C* K2Node_DynamicCast_AsW_Save_Game_Entry_2, bool K2Node_DynamicCast_bSuccess_3, class USaveGameSlotViewListData* K2Node_Event_saveSlot, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_4, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool K2Node_Event_bForceDissolve, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_2, bool K2Node_DynamicCast_bSuccess_5, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_3, bool K2Node_DynamicCast_bSuccess_6, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_LoadGamePanel_C", "ExecuteUbergraph_W_LoadGamePanel");

	Params::UW_LoadGamePanel_C_ExecuteUbergraph_W_LoadGamePanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.K2Node_CustomEvent_Dialog_2 = K2Node_CustomEvent_Dialog_2;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ActionId = K2Node_CustomEvent_ActionId;
	Parms.K2Node_CustomEvent_Dialog_1 = K2Node_CustomEvent_Dialog_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_Dialog = K2Node_CustomEvent_Dialog;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_bIsHovered = K2Node_ComponentBoundEvent_bIsHovered;
	Parms.K2Node_Event_SlotToRemove = K2Node_Event_SlotToRemove;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Event_bSaveGamesAvailable = K2Node_Event_bSaveGamesAvailable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_ShowConfirmationOkCancel_ReturnValue = CallFunc_ShowConfirmationOkCancel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue = CallFunc_GetWidgetFromItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Save_Game_Entry = K2Node_DynamicCast_AsW_Save_Game_Entry;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_1 = CallFunc_GetWidgetFromItem_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Save_Game_Entry_1 = K2Node_DynamicCast_AsW_Save_Game_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_2 = CallFunc_GetWidgetFromItem_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsW_Save_Game_Entry_2 = K2Node_DynamicCast_AsW_Save_Game_Entry_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_saveSlot = K2Node_Event_saveSlot;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2Character_1 = K2Node_DynamicCast_AsLOTF2Character_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_1 = CallFunc_PostEventAtLocation_ReturnValue_1;
	Parms.K2Node_Event_bForceDissolve = K2Node_Event_bForceDissolve;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsLOTF2Character_2 = K2Node_DynamicCast_AsLOTF2Character_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_3 = CallFunc_GetPlayerPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsLOTF2Character_3 = K2Node_DynamicCast_AsLOTF2Character_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


