#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x3C0 - 0x370)
// WidgetBlueprintGeneratedClass W_Tattoo_Selector.W_Tattoo_Selector_C
class UW_Tattoo_Selector_C : public UTattooSelectorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            On_Customize_Feature;                              // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Disabled;                                          // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Random;                                            // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_205E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Rand_Text;                                         // 0x390(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Custom_Text;                                       // 0x3A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UW_Tattoo_Selector_C* GetDefaultObj();

	class UWidget* On_Next_Option(enum class EUINavigation Navigation, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	class UWidget* On_Previous_Option(enum class EUINavigation Navigation, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Construct();
	void On_Change_Requested(bool bIsBlocking);
	void On_Change_Complete();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__W_Tattoo_Selector_Button_Customize_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature();
	void ExecuteUbergraph_W_Tattoo_Selector(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool K2Node_CustomEvent_bIsBlocking, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsDesignTime);
	void On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
};

}


