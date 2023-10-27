#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x5E0 - 0x598)
// BlueprintGeneratedClass InteractableLadder_BP.InteractableLadder_BP_C
class AInteractableLadder_BP_C : public AInteractableLadder
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x598(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       ArrowHelper_EnterBottom;                           // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       ArrowHelper_EnterTop;                              // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PlaneHelper_BottomInteraction_Bad;                 // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PlaneHelper_BottomInteraction_Good;                // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PlaneHelper_TopInteraction_Good;                   // 0x5C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PlaneHelper_TopInteraction_Bad;                    // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       ArrowHelper_LandingTop;                            // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       ArrowHelper_LandingBottom;                         // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AInteractableLadder_BP_C* GetDefaultObj();

	void Disable_Ladder_Interaction();
	void Enable_Ladder_interaction();
	void ExecuteUbergraph_InteractableLadder_BP(int32 EntryPoint);
};

}


