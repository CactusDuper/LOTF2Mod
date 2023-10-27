#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x108 - 0xF8)
// BlueprintGeneratedClass BP_AIParasiteTetheringComponent.BP_AIParasiteTetheringComponent_C
class UBP_AIParasiteTetheringComponent_C : public UAIParasiteTetheringComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     TetheringVFXParticleSystem;                        // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIParasiteTetheringComponent_C* GetDefaultObj();

	void OnStartedTethering_BP();
	void OnStoppedTethering_BP();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AIParasiteTetheringComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ALOTF2Character* CallFunc_GetLinkedCharacter_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
};

}


