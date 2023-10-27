#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x391 - 0x368)
// WidgetBlueprintGeneratedClass W_SkinTypeSelector.W_SkinTypeSelector_C
class UW_SkinTypeSelector_C : public USkinTypeSelectorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Lock;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_124;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_FeatureLock;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Disabled;                                          // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_SkinTypeSelector_C* GetDefaultObj();

	class UWidget* On_Next_Option(enum class EUINavigation Navigation, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	class UWidget* On_Previous_Option(enum class EUINavigation Navigation, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Construct();
	void On_Change_Requested(bool bIsBlocking);
	void On_Change_Complete();
	void Destruct();
	void BndEvt__W_BodyTypeSelector_Button_Customize_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BP_LockFeature(bool Block);
	void BndEvt__W_SkinTypeSelector_Button_Lock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_W_SkinTypeSelector(int32 EntryPoint, bool CallFunc_IsLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool K2Node_CustomEvent_bIsBlocking, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bLock);
};

}


