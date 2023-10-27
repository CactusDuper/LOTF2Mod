#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x710 - 0x708)
// WidgetBlueprintGeneratedClass W_InGameMenuBase.W_InGameMenuBase_C
class UW_InGameMenuBase_C : public UInGameMenuContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x708(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UW_InGameMenuBase_C* GetDefaultObj();

	void Reset_Extension_Points(class UHexLocalPlayer* LocalPlayer, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_4);
	void OnShown_025869F9447244F8970E6DBA75E0893C(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void OnResultNamed_025869F9447244F8970E6DBA75E0893C(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog);
	void OnResult_025869F9447244F8970E6DBA75E0893C(enum class EMessagingResult Result, class UHexGameDialog* Dialog);
	void PreConstruct(bool IsDesignTime);
	void BP_QuitGame();
	void BP_OnActivated();
	void ExecuteUbergraph_W_InGameMenuBase(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAnathemaPlayerCharacterController_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHexLocalPlayer* CallFunc_GetHexLocalPlayer_ReturnValue, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AAnathemaPlayerCharacterController_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP_1, bool K2Node_DynamicCast_bSuccess_1, class UHexLocalPlayer* CallFunc_GetHexLocalPlayer_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue);
};

}


