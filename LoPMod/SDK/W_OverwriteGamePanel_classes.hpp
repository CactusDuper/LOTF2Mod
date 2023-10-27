#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x5D9 - 0x560)
// WidgetBlueprintGeneratedClass W_OverwriteGamePanel.W_OverwriteGamePanel_C
class UW_OverwriteGamePanel_C : public UOverwriteGameWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x560(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      StartCharCreation;                                 // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x570(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InitLoadingScreen;                                 // 0x578(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background_Left;                                   // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background_Right;                                  // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_96;                                         // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Container_NoCharacters;                            // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Container_SaveGames;                               // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_90;                                          // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_LoadGame;                              // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CameraWidget_C*                   WBP_CameraWidget;                                  // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               As_WBP_Char_Creation_Flow;                         // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Popup_Visible;                                  // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_OverwriteGamePanel_C* GetDefaultObj();

	class UWidget* GetDesiredFocusTarget();
	void OnShown_028216A847EE43B7CF8B88B53B5A1136(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnResultNamed_028216A847EE43B7CF8B88B53B5A1136(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog);
	void OnResult_028216A847EE43B7CF8B88B53B5A1136(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnShown_CEF9F3414658AEE19FF33F8710C7ACDC(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnResultNamed_CEF9F3414658AEE19FF33F8710C7ACDC(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog);
	void OnResult_CEF9F3414658AEE19FF33F8710C7ACDC(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
	void BP_DeleteSaveGame(class USaveGameSlotViewListData* SlotToRemove);
	void BP_NoSaveGames();
	void BP_SelectItem();
	void BndEvt__W_LoadGamePanel_List_SavedGames_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BP_PanelActivated();
	void BP_PanelDeactivated();
	void ExecuteUbergraph_W_OverwriteGamePanel(int32 EntryPoint, enum class EMessagingResult K2Node_CustomEvent_Result_5, class UHexGameDialog* K2Node_CustomEvent_Dialog_5, enum class EMessagingResult K2Node_CustomEvent_Result_4, class FName K2Node_CustomEvent_ActionId_1, class UHexGameDialog* K2Node_CustomEvent_Dialog_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMessagingResult K2Node_CustomEvent_Result_3, class UHexGameDialog* K2Node_CustomEvent_Dialog_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UHexGameDialog* Temp_object_Variable_1, enum class EMessagingResult Temp_byte_Variable_1, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOk_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class USaveGameSlotViewListData* K2Node_Event_SlotToRemove, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, class UW_SaveGame_Entry_C* K2Node_DynamicCast_AsW_Save_Game_Entry, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, class UW_SaveGame_Entry_C* K2Node_DynamicCast_AsW_Save_Game_Entry_1, bool K2Node_DynamicCast_bSuccess_1, class UW_SaveGame_Entry_C* K2Node_DynamicCast_AsW_Save_Game_Entry_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALOTF2StartupGameMode_BP_C* K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Loop_Counter_Variable, class ACustomizationLevelScript* CallFunc_GetCustomizationLevel_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue);
};

}


