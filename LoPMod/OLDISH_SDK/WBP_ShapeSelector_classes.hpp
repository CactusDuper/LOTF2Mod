#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x3D8 - 0x378)
// WidgetBlueprintGeneratedClass WBP_ShapeSelector.WBP_ShapeSelector_C
class UWBP_ShapeSelector_C : public UShapeSelectorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Lock;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_FeatureLock;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            On_Customize_Feature;                              // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Disabled;                                          // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Random;                                            // 0x3A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EB1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Rand_Text;                                         // 0x3A8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Custom_Text;                                       // 0x3C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_ShapeSelector_C* GetDefaultObj();

	class UWidget* On_Next_Option(enum class EUINavigation Navigation, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	class UWidget* On_Previous_Option(enum class EUINavigation Navigation, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void BndEvt__WBP_ShapeSelector_Button_Customize_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature();
	void Construct();
	void On_Change_Requested(bool bIsBlocking);
	void On_Change_Complete();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void BP_LockFeature(bool Block);
	void BndEvt__WBP_ShapeSelector_Button_Lock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_ShapeSelector(int32 EntryPoint, bool CallFunc_IsLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool K2Node_CustomEvent_bIsBlocking, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bLock);
	void On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category);
};

}


