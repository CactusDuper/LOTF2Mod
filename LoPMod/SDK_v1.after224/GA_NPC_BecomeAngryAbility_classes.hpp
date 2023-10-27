#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x4A8 - 0x448)
// BlueprintGeneratedClass GA_NPC_BecomeAngryAbility.GA_NPC_BecomeAngryAbility_C
class UGA_NPC_BecomeAngryAbility_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        HitsReceived;                                      // 0x450(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3695[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EHexAIFactions, int32>       PerFactionNumHits;                                 // 0x458(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_NPC_BecomeAngryAbility_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_NPC_BecomeAngryAbility(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, int32 Temp_int_Variable, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_Event_EventData, const struct FCharacterAIConfig& CallFunc_GetAIConfig_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_CastToCharacter_ReturnValue, enum class ETeamAttitude CallFunc_GetTeamAttitudeBetweenActors_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UAIFactionComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class ABaseAICharacter* K2Node_DynamicCast_AsBase_AICharacter, bool K2Node_DynamicCast_bSuccess_1, class ABaseAIController* CallFunc_GetAIController_ReturnValue, enum class EHexAIFactions CallFunc_GetCharacterFaction_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


