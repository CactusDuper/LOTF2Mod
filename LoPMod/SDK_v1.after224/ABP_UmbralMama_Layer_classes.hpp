#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x760 (0xAA8 - 0x348)
// AnimBlueprintGeneratedClass ABP_UmbralMama_Layer.ABP_UmbralMama_Layer_C
class UABP_UmbralMama_Layer_C : public UAnimInstance
{
public:
	uint8                                        Pad_3541[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x368(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x388(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x450(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x470(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x538(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x558(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x620(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x640(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x708(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x728(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x7F0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x810(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x8D8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x8F8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x9C0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x9E0(0xC8)(None)

	static class UClass* StaticClass();
	static class UABP_UmbralMama_Layer_C* GetDefaultObj();

	void FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP);
	void FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_UmbralMama_Layer(int32 EntryPoint);
};

}


