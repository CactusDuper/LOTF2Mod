#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEC15 (0xF0F5 - 0x4E0)
// AnimBlueprintGeneratedClass ABP_Player.ABP_Player_C
class UABP_Player_C : public UBasePlayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData_P  __AnimBlueprintMutables;                           // 0x4E8(0x14A)(HasGetValueTypeHash)
	uint8                                        Pad_3B78[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x638(0x8)(None)
	struct FAnimSubsystemInstance_NodeRelevancy  AnimBlueprintExtension_NodeRelevancy;              // 0x640(0xA8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x6E8(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x6F0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0x710(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_3;                        // 0x7D8(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0xC48(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0xC68(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_20;                 // 0xD30(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_41;                   // 0xE10(0x48)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_12;                      // 0xE58(0x100)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0xF58(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0xF78(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0x1040(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0x1060(0xC8)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_7;                   // 0x1128(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_18;                   // 0x1170(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_52;                    // 0x1278(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_51;                    // 0x12A0(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_11;                      // 0x12C8(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_50;                    // 0x13C8(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_10;                      // 0x13F0(0x100)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0x14F0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0x1510(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0x15D8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x15F8(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_12;                  // 0x16C0(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_6;                   // 0x1708(0x48)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization_4;                   // 0x1750(0x100)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_40;                   // 0x1850(0x48)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_14;                // 0x1898(0x40)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_19;                 // 0x18D8(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_17;                   // 0x19B8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_49;                    // 0x1AC0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_48;                    // 0x1AE8(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_16;                   // 0x1B10(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_47;                    // 0x1C18(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_46;                    // 0x1C40(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_9;                       // 0x1C68(0x100)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_11;                  // 0x1D68(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_5;                   // 0x1DB0(0x48)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_8;                       // 0x1DF8(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_45;                    // 0x1EF8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_44;                    // 0x1F20(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_43;                    // 0x1F48(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0x1F70(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x1F90(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10;                  // 0x2058(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_4;                   // 0x20A0(0x48)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization_3;                   // 0x20E8(0x100)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_15;                   // 0x21E8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_42;                    // 0x22F0(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_13;                // 0x2318(0x40)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_41;                    // 0x2358(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_18;                 // 0x2380(0xE0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_17;                 // 0x2460(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39;                   // 0x2540(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_16;                 // 0x2588(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_38;                   // 0x2668(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_14;                   // 0x26B0(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_40;                    // 0x27B8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_39;                    // 0x27E0(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0x2808(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x2828(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x28F0(0x20)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization_2;                   // 0x2910(0x100)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_76;                 // 0x2A10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_75;                 // 0x2A38(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_74;                 // 0x2A60(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_73;                 // 0x2A88(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_10;                       // 0x2AB0(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9;                        // 0x2BD8(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_12;            // 0x2D00(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8;                        // 0x2D20(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_12;            // 0x2E48(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7;                        // 0x2E68(0x128)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_72;                 // 0x2F90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_71;                 // 0x2FB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_70;                 // 0x2FE0(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_44;                      // 0x3008(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_37;                   // 0x3028(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_43;                      // 0x3070(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_42;                      // 0x3090(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_14;                     // 0x30B0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_41;                      // 0x3178(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_69;                 // 0x3198(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_68;                 // 0x31C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_67;                 // 0x31E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_66;                 // 0x3210(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_11;            // 0x3238(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_11;            // 0x3258(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_10;            // 0x3278(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_9;                   // 0x3298(0x48)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_12;                // 0x32E0(0x40)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_10;            // 0x3320(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_11;                // 0x3340(0x40)(None)
	struct FAnimNode_OrientationWarping          AnimGraphNode_OrientationWarping_3;                // 0x3380(0x198)(None)
	struct FAnimNode_StrideWarping               AnimGraphNode_StrideWarping_3;                     // 0x3518(0x238)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_40;                      // 0x3750(0x20)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x3770(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x3838(0x70)(None)
	struct FAnimNode_OrientationWarping          AnimGraphNode_OrientationWarping_2;                // 0x38A8(0x198)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9;             // 0x3A40(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9;             // 0x3A60(0x20)(None)
	struct FAnimNode_StrideWarping               AnimGraphNode_StrideWarping_2;                     // 0x3A80(0x238)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_36;                   // 0x3CB8(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_8;                   // 0x3D00(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_35;                   // 0x3D48(0x48)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_7;                       // 0x3D90(0x100)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_39;                      // 0x3E90(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_38;                      // 0x3EB0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_13;                     // 0x3ED0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_37;                      // 0x3F98(0x20)(None)
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone;                      // 0x3FB8(0xA8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_6;                        // 0x4060(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x4188(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8;             // 0x42B0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x42D0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8;             // 0x43F8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x4418(0x128)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_65;                 // 0x4540(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_64;                 // 0x4568(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_63;                 // 0x4590(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_62;                 // 0x45B8(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7;             // 0x45E0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7;             // 0x4600(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6;             // 0x4620(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7;                   // 0x4640(0x48)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_10;                // 0x4688(0x40)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6;             // 0x46C8(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_9;                 // 0x46E8(0x40)(None)
	struct FAnimNode_OrientationWarping          AnimGraphNode_OrientationWarping_1;                // 0x4728(0x198)(None)
	struct FAnimNode_StrideWarping               AnimGraphNode_StrideWarping_1;                     // 0x48C0(0x238)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_36;                      // 0x4AF8(0x20)(None)
	struct FAnimNode_OrientationWarping          AnimGraphNode_OrientationWarping;                  // 0x4B18(0x198)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5;             // 0x4CB0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5;             // 0x4CD0(0x20)(None)
	struct FAnimNode_StrideWarping               AnimGraphNode_StrideWarping;                       // 0x4CF0(0x238)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_34;                   // 0x4F28(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33;                   // 0x4F70(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6;                   // 0x4FB8(0x48)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_6;                       // 0x5000(0x100)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_35;                      // 0x5100(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_34;                      // 0x5120(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_12;                     // 0x5140(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_33;                      // 0x5208(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_61;                 // 0x5228(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_60;                 // 0x5250(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_59;                 // 0x5278(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_58;                 // 0x52A0(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_8;                 // 0x52C8(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_32;                      // 0x5308(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_57;                 // 0x5328(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_56;                 // 0x5350(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_55;                 // 0x5378(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_5;                       // 0x53A0(0x100)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_32;                   // 0x54A0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_31;                      // 0x54E8(0x20)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_4;                       // 0x5508(0x100)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_7;                 // 0x5608(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_30;                      // 0x5648(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_6;                 // 0x5668(0x40)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_2;            // 0x56A8(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31;                   // 0x5778(0x48)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_3;                       // 0x57C0(0x100)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_29;                      // 0x58C0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_11;                     // 0x58E0(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_28;                      // 0x59A8(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_27;                      // 0x59C8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_10;                     // 0x59E8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_26;                      // 0x5AB0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_9;                      // 0x5AD0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x5B98(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x5BB8(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_13;                   // 0x5C80(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_38;                    // 0x5D88(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_15;                 // 0x5DB0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_37;                    // 0x5E90(0x28)(None)
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace;            // 0x5EB8(0x118)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x5FD0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x5FF0(0xC8)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4;             // 0x60B8(0x20)(None)
	uint8                                        Pad_3B79[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_1;                         // 0x60E0(0x9A0)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x6A80(0x9A0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4;             // 0x7420(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x7440(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x7460(0xC8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3;             // 0x7528(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x7548(0x20)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0x7568(0xF8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_2;                        // 0x7660(0x470)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_12;                   // 0x7AD0(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_36;                    // 0x7BD8(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5;                   // 0x7C00(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_35;                    // 0x7C48(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x7C70(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x7C90(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_11;                   // 0x7D58(0x108)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_30;                   // 0x7E60(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_14;                 // 0x7EA8(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_29;                   // 0x7F88(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x7FD0(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x80F8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x8118(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_34;                    // 0x8138(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_33;                    // 0x8160(0x28)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3;                   // 0x8188(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x81D0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x81F0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x8210(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x8230(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x8250(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x8318(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x8440(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x8460(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x8480(0x128)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x85A8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_54;                 // 0x85C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_53;                 // 0x85F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_52;                 // 0x8618(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_51;                 // 0x8640(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_50;                 // 0x8668(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_49;                 // 0x8690(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48;                 // 0x86B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_47;                 // 0x86E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_46;                 // 0x8708(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45;                 // 0x8730(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44;                 // 0x8758(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_43;                 // 0x8780(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_42;                 // 0x87A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_41;                 // 0x87D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_40;                 // 0x87F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39;                 // 0x8820(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_38;                 // 0x8848(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_5;                 // 0x8870(0x40)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x88B0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_28;                   // 0x88F8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_25;                      // 0x8940(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_4;                 // 0x8960(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_24;                      // 0x89A0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x89C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x89E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x8A10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x8A38(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_27;                   // 0x8A60(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_23;                      // 0x8AA8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x8AC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x8AF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x8B18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x8B40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x8B68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x8B90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x8BB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x8BE0(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_3;                 // 0x8C08(0x40)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_5;                       // 0x8C48(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_13;                 // 0x8D10(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_32;                    // 0x8DF0(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2;                 // 0x8E18(0x40)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_4;                       // 0x8E58(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_26;                   // 0x8F20(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_12;                 // 0x8F68(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_31;                    // 0x9048(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x9070(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_30;                    // 0x90B8(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_11;                 // 0x90E0(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_25;                   // 0x91C0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x9208(0x20)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_10;                 // 0x9228(0xE0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x9308(0x40)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_3;                       // 0x9348(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_29;                    // 0x9410(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x9438(0x40)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_2;                       // 0x9478(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_24;                   // 0x9540(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_9;                  // 0x9588(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_28;                    // 0x9668(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_27;                    // 0x9690(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x96B8(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8;                  // 0x9700(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_23;                   // 0x97E0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x9828(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_26;                    // 0x9848(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x9870(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_25;                    // 0x9890(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x98B8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_8;                      // 0x98D8(0xC8)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x99A0(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x99C0(0x20)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_2;                          // 0x99E0(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_1;                          // 0x9AD0(0xF0)(None)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0x9BC0(0xF0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x9CB0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22;                   // 0x9CD0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x9D18(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7;                      // 0x9D38(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7;                              // 0x9E00(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x9E48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x9E70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x9E98(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_2;                       // 0x9EC0(0x100)(None)
	struct FAnimNode_BlendSpaceEvaluator         AnimGraphNode_BlendSpaceEvaluator_1;               // 0x9FC0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0xA038(0x20)(None)
	struct FAnimNode_BlendSpaceEvaluator         AnimGraphNode_BlendSpaceEvaluator;                 // 0xA058(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0xA0D0(0x20)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_1;                       // 0xA0F0(0x100)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0xA1F0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_6;                      // 0xA210(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0xA2D8(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7;                  // 0xA3A0(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_10;                   // 0xA480(0x108)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6;                              // 0xA588(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0xA5D0(0xE0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5;                              // 0xA6B0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_9;                    // 0xA6F8(0x108)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_10;                  // 0xA800(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0xA8C8(0x470)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0xAD38(0x470)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_24;                    // 0xB1A8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_23;                    // 0xB1D0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0xB1F8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0xB300(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0xB328(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0xB370(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0xB478(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0xB4A0(0x48)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_9;                   // 0xB4E8(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_8;                   // 0xB5B0(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_7;                   // 0xB678(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0xB740(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0xB848(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0xB870(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0xB8B8(0x108)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0xB9C0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0xBAA0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0xBAC8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0xBBD0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0xBBF8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21;                   // 0xBC20(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0xBC68(0xE0)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0xBD48(0x100)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_20;                   // 0xBE48(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0xBE90(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_19;                   // 0xBF70(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xBFB8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_18;                   // 0xC000(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2;                   // 0xC048(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1;                   // 0xC090(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_17;                   // 0xC0D8(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_16;                   // 0xC120(0x48)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_6;                   // 0xC168(0xC8)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization_1;                   // 0xC230(0x100)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0xC330(0x48)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_5;                   // 0xC378(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_4;                   // 0xC440(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_3;                   // 0xC508(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0xC5D0(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0xC698(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0xC6E0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0xC728(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0xC770(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0xC790(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0xC858(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0xC960(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0xC988(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0xC9B0(0x108)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0xCAB8(0xC8)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0xCB80(0x90)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0xCC10(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0xCC30(0xC8)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0xCCF8(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0xCDC0(0xE0)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0xCEA0(0x100)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0xCFA0(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0xCFC8(0x48)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0xD010(0xC8)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_LinkedAnimGraph_1;                   // 0xD0D8(0xB8)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_LinkedAnimGraph;                     // 0xD190(0xB8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0xD248(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0xD350(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0xD378(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xD3A0(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0xD3E8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0xD410(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0xD438(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xD500(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0xD608(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0xD630(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0xD658(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0xD680(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0xD6A8(0x28)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0xD6D0(0xD0)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive_1;               // 0xD7A0(0x38)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0xD7D8(0xD0)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive;                 // 0xD8A8(0x38)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0xD8E0(0xE0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0xD9C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0xD9E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0xDA10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0xDA38(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0xDA60(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0xDA88(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0xDAB0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0xDAD8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0xDB20(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0xDB40(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0xDB88(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0xDBA8(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0xDBD0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0xDBF0(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0xDCB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0xDCE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0xDD08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0xDD30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0xDD58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0xDD80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0xDDA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0xDDD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xDDF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xDE20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xDE48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0xDE70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0xDE98(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0xDEC0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0xDEE8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0xDF10(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0xDF38(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0xDF80(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0xDFA0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0xDFE8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0xE008(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0xE050(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0xE070(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0xE0B8(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0xE0D8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0xE120(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xE140(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0xE188(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0xE1A8(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0xE1D0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0xE1F0(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xE2B8(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xE398(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0xE3B8(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xE480(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0xE4C8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xE4F0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xE518(0x28)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0xE540(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xE588(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xE5D0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xE618(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xE660(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xE6A8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xE6C8(0xC8)(None)
	double                                       __CustomProperty_RHand_Alpha_16F667034289429F2D4BC5BC379C0720; // 0xE790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_LHand_Alpha_16F667034289429F2D4BC5BC379C0720; // 0xE798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Spring_CriticalDamping_16F667034289429F2D4BC5BC379C0720; // 0xE7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Spring_Strength_16F667034289429F2D4BC5BC379C0720; // 0xE7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpringDamping;                                     // 0xE7B0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpringStrength;                                    // 0xE7B8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  CurrentLocomotionState_M;                          // 0xE7C0(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  CurrentLocomotionState_S;                          // 0xE7C1(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  CurrentLocomotionState_P;                          // 0xE7C2(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B7F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       __CustomProperty_ApplyReverseFoot_Alpha_07BC85B74F4E1346A5602686B155E647; // 0xE7C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_PropertyAccess_63;                          // 0xE7D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_62;                          // 0xE7E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B80[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_PropertyAccess_60;                          // 0xE7F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_PropertyAccess_59;                          // 0xE7F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_PropertyAccess_58;                          // 0xE810(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_PropertyAccess_57;                          // 0xE818(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_PropertyAccess_56;                          // 0xE830(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_PropertyAccess_55;                          // 0xE838(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_PropertyAccess_54;                          // 0xE850(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               K2Node_PropertyAccess_53;                          // 0xE868(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_PropertyAccess_47;                          // 0xE880(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_PropertyAccess_46;                          // 0xE884(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_PropertyAccess_45;                          // 0xE888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_PropertyAccess_44;                          // 0xE88C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_43;                          // 0xE890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B83[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_PropertyAccess_42;                          // 0xE898(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_35;                          // 0xE8B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       L_Fingers_Prop_Override;                           // 0xE8B8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       R_Fingers_Prop_Override_Alpha;                     // 0xE8C0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_31;                          // 0xE8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B85[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_PropertyAccess_28;                          // 0xE8CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_PropertyAccess_27;                          // 0xE8D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_PropertyAccess_26;                          // 0xE8E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_25;                          // 0xE8EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              K2Node_PropertyAccess_24;                          // 0xE8F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               K2Node_PropertyAccess_23;                          // 0xE908(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  K2Node_PropertyAccess_22;                          // 0xE920(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  K2Node_PropertyAccess_21;                          // 0xE921(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  __CustomProperty_CurrentLocomotionState_L_FD9652094B4C5BC18BE9F0A50CC84005; // 0xE922(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  __CustomProperty_CurrentLocomotionState_M_760DD912473ACF095C8F128A33F18DF9; // 0xE923(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  __CustomProperty_CurrentLocomotionState_DW_B5F3F435494CD79B9031808BAF5579D5; // 0xE924(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  __CustomProperty_CurrentLocomotionState_S_930E91984F83FD63284024B7085512E6; // 0xE925(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B87[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       __CustomProperty_L_Hand_Unequipped_Alpha_CF2AC50644F04D532E9A6EA310CE90C3; // 0xE928(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_R_Hand_Unequipped_Alpha_CF2AC50644F04D532E9A6EA310CE90C3; // 0xE930(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  __CustomProperty_CurrentLocomotionState_P_CF2AC50644F04D532E9A6EA310CE90C3; // 0xE938(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       __CustomProperty_LookAtWeight_539FE96449B7BCAE87FC688AAB07623C; // 0xE940(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               __CustomProperty_TargetLocation_539FE96449B7BCAE87FC688AAB07623C; // 0xE948(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_SpringDamping_20D8FF024900D259C1D12A9473ED5951; // 0xE960(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_SpringStrength_20D8FF024900D259C1D12A9473ED5951; // 0xE968(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_HandsIK_Alpha_20D8FF024900D259C1D12A9473ED5951; // 0xE970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_L_Fingers_Prop_Override_7A2749BE44ACB0E43DD5DD80C54B44D3; // 0xE978(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_R_Fingers_Prop_Override_Alpha_7A2749BE44ACB0E43DD5DD80C54B44D3; // 0xE980(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_PlayerSpeed_B01F39B6459D3E3ED68380B8D9B0ACB7; // 0xE988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __CustomProperty_IsInUmbral_B01F39B6459D3E3ED68380B8D9B0ACB7; // 0xE990(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ActiveAnimationConfig;                             // 0xE994(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     Knockdown_Idle;                                    // 0xE998(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInAir;                                           // 0xE9A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsClimbingLadder;                                  // 0xE9A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LadderDirection;                                   // 0xE9A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ClimbingAnimationPosition;                         // 0xE9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IsInUmbral;                                        // 0xE9B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLadderSliding;                                   // 0xE9B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bApplyAimOffset;                                   // 0xE9B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAimOffset                            AimOffset;                                         // 0xE9B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bRanged_UsingMagic;                                // 0xE9C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRanged_UsingWeapon;                               // 0xE9C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRangedMode;                                       // 0xE9C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentSpeed;                                      // 0xE9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Char_DirectionAngle;                               // 0xE9D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InBlkTrans_AnimFound;                              // 0xE9D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutBlkTrans_AnimFound;                             // 0xE9D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       L_Arm_Override_Alpha;                              // 0xE9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       R_Arm_Override_Alpha;                              // 0xE9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            ShieldOffset_FromArmor;                            // 0xE9F0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStanceType                       Stance;                                            // 0xEA50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Overlay_PoseFound;                                 // 0xEA51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Overlay_Pelvis_Alpha;                              // 0xEA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Overlay_Arms_Alpha;                                // 0xEA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Additive_Pelvis;                                   // 0xEA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Additive_Arms;                                     // 0xEA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       IK_Hands_Alpha;                                    // 0xEA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LArm_Alpha;                                        // 0xEA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RArm_Alpha;                                        // 0xEA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FavoringHand;                                      // 0xEA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayStartAnim;                                     // 0xEA98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayStopAnim;                                      // 0xEA99(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               InputVector;                                       // 0xEAA0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StartAngle;                                        // 0xEAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  Previous_LocomotionState;                          // 0xEAC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     AS_Walk;                                           // 0xEAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Default_Idle;                                      // 0xEAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     OneH_Block_Idle;                                   // 0xEAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AS_Sprint;                                         // 0xEAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AS_Run;                                            // 0xEAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MovementInputAmount;                               // 0xEAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasMovementInput;                                  // 0xEAF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CurrentInputRotation;                              // 0xEB00(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ALOTF2Character*                       LOTF2Character;                                    // 0xEB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*           Character_Movement;                                // 0xEB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Stop_Speed;                                        // 0xEB28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayIdleBreaker;                                   // 0xEB30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       PlayRate;                                          // 0xEB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Apply_Overlay;                                     // 0xEB40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     OneH_IdleBreaker;                                  // 0xEB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     TwoH_IdleBreaker;                                  // 0xEB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IdleBreaker_AnimFound;                             // 0xEB58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AngleToFocusDirection;                             // 0xEB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Delta_Time_X;                                      // 0xEB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              PrimaryTargetRotation;                             // 0xEB70(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              SecondaryTargetRotation;                           // 0xEB88(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       MaxSpeed;                                          // 0xEBA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              StartRotation;                                     // 0xEBA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bUsingProgrammaticTurns;                           // 0xEBC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  Current_LocomotionState;                           // 0xEBC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  Desired_LocomotionState;                           // 0xEBC2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B95[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHexPlayerMovementComponent*           PlayerMovementComponent;                           // 0xEBC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LeaningOffset;                                     // 0xEBD0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              Target_LeaningRight;                               // 0xEBE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	double                                       LeaningAlpha;                                      // 0xEC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Target_LeaningLeft;                                // 0xEC08(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsLockingOnTarget;                                // 0xEC20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLookingTarget_;                                  // 0xEC21(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B96[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAt_TargetLocation;                             // 0xEC28(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultBrakingDeceleration;                        // 0xEC40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AnimBrakingDeceleration;                           // 0xEC48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLanternMode;                                      // 0xEC50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStrafing;                                        // 0xEC51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B97[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Stop_MoveAngle;                                    // 0xEC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RFingers_Prop_Alpha;                               // 0xEC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FeetIK_Alpha;                                      // 0xEC68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LookAt_Alpha;                                      // 0xEC6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     TwoH_Block_Idle;                                   // 0xEC70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Overlay_Idle;                                      // 0xEC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Shield_Idle_Add;                                   // 0xEC80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        TurnInPlace_Angle;                                 // 0xEC88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B98[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TurnInPlaceAnimTime;                               // 0xEC90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Nine0_L_Turn;                                      // 0xEC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     One80_L_Turn;                                      // 0xECA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Nine0_R_Turn;                                      // 0xECA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     One80_R_Turn;                                      // 0xECB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           BS_HurtFlinch;                                     // 0xECB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ShieldOffsetFromArmor_Rotation;                    // 0xECC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               ShieldOffsetFromArmor_Location;                    // 0xECD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECardinalDirection                LocalVelocityDirection;                            // 0xECF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimStruct_CardinalDirection         WalkAnim_CardinalDirection;                        // 0xECF8(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAnimStruct_CardinalDirection         RunAnim_CardinalDirection;                         // 0xED18(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bLeftHandEquipped;                                 // 0xED38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRightHandEquipped;                                // 0xED39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpace*                           BS_AimingOffsetRelaxed;                            // 0xED40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       AimOffset_Yaw_Smoothed;                            // 0xED48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimOffset_Pitch_Smoothed;                          // 0xED50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsReadyToShoot;                                   // 0xED58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Data_WalkSpeed;                                    // 0xED5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Data_SprintSpeed;                                  // 0xED60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MontageIsPlaying;                                  // 0xED64(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MontageIsActive;                                   // 0xED65(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEquipmentManagerComponent*            EquipmentManagerComponent;                         // 0xED68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         WantsToStop;                                       // 0xED70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WantsToRun;                                        // 0xED71(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeepsWalking;                                      // 0xED72(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Apply_BlockingFullBody_Overlay;                    // 0xED73(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     Block_Transition_In;                               // 0xED78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Block_Transition_Out;                              // 0xED80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           BS_Run;                                            // 0xED88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           BS_AimingOffsetShooting;                           // 0xED90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           BS_Aiming;                                         // 0xED98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       FlinchAnimTime;                                    // 0xEDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LFingers_Prop_Alpha;                               // 0xEDA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Apply_UpperBodyAimOffset;                          // 0xEDB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DisplacementSinceLastUpdate;                       // 0xEDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WorldLocation;                                     // 0xEDC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        L_VelocityDirectionAngle;                          // 0xEDD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       L_VelocityDirectionAngle_WithOffset;               // 0xEDE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RootYawOffset;                                     // 0xEDE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECardinalDirection                LocalVelocityDirection_withOffset;                 // 0xEDF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasVelocity;                                       // 0xEDF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstUpdate;                                     // 0xEDF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERootYawOffsetMode                RootYawOffsetMode;                                 // 0xEDF3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       YawDeltaSinceLastUpdate;                           // 0xEDF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasAcceleration;                                   // 0xEE00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimStruct_CardinalDirection         Start_WalkAnim_CardinalDirection;                  // 0xEE08(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAnimStruct_CardinalDirection         Start_RunAnim_CardinalDirection;                   // 0xEE28(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAnimStruct_CardinalDirection         Stop_WalkAnim_CardinalDirection;                   // 0xEE48(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAnimStruct_CardinalDirection         Stop_RunAnim_CardinalDirection;                    // 0xEE68(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Walk_Start_180R;                                   // 0xEE88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Run_Start_180R;                                    // 0xEE90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AS_Sprint_Stop;                                    // 0xEE98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class ECardinalDirection                StartDirection;                                    // 0xEEA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reached_EndOfTurn;                                 // 0xEEA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Max_TurnYawValue;                                  // 0xEEA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TurnYawCurveValue;                                 // 0xEEB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StrideWarping_Start_Alpha;                         // 0xEEB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimStruct_CardinalDirection         Start_Anim_CardinalDirection;                      // 0xEEC0(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAnimStruct_CardinalDirection         Stop_Anim_CardinalDirection;                       // 0xEEE0(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AS_Start_180R;                                     // 0xEF00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              W_CharRotation;                                    // 0xEF08(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ECardinalDirection                CardinalDirectionFromAcceleration;                 // 0xEF20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TurnYawWeight;                                     // 0xEF24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCachedAnimStateData                  CacheAnimStateData_Run;                            // 0xEF28(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FCachedAnimStateData                  CacheAnimStateData_Walk;                           // 0xEF44(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	double                                       AimOffset_Alpha;                                   // 0xEF60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCachedAnimStateData                  CacheAnimStateData_Idle;                           // 0xEF68(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bRagdollEnded;                                     // 0xEF84(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URagdollComponent_BP_C*                RagdollComponent;                                  // 0xEF88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUnarmed;                                         // 0xEF90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTriggerTurnInPlace;                               // 0xEF91(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedAnimStateData                  CacheAnimStateData_TurnInPlace;                    // 0xEF94(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	double                                       MovementInputAmount_LastTick;                      // 0xEFB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Overlay_Lantern;                                   // 0xEFB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Overlay_Ranged;                                    // 0xEFC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Overlay_Buffer_1H;                                 // 0xEFC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       RHand_SpringIK_Alpha;                              // 0xEFD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LHand_SpringIK_Alpha;                              // 0xEFD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                LookAt_TargetMesh;                                 // 0xEFE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LookAt_TargetLocation_LastTick;                    // 0xEFE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       UpperBodyRangedAlpha;                              // 0xF000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERangedStance                     RangedStance;                                      // 0xF008(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMeleeStance                      MeleeStance;                                       // 0xF009(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRanged_UsingThrowable;                            // 0xF00A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       L_Arm_Equipment_Alpha;                             // 0xF010(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       R_Arm_Equipment_Alpha;                             // 0xF018(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Arms_Equipment_Global_Playrate;                    // 0xF020(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IdleBreaker_AnimStartTime;                         // 0xF028(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimSequence*>                 AS_IdleBreaker;                                    // 0xF030(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bResetIdleBreaker;                                 // 0xF040(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Arms_Equipment_Global_BlendOutTime;                // 0xF048(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlayingEquipmentAnimations;                       // 0xF050(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFemale;                                         // 0xF051(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BAA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         AS_F_Walk_Combat;                                  // 0xF058(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        IdleBreaker_Timer;                                 // 0xF060(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IdleBreaker_DelayTimer;                            // 0xF064(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IdleBreaker_Index;                                 // 0xF068(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BAB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SpringIK_Damping;                                  // 0xF070(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AS_F_Run;                                          // 0xF078(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AS_F_Sprint;                                       // 0xF080(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bCinematic_isPlaying;                              // 0xF088(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OverlayBuffer_BlendWeight;                         // 0xF090(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHexDelayerAction*                     LeftEquipmentTask;                                 // 0xF098(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UHexDelayerAction*                     RightEquipmentTask;                                // 0xF0A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         L_Arm_Equipment_Anim_Done;                         // 0xF0A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         R_Arm_Equipment_Anim_Done;                         // 0xF0A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEquipAnimationType               L_Arm_Cached_EquipAnimationType;                   // 0xF0AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEquipAnimationType               R_Arm_Cached_EquipAnimationType;                   // 0xF0AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftHand_Unequipped_Alpha;                         // 0xF0AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightHand_Unequipped_Alpha;                        // 0xF0B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCachedAnimStateData                  CacheAnimStateData_OnGround;                       // 0xF0B4(0x1C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         OnGround_IsStateRelevant;                          // 0xF0D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseBuffer_1HOverlay;                               // 0xF0D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BAD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlockingOverlayBuffer_BlendWeight;                 // 0xF0D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LookAt_BlendWeight;                                // 0xF0D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Disable_LookAt;                                    // 0xF0DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BlockingTransition_BlendTimeAlpha;                 // 0xF0E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlockingTransition_AccumulatedTime;                // 0xF0E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpringIK_Restart;                                  // 0xF0EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FeetIK_FullRotation_Alpha;                         // 0xF0F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_FeetFBIK;                                      // 0xF0F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Player_C* GetDefaultObj();

	void HandsIK_Override(const struct FPoseLink& InputPose, double HandsIK_Alpha, double SpringStrength, double SpringDamping, struct FPoseLink* HandsIK_Override);
	void LanternOverlay(const struct FPoseLink& LanternLayeringPose, enum class ELocomotionState CurrentLocomotionState_L, struct FPoseLink* LanternOverlay);
	void RangedOverlay(const struct FPoseLink& RangedLayeringPose, enum class ELocomotionState CurrentLocomotionState_R, struct FPoseLink* RangedOverlay);
	void MagicOverlay(const struct FPoseLink& MagicLayeringPose, enum class ELocomotionState CurrentLocomotionState_M, struct FPoseLink* MagicOverlay);
	void DualWieldOverlay(const struct FPoseLink& DualWieldLayeringPose, enum class ELocomotionState CurrentLocomotionState_DW, struct FPoseLink* DualWieldOverlay);
	void SecondaryOverlay(const struct FPoseLink& SecondaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_S, struct FPoseLink* SecondaryOverlay);
	void PrimaryOverlay(const struct FPoseLink& PrimaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_P, double R_Hand_Unequipped_Alpha, double L_Hand_Unequipped_Alpha, struct FPoseLink* PrimaryOverlay);
	void Locomotion_Blocking(const struct FPoseLink& InPose, struct FPoseLink* Locomotion_Blocking);
	void Locomotion(struct FPoseLink* Locomotion);
	void AL_AimingOffset(const struct FPoseLink& UpperBody_Additive, double AimingAlpha, double AimingPitch, double AimingYaw, class UBlendSpace* AimOffset_BS, struct FPoseLink* AL_AimingOffset);
	void AL_PlayerFlails(const struct FPoseLink& InPose_Flails, struct FPoseLink* AL_PlayerFlails);
	void FeetIK_SetupOverride(const struct FPoseLink& PoseToSlope, struct FPoseLink* FeetIK_SetupOverride);
	void RFingers_and_Prop_Override(const struct FPoseLink& InPose, double R_Fingers_Prop_Override_Alpha, double L_Fingers_Prop_Override, struct FPoseLink* RFingers_and_Prop_Override);
	void BasePoses(struct FPoseLink* BasePoses);
	void LayeringPoses(struct FPoseLink* LayeringPoses);
	void OverlayPoses(struct FPoseLink* OverlayPoses);
	void AL_WeaponVerticalOffset_(const struct FPoseLink& InPose_FullBody, struct FPoseLink* AL_WeaponVerticalOffset_);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void Update_FootSolver(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, float CallFunc_GetDeltaTime_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Select_Default, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, float K2Node_VariableSet_FeetIK_FullRotation_Alpha_ImplicitCast);
	void UpdateFeetIKAlpha(TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void SetRangedStanceLocal(class ALOTF2Character* Character, class UEquipableInventoryRangedWeapon* CallFunc_GetRangedWeaponEquipment_ReturnValue, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsHolsteredVisual_ReturnValue, const struct FGameplayTag& CallFunc_GetItemCategory_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsHolsteredVisual_ReturnValue_1);
	void Set_BlockingTransitionAnimTime(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void Update_BlockingTransitionAnimTime(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, class UAnimSequenceBase* CallFunc_GetSequencePure_ReturnValue, float CallFunc_GetAccumulatedTime_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_FInterpEaseInOut_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast);
	double TurnOff_Override_byCurveName(double InputTarget, class FName SwitcherCurve, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void OnLeftHandAnimUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void OnRightHandAnimUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void OnHandAnimUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool IsLeftHand, double NewPlayRate, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, float CallFunc_GetPlayRate_ReturnValue, const struct FSequencePlayerReference& CallFunc_SetPlayRate_ReturnValue, double CallFunc_SignOfFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable, bool K2Node_Select_Default, float CallFunc_SetPlayRate_PlayRate_ImplicitCast, double CallFunc_SignOfFloat_A_ImplicitCast);
	void OnHandPoseUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool bIsLeftHand, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, float CallFunc_GetCurrentWeight_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void OnLeftHandPoseUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void OnRightHandPoseUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void ArmsOverride_Alpha(bool DisableOverride_Conditions, double CallFunc_SelectFloat_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput_2, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, double CallFunc_TurnOff_Override_byCurveName_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_3, double CallFunc_TurnOff_Override_byCurveName_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1);
	void Update_SprintAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, class UAnimSequence* K2Node_Select_Default, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue);
	void Update_StrafeRunCycleAnimation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, class UAnimSequence* K2Node_Select_Default, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue);
	void EquipHand_isLeft(bool IsLeftHand, bool* Equip, enum class EEquipAnimationType* AnimType, enum class EEquipAnimationType* CachedAnimType, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool K2Node_Select_Default, bool Temp_bool_Variable_2, enum class EEquipAnimationType K2Node_Select_Default_1, enum class EEquipAnimationType K2Node_Select_Default_2);
	void Reset_IdleBreakerTimerDelay(const struct FRandomStream& RandomStream, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void Set_IdleState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void ResetIdleBreakTimer();
	bool CanPlayIdleBreak(bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnHandAnimBecomeRelevant(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool bIsLeftHand, bool CallFunc_EquipHand_isLeft_Equip, enum class EEquipAnimationType CallFunc_EquipHand_isLeft_AnimType, enum class EEquipAnimationType CallFunc_EquipHand_isLeft_CachedAnimType, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, double CallFunc_SelectFloat_ReturnValue, class UAnimSequenceBase* CallFunc_GetSequencePure_ReturnValue, const struct FSequencePlayerReference& CallFunc_SetPlayRate_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct FSequencePlayerReference& CallFunc_SetStartPosition_ReturnValue, const struct FSequencePlayerReference& CallFunc_SetAccumulatedTime_ReturnValue, float CallFunc_SetPlayRate_PlayRate_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_SetStartPosition_StartPosition_ImplicitCast, float CallFunc_SetAccumulatedTime_Time_ImplicitCast);
	void OnLeftHandAnimBecomeRelevant(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void OnRightHandAnimBecomeRelevant(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void Update_IdleBreakerExplicitTime(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* CallFunc_GetSequence_ReturnValue, float CallFunc_GetAccumulatedTime_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_AdvanceTime_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast);
	void Set_IdleBreakerExplicitTime(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAnimSequence* CallFunc_Array_Get_Item, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue);
	void Update_LocomotionState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FRotator& Temp_struct_Variable, const struct FRotator& Temp_struct_Variable_1, const struct FRotator& Temp_struct_Variable_2, const struct FRotator& Temp_struct_Variable_3, const struct FRotator& Temp_struct_Variable_4, enum class ELocomotionState Temp_byte_Variable, const struct FRotator& Temp_struct_Variable_5, const struct FRotator& Temp_struct_Variable_6, const struct FRotator& Temp_struct_Variable_7, const struct FRotator& Temp_struct_Variable_8, const struct FRotator& Temp_struct_Variable_9, enum class ELocomotionState Temp_byte_Variable_1, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct FRotator& K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, const struct FRotator& K2Node_Select_Default_1, double CallFunc_MapRangeClamped_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, const struct FRotator& CallFunc_REase_ReturnValue, float CallFunc_REase_Alpha_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast_1);
	void LookAt_NPC(const struct FVector& LookAtTarget_LastTick, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_Current_ImplicitCast, float K2Node_VariableSet_LookAt_BlendWeight_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_LookAt_BlendWeight_ImplicitCast_1);
	void Update_FingersPropOverride_Alpha(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, double K2Node_VariableSet_LFingers_Prop_Alpha_ImplicitCast, double K2Node_VariableSet_RFingers_Prop_Alpha_ImplicitCast);
	void Update_SpringIK_Alpha(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, double IK_AlphaTarget, enum class ELocomotionState Temp_byte_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, enum class EMeleeStance Temp_byte_Variable_1, double Temp_real_Variable_5, double Temp_real_Variable_6, enum class ERangedStance Temp_byte_Variable_2, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, enum class EMeleeStance Temp_byte_Variable_3, double Temp_real_Variable_10, double Temp_real_Variable_11, enum class ERangedStance Temp_byte_Variable_4, double Temp_real_Variable_12, double Temp_real_Variable_13, double Temp_real_Variable_14, enum class ERangedStance Temp_byte_Variable_5, double Temp_real_Variable_15, double Temp_real_Variable_16, double Temp_real_Variable_17, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double K2Node_Select_Default, double CallFunc_SelectFloat_ReturnValue, double K2Node_Select_Default_1, double K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, double Temp_real_Variable_18, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, double Temp_real_Variable_19, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_4, double Temp_real_Variable_20, double CallFunc_FInterpTo_ReturnValue_2, enum class EMeleeStance Temp_byte_Variable_6, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_8, double K2Node_Select_Default_4, double K2Node_Select_Default_5, double CallFunc_SelectFloat_ReturnValue_9, double CallFunc_FInterpTo_ReturnValue_4, double K2Node_Select_Default_6, double CallFunc_SelectFloat_ReturnValue_10, double CallFunc_FInterpTo_ReturnValue_5, double CallFunc_SelectFloat_ReturnValue_11);
	void Set_BlockingAnimations(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTagEx_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_3, class UAnimSequence* CallFunc_BP_GetAnimationByTagEx_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTagEx_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_4, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_5, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_6, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_7, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_3, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Smooth_AimOffsetAlpha_byMontageTag(const struct FGameplayTag& MontageTag, double AimOffsetTarget, class UAnimMontage* CallFunc_BP_GetMontageByTag_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_Montage_GetPosition_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast);
	void Set_WalkState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Update_IdleState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, bool CallFunc_IsStateBlendingOut_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_CanPlayIdleBreak_ReturnValue, float CallFunc_GetDeltaTime_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_IdleBreaker_Timer_ImplicitCast);
	enum class ECardinalDirection GetOppositeCardinalDirection(enum class ECardinalDirection CurrentDirection);
	void Update_AccelerationData(const struct FVector& W_Acceleration2D, const struct FVector& PivotDirection2D, const struct FVector& LocalAcceleration2D, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, enum class ECardinalDirection CallFunc_SelectCardinalDirectionFromAngle_Direction, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_VSizeXYSquared_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast);
	void Update_VelocityData(const struct FVector& W_CharVelocity_2D, const struct FVector& L_CharVelocity_2D, bool WasMovingLastUpdate, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_VSizeXYSquared_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ECardinalDirection CallFunc_SelectCardinalDirectionFromAngle_Direction, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, enum class ECardinalDirection CallFunc_SelectCardinalDirectionFromAngle_Direction_1, bool CallFunc_Vector_IsZero_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, double K2Node_VariableSet_Char_DirectionAngle_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast, double K2Node_VariableSet_MaxSpeed_ImplicitCast);
	void Update_RotationData(float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void Update_LocationData(const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSizeXY_ReturnValue);
	void Update_StartAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FVector2D& Play_Rate_Clamp, double StrideWarping_BlendInDuration_Scaled, double StrideWarping_BlendInStart_Offset, double ExplicitTime, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, float CallFunc_GetAccumulatedTime_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_AdvanceTimeByDistanceMatching_ReturnValue, double K2Node_VariableSet_ExplicitTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_AdvanceTimeByDistanceMatching_DistanceTraveled_ImplicitCast, float K2Node_VariableSet_StrideWarping_Start_Alpha_ImplicitCast);
	void Set_StartAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, class UAnimSequence* Temp_object_Variable, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, enum class ELocomotionState Temp_byte_Variable, const struct FAnimStruct_CardinalDirection& Temp_struct_Variable, bool Temp_bool_Variable, enum class ECardinalDirection Temp_byte_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class ELocomotionState Temp_byte_Variable_2, const struct FAnimStruct_CardinalDirection& K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, class UAnimSequence* K2Node_Select_Default_3, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void Process_Turn_Yaw_Curve(double PreviousTurnYawCurveValue, double PreviousTurnYawCurveValue_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue_1, double CallFunc_Abs_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void UpdateStartState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, enum class ERootYawOffsetMode Temp_byte_Variable, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, bool CallFunc_IsStateBlendingOut_ReturnValue, bool Temp_bool_Variable, enum class ERootYawOffsetMode Temp_byte_Variable_1, enum class ERootYawOffsetMode Temp_byte_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, enum class ERootYawOffsetMode K2Node_Select_Default, enum class ERootYawOffsetMode K2Node_Select_Default_1);
	void Set_StartState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	double GetPredictedStopDistance(const struct FVector& CallFunc_PredictGroundMovementStopLocation_ReturnValue, double CallFunc_VSizeXY_ReturnValue);
	void Update_StopAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, double DistanceToMatch, double CallFunc_GetPredictedStopDistance_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct FSequenceEvaluatorReference& CallFunc_AdvanceTime_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_ShouldDistanceMatchStop_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1, bool CallFunc_ConvertToSequenceEvaluatorPure_Result_1, const struct FSequenceEvaluatorReference& CallFunc_DistanceMatchToTarget_ReturnValue, float CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast);
	bool ShouldDistanceMatchStop(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Set_StopAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, enum class ECardinalDirection Temp_byte_Variable, const struct FSequenceEvaluatorReference& CallFunc_DistanceMatchToTarget_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class ECardinalDirection Temp_byte_Variable_1, bool CallFunc_ShouldDistanceMatchStop_ReturnValue, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue);
	void Set_RootYawOffset(double InRootYawOffset, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_NormalizeAxis_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_ClampAngle_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast);
	void UpdateRootYawOffset(double InDeltaTime, const struct FFloatSpringState& RootYawOffsetSpringState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast);
	void Update_StopState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, bool CallFunc_IsStateBlendingOut_ReturnValue);
	void Update_FlinchAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetDeltaTime_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void Set_FlinchAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void Update_LookAt(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetDeltaTime_ReturnValue, bool CallFunc_BooleanNOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, float K2Node_VariableSet_LookAt_Alpha_ImplicitCast);
	void Update_PlayStopAnim_Condition(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Update_IsAiming(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FCachedAnimStateData& Idle_CacheAnimStateData, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast_1);
	void Set_EquipmentData(class UEquipmentManagerComponent* EquipmentManagerComponent, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsRightHandEquipped_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_IsLeftHandEquipped_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue);
	void Update_RunCycleAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, enum class ECardinalDirection Temp_byte_Variable, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue);
	void Update_PlayStartAnim_Condition(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Update_WalkCycleAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, enum class ECardinalDirection Temp_byte_Variable, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue);
	void SelectCardinalDirectionFromAngle(double Angle, double DeadZone, enum class ECardinalDirection CurrentDirection, bool UseCurrentDirection, enum class ECardinalDirection* Direction, double BwdDeadZone, double FwdDeadZone, double AbsAngle, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime, double CallFunc_UpdateRootYawOffset_InDeltaTime_ImplicitCast);
	void Set_TurnInPlace_Rotation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float K2Node_VariableSet_TurnInPlace_Angle_ImplicitCast);
	void Select_TurnInPlace_Anim(double TurnInPlace_Direction, class UAnimSequenceBase** Result, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UAnimSequenceBase* K2Node_Select_Default, class UAnimSequenceBase* K2Node_Select_Default_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class UAnimSequenceBase* K2Node_Select_Default_2);
	void Update_TurnInPlaceRecovery_Anim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, class UAnimSequenceBase* CallFunc_Select_TurnInPlace_Anim_Result, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, double CallFunc_Select_TurnInPlace_Anim_TurnInPlace_Direction_ImplicitCast);
	void Update_TurnInPlace_Anim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* CallFunc_Select_TurnInPlace_Anim_Result, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1, bool CallFunc_ConvertToSequenceEvaluatorPure_Result_1, float CallFunc_GetDeltaTime_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Select_TurnInPlace_Anim_TurnInPlace_Direction_ImplicitCast, float CallFunc_SetExplicitTime_Time_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void Set_TurnInPlace_Anim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue);
	void MontageIsPlaying_Rules(bool CallFunc_Montage_IsActive_ReturnValue, bool CallFunc_IsAnyMontagePlaying_ReturnValue);
	void Set_References(class AActor* CallFunc_GetOwningActor_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UHexPlayerMovementComponent* K2Node_DynamicCast_AsHex_Player_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1);
	void Set_TurnInPlace(class ALOTF2Character* Character, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetFocusDirection_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Signed2DAngleDegreesVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsTurnRateByDefaultEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double K2Node_VariableSet_AngleToFocusDirection_ImplicitCast);
	void Set_PlayRate(double Speed, class FName MoveData_Curve, float CallFunc_GetCurveValue_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_FClamp_Value_ImplicitCast);
	void Set_StopMoving(double StopSpeed, double StopAngle);
	void Set_Animations(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_3, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_2, TArray<class UAnimSequence*>& CallFunc_BP_GetAnimationsArrayByTag_outAnimations, bool CallFunc_BP_GetAnimationsArrayByTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_4, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_5, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_6, class UAnimSequence* CallFunc_BP_GetAnimationByTagEx_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_4, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_7, class UBlendSpace* CallFunc_BP_GetAimOffsetBlendSpaceByTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_8, bool CallFunc_IsValid_ReturnValue, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_9, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_10, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_5, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_6, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_11, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_12, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_7, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_8, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_13, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_14, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_9, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_10, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_15, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_2, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_11, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_16, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_17, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_12, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_13, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_18, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_19, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_14, class UBlendSpace* CallFunc_BP_GetAimOffsetBlendSpaceByTag_ReturnValue_1, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_3, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_4, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_20, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue_1, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_5, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_21, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_22, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_15, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_16, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_23, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_24, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_17, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_18, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_25, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_19);
	void IsValid_Check(const struct FGameplayTag& AnimationTag, bool AnimSequence, bool AnimBS, bool* IsValid, bool AnimTag_IsValid, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Set_MiscAlpha(class ALOTF2Character* LOTF2_Character, bool bDisableEquipmentAlphas, class UObject* LockTarget, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, double CallFunc_SelectFloat_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_StateMachine_IsStateRelevant_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_StateMachine_IsStateRelevant_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, float CallFunc_Conv_BoolToFloat_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	void Set_BlockingMode(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void Set_CombatModes(class ALOTF2Character* Character, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECharacterBodyType CallFunc_GetBodyType_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, enum class EMeleeStance CallFunc_GetMeleeStance_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_3, bool CallFunc_HasMatchingGameplayTag_ReturnValue_3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_4, bool CallFunc_HasMatchingGameplayTag_ReturnValue_4, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_5, bool CallFunc_HasMatchingGameplayTag_ReturnValue_5, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_6, bool CallFunc_HasMatchingGameplayTag_ReturnValue_6, enum class EStanceType CallFunc_GetStance_ReturnValue, const struct FAimOffset& CallFunc_GetAimOffset_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
	void Set_LadderMode(class ALOTF2Character* Character, bool CallFunc_GetLadderSprinting_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetLadderInitialCharacterHeight_ReturnValue, float CallFunc_BreakVector3f_X, float CallFunc_BreakVector3f_Y, float CallFunc_BreakVector3f_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_Percent_FloatFloat_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void Set_InputValues(class UCharacterMovementComponent* CharacterMovement, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_VSize_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, double CallFunc_VSize_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, double K2Node_VariableSet_Char_DirectionAngle_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast, double K2Node_VariableSet_MaxSpeed_ImplicitCast);
	void Set_LocomotionState(class UHexPlayerMovementComponent* PlayerMovement, double SprintThreshold, double RunThreshold, double MinSprintSpeed, double MinRunSpeed, double MinWalkSpeed, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_ContainsRotationRateOverride_ReturnValue, float CallFunc_StateMachine_GetGlobalWeight_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_StateMachine_GetGlobalWeight_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, float CallFunc_AddRotationRateOverride_value_ImplicitCast, float CallFunc_SetRotationRateOverrideValue_value_ImplicitCast);
	void OnValueChanged_3580D63C4B1C13E1EC356794308C7580(float Value, bool bDone);
	void OnValueChanged_D9E169074DA81834BBC1C0ACC3BFA3A8(float Value, bool bDone);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_78E45AB5489CDC831840C0AAA3818900();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_FD9BA4C04D1BBCA7AF9A0197C40EE17C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RigidBody_7963BD2544717E66AA38408929C5B665();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RigidBody_ACEA63FE4D9AE60EE2E981AA80516900();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyCurve_3DACE39743A1BE894EF8AC969368BC61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A107633A41373C1C670B47AFA5B5994C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_E662A91049CE0233915385A09E85CEF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_85B73A0A480F4DC92F274FB0189F0920();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BAA3A9F44AA6438182E23799A88AC318();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3ADF00104475F17E7102F09FE85A7D85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_509D66644B452D8712A6FA84BB4D5ED3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A467AD0447E9AAF816403993F6044D81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6656BA90437385574D1EE0821422B59A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8FA976644D3337DE5982FC9B6D9084C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_047803574C73863D4002AA8F53624FF1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8DA5BB44492B882604A7BB8F524686D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6287E24D4E081F76271C869408706CE3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5398461D48D4EBFFCEAF278B729E6428();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_AF78774D494BE76C4BB78EA7105ED842();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3334299E410A764B27BAEEA6CA5BB6A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_639EFAA94D248CA8516570830EF7E91E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BF4BDBB74F241CC437865DA854E92B87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7F7544474D943DA67ABBB18F22B61AAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F14D4FFA4319B322CC2D35912D666E9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_66D8F4844AA2EDA684F0B596DC849F3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_29CA238843069EE569E15ABB515AFFD8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_FB1699F94C2DA451A5DEAEAC776A2201();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_DCCB3E494B07A08F68987CAF42998486();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_39C8B8A14CA2E64CD29EFD8D88C974A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B58F9058474133DDE41299A0F3DEBC95();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D5BA13E44ECE70B2A63A63A87C8787EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_29D92C48462B25FFBDD8B980A41BAE20();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_4A9E033D425142492CBFCA959BE763F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5B387C0D44EE60031EE82D8EBF961110();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_99DCC1464984E53628769DA1C1114703();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_DBFDF9F047A934478C53EF8A6F5A1978();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_EE72B02C4BB16F9CB05E5D97295F9F55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A45507154D443D48E0962FB1E95E0CAE();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void RealmChangeHandler(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm);
	void BlueprintBeginPlay();
	void OnCharacterAnimLayerStackChanged_Event();
	void AnimNotify_FlinchStateStarted();
	void BlueprintPostEvaluateAnimation();
	void OnFinishAddComponent_Event(class AActor* PActor, class UActorComponent* PComponent);
	void OnRagdollStateChanged(enum class ERagdollState NewState);
	void OnRequestComponentVisuals_Event(enum class EGameRealm GameRealm);
	void OnLeftHandEquippedChanged(bool bHandEquipped);
	void OnRightHandEquippedChanged(bool bHandEquipped);
	void AnimNotify_RightEquipAnimStarted();
	void AnimNotify_LeftEquipAnimStarted();
	void AnimNotify_RightEquipmentAnimationFinished();
	void AnimNotify_LeftEquipmentAnimationFinished();
	void OnStanceTypeChanged(enum class EStanceType OldStance, enum class EStanceType NewStance);
	void AnimNotify_Reset_SpringIK();
	void ExecuteUbergraph_ABP_Player(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_IsKnockdown_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue_6, bool CallFunc_NotEqual_ByteByte_ReturnValue_7, bool CallFunc_NotEqual_ByteByte_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, enum class ETweenType Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue_9, enum class ETweenType Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ETweenType Temp_byte_Variable_2, enum class ETweenType Temp_byte_Variable_3, bool Temp_bool_Variable_1, float Temp_real_Variable, bool Temp_bool_Variable_2, float K2Node_CustomEvent_value_1, bool K2Node_CustomEvent_bDone_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_real_Variable_1, bool Temp_bool_Variable_3, float K2Node_CustomEvent_value, bool K2Node_CustomEvent_bDone, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsKnockdown_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_IsClosed_Variable_4, float CallFunc_GetCurveValue_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_14, bool CallFunc_EqualEqual_ByteByte_ReturnValue_15, float CallFunc_GetCurveValue_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_16, bool CallFunc_EqualEqual_ByteByte_ReturnValue_17, bool CallFunc_EqualEqual_ByteByte_ReturnValue_18, bool Temp_bool_IsClosed_Variable_5, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable_4, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, float K2Node_Event_DeltaTimeX, bool CallFunc_EqualEqual_ByteByte_ReturnValue_19, bool CallFunc_EqualEqual_ByteByte_ReturnValue_20, class AActor* CallFunc_GetOwningActor_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_5, bool CallFunc_IsValid_ReturnValue_2, class UDualRealmStateComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_21, int32 CallFunc_SelectInt_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UStanceComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class URagdollComponent_BP_C* CallFunc_GetComponentByClass_ReturnValue_2, class UCharacterConfigComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, const struct FCharacterStatsInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_22, bool Temp_bool_IsClosed_Variable_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_23, bool CallFunc_EqualEqual_ByteByte_ReturnValue_24, bool Temp_bool_IsClosed_Variable_7, bool Temp_bool_Has_Been_Initd_Variable_6, bool Temp_bool_Has_Been_Initd_Variable_7, bool Temp_bool_Has_Been_Initd_Variable_8, bool Temp_bool_IsClosed_Variable_8, bool Temp_bool_IsClosed_Variable_9, bool Temp_bool_Has_Been_Initd_Variable_9, bool Temp_bool_Has_Been_Initd_Variable_10, class AActor* K2Node_CustomEvent_pActor, class UActorComponent* K2Node_CustomEvent_pComponent, class URagdollComponent_BP_C* K2Node_DynamicCast_AsRagdoll_Component_BP, bool K2Node_DynamicCast_bSuccess, enum class ERagdollState K2Node_CustomEvent_NewState, bool CallFunc_EqualEqual_ByteByte_ReturnValue_25, bool K2Node_SwitchEnum_CmpSuccess, enum class EGameRealm K2Node_CustomEvent_gameRealm, bool CallFunc_EqualEqual_ByteByte_ReturnValue_26, bool CallFunc_EqualEqual_ByteByte_ReturnValue_27, bool K2Node_CustomEvent_bHandEquipped_1, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_CustomEvent_bHandEquipped, int32 CallFunc_SelectInt_ReturnValue_1, enum class EStanceType K2Node_CustomEvent_oldStance, enum class EStanceType K2Node_CustomEvent_newStance, bool Temp_bool_IsClosed_Variable_10, float CallFunc_GetCurveValue_ReturnValue_4, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, double CallFunc_MakeLiteralDouble_ReturnValue, float CallFunc_GetEquipAnimationsPlayrate_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_8, bool Temp_bool_IsClosed_Variable_11, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_11, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_7, double CallFunc_FMax_ReturnValue, bool Temp_bool_IsClosed_Variable_12, bool Temp_bool_Has_Been_Initd_Variable_12, bool CallFunc_NotEqual_ByteByte_ReturnValue_10, double CallFunc_SelectFloat_ReturnValue_1, enum class ETweenType K2Node_Select_Default, double CallFunc_FMax_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_11, class UHexDelayerAction* CallFunc_DelayValue_ReturnValue, enum class ETweenType K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_11, double CallFunc_SelectFloat_ReturnValue_2, class UHexDelayerAction* CallFunc_DelayValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_12, double K2Node_VariableSet_L_Arm_Equipment_Alpha_ImplicitCast, double K2Node_VariableSet_R_Arm_Equipment_Alpha_ImplicitCast, float CallFunc_Array_Set_Item_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_1, double K2Node_VariableSet_Delta_Time_X_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_DelayValue_startValue_ImplicitCast, float CallFunc_DelayValue_targetValue_ImplicitCast, float CallFunc_DelayValue_startValue_ImplicitCast_1, float CallFunc_DelayValue_targetValue_ImplicitCast_1);
};

}

