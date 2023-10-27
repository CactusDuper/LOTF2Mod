#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xC0 - 0xB0)
// BlueprintGeneratedClass DestroyOnGlobalStateTagComponent.DestroyOnGlobalStateTagComponent_C
class UDestroyOnGlobalStateTagComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          GlobalStateTag;                                    // 0xB8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDestroyOnGlobalStateTagComponent_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnGeneralTagsRegistered_Event_0(struct FGameplayTagContainer& Tags);
	void ExecuteUbergraph_DestroyOnGlobalStateTagComponent(int32 EntryPoint, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue, const struct FQuestDirectorTags& CallFunc_GetQuestsTags_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, const struct FGameplayTagContainer& K2Node_CustomEvent_tags, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasTag_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_2);
};

}


