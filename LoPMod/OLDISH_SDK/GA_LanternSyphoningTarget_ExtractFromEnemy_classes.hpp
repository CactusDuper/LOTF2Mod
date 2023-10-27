#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5C0 - 0x5B8)
// BlueprintGeneratedClass GA_LanternSyphoningTarget_ExtractFromEnemy.GA_LanternSyphoningTarget_ExtractFromEnemy_C
class UGA_LanternSyphoningTarget_ExtractFromEnemy_C : public UGA_LanternSyphoningTarget_ExtractGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_LanternSyphoningTarget_ExtractFromEnemy_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractFromEnemy(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, enum class EGameRealm CallFunc_GetDualRealm_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


