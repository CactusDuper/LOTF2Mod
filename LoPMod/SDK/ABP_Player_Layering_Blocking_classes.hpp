#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26A8 (0x29F0 - 0x348)
// AnimBlueprintGeneratedClass ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C
class UABP_Player_Layering_Blocking_C : public UAnimInstance
{
public:
	uint8                                        Pad_3B6F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData_PLB    __AnimBlueprintMutables;                           // 0x358(0x10)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x368(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x370(0x8)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_2;                       // 0x378(0xC8)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x440(0xD0)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x510(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x5D8(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_32;                    // 0x6A0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_11;                   // 0x6C8(0x108)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0x7D0(0xE0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x8B0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_31;                    // 0x990(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_10;                   // 0x9B8(0x108)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0xAC0(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xB88(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0xBB0(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_1;                       // 0xBD8(0x100)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0xCD8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_30;                    // 0xD20(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_29;                    // 0xD48(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_28;                    // 0xD70(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_27;                    // 0xD98(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_26;                    // 0xDC0(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xDE8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xE30(0x20)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0xE50(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_25;                    // 0xF50(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xF78(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0xFC0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_24;                    // 0x1008(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x1030(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_23;                    // 0x1110(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0x1138(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x1160(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x1240(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1268(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x1288(0x28)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x12B0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x1378(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x1398(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x13C0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x13E8(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x1410(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x14D8(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x15A0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x15C8(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0x15F0(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x16F8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x1800(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x1828(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x1850(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x1958(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x1A60(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x1B68(0x28)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive_2;               // 0x1B90(0x38)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive_1;               // 0x1BC8(0x38)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x1C00(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x1D08(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x1D30(0x108)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x1E38(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x1F00(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x1FE0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2008(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x2050(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x2130(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x2158(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x2238(0x28)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive;                 // 0x2260(0x38)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x2298(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x2360(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x2468(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x2490(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x2598(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x25C0(0x40)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x2600(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x2628(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x2650(0x28)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2678(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x2740(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x2848(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x2870(0x28)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x2898(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x2998(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x29C0(0x28)(None)
	class UAnimInstance*                         K2Node_PropertyAccess_2;                           // 0x29E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Player_Layering_Blocking_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& LayeredLocomotion, const struct FPoseLink& BaseLocomotion, const struct FPoseLink& BlockingOverlay, struct FPoseLink* AnimGraph);
	class UABP_Player_C* GetABP_Player(class UABP_Player_C* K2Node_DynamicCast_AsABP_Player, bool K2Node_DynamicCast_bSuccess);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Layering_Blocking_AnimGraphNode_TransitionResult_2AC4BE7345F1861FDDEADF99B0F2E6A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Layering_Blocking_AnimGraphNode_TransitionResult_47A326494179718657B8109D73025A94();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_Player_Layering_Blocking(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
};

}

