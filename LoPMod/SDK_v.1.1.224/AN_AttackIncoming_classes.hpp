#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AN_AttackIncoming.AN_AttackIncoming_C
class UAN_AttackIncoming_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAN_AttackIncoming_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, const TArray<class ABaseAICharacter*>& TargetAICharacters, const TArray<class ABaseAICharacter*>& FilteredAICharacters, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABaseAICharacter* K2Node_DynamicCast_AsBase_AICharacter, bool K2Node_DynamicCast_bSuccess, class UAnathemaGameSystems* CallFunc_GetWorldSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class USpawnDirector* CallFunc_GetSpawnDirector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABaseAICharacter* CallFunc_Array_Get_Item, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAIFactionComponent* CallFunc_GetAIFactionComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsHostile_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ABaseAICharacter*>& CallFunc_GetRegisteredAICharactersFilteredByDistance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


