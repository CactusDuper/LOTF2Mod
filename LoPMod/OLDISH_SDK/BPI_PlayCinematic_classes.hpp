#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3B8 - 0x390)
// BlueprintGeneratedClass BPI_PlayCinematic.BPI_PlayCinematic_C
class ABPI_PlayCinematic_C : public ACinematicPlayer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   LevelSequenceActor_OLD;                            // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FGameplayTag                          End_Cinematic_GameState_Tag;                       // 0x3A8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class ACinematicPlayer*                      NextCinematics;                                    // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPI_PlayCinematic_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnCinematicEnd_Event();
	void ReceiveBeginPlay();
	void BPI_Trap_Activate(class AActor* ActivatingEntity);
	void OnCinematicStartPlaying_Event();
	void ExecuteUbergraph_BPI_PlayCinematic(int32 EntryPoint, bool CallFunc_IsGameplayTagValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsGameplayTagValid_ReturnValue_1, class AActor* K2Node_Event_ActivatingEntity, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


