#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x659 - 0x608)
// WidgetBlueprintGeneratedClass W_ReviewCharacter_Panel.W_ReviewCharacter_Panel_C
class UW_ReviewCharacter_Panel_C : public UCharCreationReview
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x608(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_HoldButton_Gothic_C*                Button_PlayGame;                                   // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Container_SaveGames;                               // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_6;                                           // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_7;                                           // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_8;                                           // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CheckBox_C*                         TutorialsCheckbox;                                 // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_BottomBarButton_C*                  W_BottomBarButton;                                 // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CameraWidget_C*                   WBP_CameraWidget;                                  // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Can_Change_Player_Name;                            // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_ReviewCharacter_Panel_C* GetDefaultObj();

	class UWidget* GetDesiredFocusTarget();
	void OnShown_1A20018B44A80CAA6233C0B1725D6A66(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnResultNamed_1A20018B44A80CAA6233C0B1725D6A66(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog);
	void OnResult_1A20018B44A80CAA6233C0B1725D6A66(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void BndEvt__W_ReviewCharacter_Panel_Button_LoadGame_K2Node_ComponentBoundEvent_0_OnHoldActionComplete__DelegateSignature();
	void PlayGame();
	void BP_ChangePlayerName();
	void BP_PanelActivated();
	void BP_UpdateEquipmentStatus();
	void BndEvt__W_ReviewCharacter_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_2_OnButtonActionComplete__DelegateSignature();
	void BP_PanelDeactivated();
	void BndEvt__W_ReviewCharacter_Panel_W_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool Checked);
	void ExecuteUbergraph_W_ReviewCharacter_Panel(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UW_EnterNameWidget_C* K2Node_DynamicCast_AsW_Enter_Name_Widget, bool K2Node_DynamicCast_bSuccess, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALOTF2StartupGameMode* K2Node_DynamicCast_AsLOTF2Startup_Game_Mode, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetLevelToLoad_ReturnValue, class APlayerState* CallFunc_GetPlayerState_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_ComponentBoundEvent_Checked, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UHexGameUserSettings* K2Node_DynamicCast_AsHex_Game_User_Settings, bool K2Node_DynamicCast_bSuccess_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UHexGameUserSettings* K2Node_DynamicCast_AsHex_Game_User_Settings_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, bool CallFunc_IsShowTutorialsEnabled_ReturnValue);
};

}


