#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x600 - 0x448)
// BlueprintGeneratedClass GA_WitherReaction_BP.GA_WitherReaction_BP_C
class UGA_WitherReaction_BP_C : public UGA_WitherReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAkAnathemaEvent                      AudioEvent_ChangeToCalm;                           // 0x450(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAkAnathemaEvent                      AudioEvent_SpawnEnemy;                             // 0x4A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PrevWitherLevel;                                   // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_405A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        SpawnEnemyAudioCue;                                // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentWitherLevel;                                // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_405B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkAnathemaEvent                      AudioEvent_UmbralWither_Level_1;                   // 0x508(0x50)(Edit, BlueprintVisible)
	struct FAkAnathemaEvent                      AudioEvent_UmbralWither_Level_2;                   // 0x558(0x50)(Edit, BlueprintVisible)
	struct FAkAnathemaEvent                      AudioEvent_UmbralWither_Level_3;                   // 0x5A8(0x50)(Edit, BlueprintVisible)
	double                                       WitherLevelProgressGlobal;                         // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_WitherReaction_BP_C* GetDefaultObj();

	void OnWitherChange(double WitherLevelProgress, int32 WitherLevel, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, int32 CallFunc_GetNumLevels_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_3, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4, bool CallFunc_NotEqual_IntInt_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_4, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetRtpcOnActor_val_ImplicitCast, float CallFunc_SetRtpcOnActor_val_ImplicitCast_1, float CallFunc_SetRtpcOnActor_val_ImplicitCast_2, float CallFunc_SetRtpcOnActor_val_ImplicitCast_3, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void OnWitherEndBP();
	void OnWitherStartBP();
	void OnWitherInhibitedBP();
	void OnWitherChangeBP(float WitherProgress, int32 WitherLevel);
	void OnWitherUninhibitedBP(float WitherProgress, int32 WitherLevel);
	void OnPreCharacterSpawnBP();
	void ExecuteUbergraph_GA_WitherReaction_BP(int32 EntryPoint, float K2Node_Event_witherProgress_1, int32 K2Node_Event_witherLevel_1, float K2Node_Event_witherProgress, int32 K2Node_Event_witherLevel, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_OnWitherChange_WitherLevelProgress_ImplicitCast, double CallFunc_OnWitherChange_WitherLevelProgress_ImplicitCast_1);
};

}


