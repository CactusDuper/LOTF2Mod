#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0xDD8 - 0xDA9)
// BlueprintGeneratedClass BP_Enemy_RhogarHound.BP_Enemy_RhogarHound_C
class ABP_Enemy_RhogarHound_C : public ABaseAICharacter_BP_C
{
public:
	uint8                                        Pad_1E77[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDeactivateComponentsByTagOnDeathComponent* DeactivateComponentsByTagOnDeath;                  // 0xDB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Left_Eyes_Trail_VFX;                               // 0xDC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Right_Eyes_Trail_VFX;                              // 0xDC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoftRepulsionCapsuleComponent*        SoftRepulsionCapsule_Quadruped;                    // 0xDD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Enemy_RhogarHound_C* GetDefaultObj();

	void UserConstructionScript(const struct FAkAnathemaEvent& RhogarHound_INI_Audio, class UAkAnathemaComponent* CallFunc_GetAkComponentHead_ReturnValue, int32 CallFunc_PostAkAnathemaEvent_ReturnValue);
	void OnDeath(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved);
	void ExecuteUbergraph_BP_Enemy_RhogarHound(int32 EntryPoint, class AActor* K2Node_Event_instigatorActor, const struct FGameplayTagContainer& K2Node_Event_instigatorTags, bool K2Node_Event_bDeathWasObserved);
};

}


