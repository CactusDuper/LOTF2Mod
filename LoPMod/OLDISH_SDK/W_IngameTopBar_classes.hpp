#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x688 - 0x5E8)
// WidgetBlueprintGeneratedClass W_IngameTopBar.W_IngameTopBar_C
class UW_IngameTopBar_C : public UInGameTopBarPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UW_TopBarButton_C*                     Button_Equipment;                                  // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TopBarButton_C*                     Button_Inventory;                                  // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TopBarButton_C*                     Button_LeaveSession;                               // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TopBarButton_C*                     Button_QuitGame;                                   // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TopBarButton_C*                     Button_Settings;                                   // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TopBarButton_C*                     Button_Settings_1;                                 // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_TopBarButton_C*                     Button_Settings_2;                                 // 0x620(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x628(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Left;                             // 0x630(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Right;                            // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Gradient;                                    // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputActionImage*                     Input_NavigateNext;                                // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputActionImage*                     Input_NavigatePrev;                                // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Title;                                        // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Title_Box;                                         // 0x660(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Show_Buttons;                                      // 0x668(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Show_Navigation;                                   // 0x669(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Show_Title;                                        // 0x66A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3FD9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Title;                                             // 0x670(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_IngameTopBar_C* GetDefaultObj();

	void Setup_Spectator(bool Is_Spectator, bool CallFunc_Not_PreBool_ReturnValue);
	void Set_Visibility_Options(bool Buttons_Visible, bool Navigation_Visible, bool Title_Visible, class FText Title_Text, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue_1);
	void Reset_Extension_Points(class UHexLocalPlayer* LocalPlayer, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2);
	void Update_Icon(class UInputActionImage* Input_Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue);
	void SetOnlineText(class FText& OnlineText);
	void PreConstruct(bool IsDesignTime);
	void On_Input_Method_Changed(enum class ECommonInputType bNewInputType);
	void SetVisibilityOptions(bool bButtonsVisible, bool bNavigationVisible, bool bTitleVisible, class FText& Title);
	void SetPanelTitle(class FText& Title);
	void ExecuteUbergraph_W_IngameTopBar(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_Event_onlineText, bool K2Node_Event_IsDesignTime, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_Event_bButtonsVisible, bool K2Node_Event_bNavigationVisible, bool K2Node_Event_bTitleVisible, class FText K2Node_Event_title_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsSpectator_ReturnValue, class FText K2Node_Event_title);
};

}


