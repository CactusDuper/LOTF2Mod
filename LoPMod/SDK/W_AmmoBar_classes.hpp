#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x388 - 0x368)
// WidgetBlueprintGeneratedClass W_AmmoBar.W_AmmoBar_C
class UW_AmmoBar_C : public UAmmoBarWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Feedback_Fail;                                     // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_FailFeedback;                                // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_AmmoBar_C* GetDefaultObj();

	void Finished_AE58A2294EA4BDCCD839EDAC62FD5DF9();
	void UpdateAmmoCost(int32 AmmoCost);
	void UpdateStats(float CurrentAmmoValue, float MaxAmmoValue);
	void BP_PlayFailAbilityFeedback();
	void BP_UpdateAmmo(int32 CurrentAmmo);
	void ExecuteUbergraph_W_AmmoBar(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Event_ammoCost, float K2Node_Event_currentAmmoValue, float K2Node_Event_maxAmmoValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Event_currentAmmo);
};

}


