#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x509 - 0x4F0)
// WidgetBlueprintGeneratedClass HUDWidget_SkipCinematic.HUDWidget_SkipCinematic_C
class UHUDWidget_SkipCinematic_C : public USkipCinematicWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowButton;                                        // 0x4F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_141;                                      // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Button_Visible;                                    // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHUDWidget_SkipCinematic_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__HUDWidget_SkipCinematic_Button_Hold_K2Node_ComponentBoundEvent_0_OnHoldActionComplete__DelegateSignature();
	void ExecuteUbergraph_HUDWidget_SkipCinematic(int32 EntryPoint, class UHexSubtitleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class ALOTF2HUD* K2Node_DynamicCast_AsLOTF2HUD, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AHUD* CallFunc_GetHUD_ReturnValue_1, class ALOTF2HUD* K2Node_DynamicCast_AsLOTF2HUD_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


