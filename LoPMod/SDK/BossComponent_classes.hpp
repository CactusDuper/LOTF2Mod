#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA (0xBA - 0xB0)
// BlueprintGeneratedClass BossComponent.BossComponent_C
class UBossComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         CombatStarted;                                     // 0xB8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowUIHealth;                                     // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBossComponent_C* GetDefaultObj();

	void CreateUIHealth(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AAnathemaPlayerCharacterController_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP, bool K2Node_DynamicCast_bSuccess, class UCharacterUIData* CallFunc_GetUIData_ReturnValue, class UHexLocalPlayer* CallFunc_GetHexLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UExtensionPointEntryWidget* CallFunc_PushHUDNotification_ForPlayer_ReturnValue, class UW_BossStats_C* K2Node_DynamicCast_AsW_Boss_Stats, bool K2Node_DynamicCast_bSuccess_1, class ABaseAICharacter* K2Node_DynamicCast_AsBase_AICharacter, bool K2Node_DynamicCast_bSuccess_2);
	void OnRep_CombatStarted();
	void Removed_EA1DDCE345C37A31AFBB54BEC4C70719(const struct FGameplayTag& TagWaitingFor);
	void Added_D31EEDB743FF9D243026749FF59477F0(const struct FGameplayTag& TagWaitingFor);
	void Added_E686B92C4A131B2DE98E16A837D1803F(const struct FGameplayTag& TagWaitingFor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BossComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor, const struct FGameplayTag& Temp_struct_Variable_2, class UAnathemaSoundManager* CallFunc_GetWorldSubsystem_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor_2, class AActor* CallFunc_GetOwner_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCharacterSoundData* CallFunc_GetSoundData_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAkAnathemaEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UAkStateValue* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1, class UAkStateValue* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys_2, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, class UGameplayTask_HexWaitGameplayTagsRemoved* CallFunc_WaitGameplayTagsRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UGameplayTask_HexWaitGameplayTagsAdded* CallFunc_WaitGameplayTagsAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_3, class UGameplayTask_HexWaitGameplayTagsAdded* CallFunc_WaitGameplayTagsAdd_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5);
};

}


