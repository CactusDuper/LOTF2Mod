#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x660 - 0x5F0)
// WidgetBlueprintGeneratedClass W_MainMenu_Panel.W_MainMenu_Panel_C
class UW_MainMenu_Panel_C : public UMainMenuWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeToBlack;                                       // 0x5F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x600(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOut;                                           // 0x608(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InitLoadingScreen;                                 // 0x610(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          Branch_Container;                                  // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_65;                                          // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Black;                                       // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_MainOptions;                           // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CameraWidget_C*                   WBP_CameraWidget;                                  // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                LevelToLoad;                                       // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DeluxeEditionClassUnlock;                          // 0x650(0x10)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UW_MainMenu_Panel_C* GetDefaultObj();

	class UWidget* GetDesiredFocusTarget();
	void Finished_38090C5345B412FAECF3B889DC3784F1();
	void OnShown_8098D1934FCFA64582AB53BD744A058A(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnResultNamed_8098D1934FCFA64582AB53BD744A058A(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog);
	void OnResult_8098D1934FCFA64582AB53BD744A058A(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void Finished_D0604FDC432653A208F54A9FA75F702D();
	void OnShown_C5076E0348CA842B160183A25C97F7F2(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnResultNamed_C5076E0348CA842B160183A25C97F7F2(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog);
	void OnResult_C5076E0348CA842B160183A25C97F7F2(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnShown_D76085BC4541DDC369E91DBA2D6F6E8F(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnResultNamed_D76085BC4541DDC369E91DBA2D6F6E8F(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog);
	void OnResult_D76085BC4541DDC369E91DBA2D6F6E8F(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnShown_559714994FE216670B5539AC57AD3F9E(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnResultNamed_559714994FE216670B5539AC57AD3F9E(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog);
	void OnResult_559714994FE216670B5539AC57AD3F9E(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void BndEvt__W_MainMenu_Panel_Button_LoadGame_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature();
	void BndEvt__W_MainMenu_Panel_Button_CreateChar_K2Node_ComponentBoundEvent_1_OnButtonClick__DelegateSignature();
	void BP_PanelActivated();
	void BndEvt__W_MainMenu_Panel_Button_Settings_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature();
	void BndEvt__W_MainMenu_Panel_Button_SceneStates_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature();
	void BP_SetFocusDelayed();
	void On_Enter_Char_Creation();
	void BP_ShowHDDMessage();
	void OnAudioPlayed();
	void OnAudioStopped();
	void PlayFadeIn();
	void BndEvt__MainMenuWidget_Button_Quit_K2Node_ComponentBoundEvent_11_OnButtonClick__DelegateSignature();
	void BP_EndDissolve();
	void On_Dissolve_Reverse_End();
	void Prepare_To_Enter_Class_Selection();
	void OnDissolveEnd_Event();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BP_ShowNewOwnedDLC(enum class EDLCName DLCName, struct FDLCOwnedMessage& DlcInfo);
	void BP_StartDLCShowQueue();
	void ExecuteUbergraph_W_MainMenu_Panel(int32 EntryPoint, enum class EMessagingResult K2Node_CustomEvent_Result_11, class UHexGameDialog* K2Node_CustomEvent_Dialog_11, enum class EMessagingResult K2Node_CustomEvent_Result_10, class FName K2Node_CustomEvent_ActionId_3, class UHexGameDialog* K2Node_CustomEvent_Dialog_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMessagingResult K2Node_CustomEvent_Result_9, class UHexGameDialog* K2Node_CustomEvent_Dialog_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FModifyContextOptions& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EMessagingResult K2Node_CustomEvent_Result_8, class UHexGameDialog* K2Node_CustomEvent_Dialog_8, enum class EMessagingResult K2Node_CustomEvent_Result_7, class FName K2Node_CustomEvent_ActionId_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EMessagingResult K2Node_CustomEvent_Result_6, class UHexGameDialog* K2Node_CustomEvent_Dialog_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UHexGameDialog* Temp_object_Variable_1, enum class EMessagingResult Temp_byte_Variable_1, class UWBP_ConfirmationWidget_C* K2Node_DynamicCast_AsWBP_Confirmation_Widget, bool K2Node_DynamicCast_bSuccess, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOk_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, enum class EMessagingResult K2Node_CustomEvent_Result_5, class UHexGameDialog* K2Node_CustomEvent_Dialog_5, enum class EMessagingResult K2Node_CustomEvent_Result_4, class FName K2Node_CustomEvent_ActionId_1, class UHexGameDialog* K2Node_CustomEvent_Dialog_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, enum class EMessagingResult K2Node_CustomEvent_Result_3, class UHexGameDialog* K2Node_CustomEvent_Dialog_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UHexGameDialog* Temp_object_Variable_2, enum class EMessagingResult Temp_byte_Variable_2, class UW_NewClassUnlocked_C* K2Node_DynamicCast_AsW_New_Class_Unlocked, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UHexGameDialog* Temp_object_Variable_3, enum class EMessagingResult Temp_byte_Variable_3, class UW_DLC_OwnedConfirmation_C* K2Node_DynamicCast_AsW_DLC_Owned_Confirmation, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALOTF2StartupGameMode_BP_C* K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP, bool K2Node_DynamicCast_bSuccess_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ALOTF2StartupGameMode_BP_C* K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP_1, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class ACustomizationLevelScript* CallFunc_GetCustomizationLevel_ReturnValue, class ACinematicPlayer* CallFunc_GetCinematicPlayerCharCreationVideo_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_AddMappingContext_self_CastInput, bool CallFunc_HasAvailableSlots_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_SelectAndFocus_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_5, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_6, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Not_PreBool_ReturnValue, enum class EDLCName K2Node_Event_dlcName, const struct FDLCOwnedMessage& K2Node_Event_dlcInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16);
};

}


