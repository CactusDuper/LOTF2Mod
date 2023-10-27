#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x300 - 0x2D8)
// WidgetBlueprintGeneratedClass W_QuestItemUsedNotification.W_QuestItemUsedNotification_C
class UW_QuestItemUsedNotification_C : public UItemCollectNotification
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnDeactivation;                                    // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnActivation;                                      // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Umbral;                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_QuestItemUsedNotification_C* GetDefaultObj();

	void Update_Realm(enum class EGameRealm Selection, bool K2Node_SwitchEnum_CmpSuccess);
	void Finished_EAF02EB046FD0D159D11FFAA56FA2F22();
	void Finished_CD371D7D4AFCE0C24F410AB9ACB91E7B();
	void BP_OnActivated();
	void BP_SetDuration(float Duration);
	void BP_OnDeactivated();
	void OnEndTranscendRealm_Event_0(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm, enum class EActivateRealmReason Reason);
	void ExecuteUbergraph_W_QuestItemUsedNotification(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_duration, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, enum class EActivateRealmReason K2Node_CustomEvent_reason);
};

}


