#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1070 (0x13B8 - 0x348)
// AnimBlueprintGeneratedClass ABP_WPN_FOE_SP_CorruptedPilgrimStick_Layer.ABP_WPN_FOE_SP_CorruptedPilgrimStick_Layer_C
class UABP_WPN_FOE_SP_CorruptedPilgrimStick_Layer_C : public UAnimInstance
{
public:
	uint8                                        Pad_2419[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(None)
	uint8                                        Pad_241A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics_1;                     // 0x390(0x790)(None)
	struct FAnimNode_KawaiiPhysics               AnimGraphNode_KawaiiPhysics;                       // 0xB20(0x790)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x12B0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x12D0(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1398(0x20)(None)

	static class UClass* StaticClass();
	static class UABP_WPN_FOE_SP_CorruptedPilgrimStick_Layer_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ABP_WPN_FOE_SP_CorruptedPilgrimStick_Layer(int32 EntryPoint);
};

}


