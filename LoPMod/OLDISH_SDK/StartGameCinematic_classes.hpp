#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2E0 - 0x2A8)
// BlueprintGeneratedClass StartGameCinematic.StartGameCinematic_C
class AStartGameCinematic_C : public ALOTF2BlueprintSerializableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABPI_PlayCinematic_C*                  Cinematic;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         AlreadyPlayed;                                     // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4336[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OriginalLoadingSreenHoldTime;                      // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FirstTimeUserExperienceLoadingScreenHoldTime;      // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4337[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LoadingScreenHoldTimeVar;                          // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AStartGameCinematic_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnShowLoadingScreenAdditionalSecsTriggered_Event(bool bIsActive);
	void ExecuteUbergraph_StartGameCinematic(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_CustomEvent_bIsActive, class ULOTF2SaveGameManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_SaveGameAsync_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_GetConsoleVariableFloatValue_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class ULoadingScreenManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2);
};

}


