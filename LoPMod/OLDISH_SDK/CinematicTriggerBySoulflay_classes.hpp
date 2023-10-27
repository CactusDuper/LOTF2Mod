#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x2D4 - 0x2A8)
// BlueprintGeneratedClass CinematicTriggerBySoulflay.CinematicTriggerBySoulflay_C
class ACinematicTriggerBySoulflay_C : public ALOTF2BlueprintSerializableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABPI_PlayCinematic_C*                  Cinematic;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         AlreadyPlayed;                                     // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SoulFlay_Chain_C*                  Chain_to_Soul_Flay;                                // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	float                                        Delay_Before_Cinematic;                            // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACinematicTriggerBySoulflay_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void PlayCinematic();
	void ExecuteUbergraph_CinematicTriggerBySoulflay(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ULOTF2SaveGameManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_SaveGameAsync_ReturnValue);
};

}


