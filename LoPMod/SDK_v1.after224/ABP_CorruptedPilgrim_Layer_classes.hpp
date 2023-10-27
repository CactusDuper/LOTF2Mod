#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1900 (0x1C48 - 0x348)
// AnimBlueprintGeneratedClass ABP_CorruptedPilgrim_Layer.ABP_CorruptedPilgrim_Layer_C
class UABP_CorruptedPilgrim_Layer_C : public UAnimInstance
{
public:
	uint8                                        Pad_445E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	uint8                                        Pad_445F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0x370(0x9A0)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xD10(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xD30(0x20)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0xD50(0x9A0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x16F0(0x20)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x1710(0x470)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x1B80(0xC8)(None)

	static class UClass* StaticClass();
	static class UABP_CorruptedPilgrim_Layer_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_CorruptedPilgrim_Layer(int32 EntryPoint);
};

}


