#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x438 - 0x400)
// BlueprintGeneratedClass LOTF2GameMode_BP.LOTF2GameMode_BP_C
class ALOTF2GameMode_BP_C : public ALOTF2GameMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OpenMainMenu;                                      // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bShowLoadingScreen;                                // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNewPlayerJoin;                                   // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ALOTF2GameMode_BP_C* GetDefaultObj();

	void SetProxiesVisibility(class FName& LevelName, bool Visibility);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void K2_PostLogin(class APlayerController* NewPlayer);
	void ExecuteUbergraph_LOTF2GameMode_BP(int32 EntryPoint, class APlayerController* K2Node_Event_NewPlayer, class UAICombatManagerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_GetLOTF2GameInstance_IsValid, class ULOTF2GameInstance* CallFunc_GetLOTF2GameInstance_GameInstance);
	void OnNewPlayerJoin__DelegateSignature(class APlayerController* NewPlayerController);
	void OpenMainMenu__DelegateSignature();
};

}


