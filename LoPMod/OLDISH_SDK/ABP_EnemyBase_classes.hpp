#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x63CC (0x699C - 0x5D0)
// AnimBlueprintGeneratedClass ABP_EnemyBase.ABP_EnemyBase_C
class UABP_EnemyBase_C : public UBaseEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData_EB __AnimBlueprintMutables;                           // 0x5D8(0x53)(HasGetValueTypeHash)
	uint8                                        Pad_3742[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x630(0x8)(None)
	struct FAnimSubsystemInstance_NodeRelevancy  AnimBlueprintExtension_NodeRelevancy;              // 0x638(0xA8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x6E0(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_18;                             // 0x6E8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_16;                  // 0x708(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_17;                             // 0x7D0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_15;                  // 0x7F0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_16;                             // 0x8B8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_14;                  // 0x8D8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_15;                             // 0x9A0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_13;                  // 0x9C0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_14;                             // 0xA88(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_12;                  // 0xAA8(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_13;                             // 0xB70(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_11;                  // 0xB90(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_12;                             // 0xC58(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_10;                  // 0xC78(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_11;                             // 0xD40(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9;                   // 0xD60(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_10;                             // 0xE28(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8;                   // 0xE48(0xC8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0xF10(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1038(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2;             // 0x1160(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x1180(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9;                              // 0x11A0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_37;                 // 0x11C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_36;                 // 0x11E8(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_8;                   // 0x1210(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_7;                   // 0x12D8(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0x13A0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_22;                      // 0x13E8(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4;                   // 0x1408(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35;                 // 0x1450(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34;                 // 0x1478(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_33;                 // 0x14A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32;                 // 0x14C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_31;                 // 0x14F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x1518(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x1540(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x1568(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x1590(0x28)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2;                 // 0x15B8(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_21;                      // 0x15F8(0x20)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x1618(0x40)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_20;                      // 0x1658(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x1678(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_19;                      // 0x16C0(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x16E0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_18;                      // 0x1728(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x1748(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17;                      // 0x1790(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x17B0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_16;                      // 0x17F8(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_8;                      // 0x1818(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x18E0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_15;                      // 0x1928(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7;                      // 0x1948(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x1A10(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_6;                      // 0x1A30(0xC8)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization_2;                   // 0x1AF8(0x100)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8;                              // 0x1BF8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7;                   // 0x1C18(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7;                              // 0x1CE0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6;                   // 0x1D00(0xC8)(None)
	struct FAnimNode_OrientationWarping          AnimGraphNode_OrientationWarping;                  // 0x1DC8(0x198)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x1F60(0x20)(None)
	struct FAnimNode_StrideWarping               AnimGraphNode_StrideWarping;                       // 0x1F80(0x238)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_1;                             // 0x21B8(0xF8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x22B0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6;                              // 0x22D0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5;                   // 0x22F0(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5;                              // 0x23B8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4;                   // 0x23D8(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_1;                        // 0x24A0(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4;                              // 0x2910(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3;                   // 0x2930(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3;                              // 0x29F8(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_2;                   // 0x2A18(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x2AE0(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2B00(0xC8)(None)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK;                               // 0x2BC8(0xF8)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2CC0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2CE0(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x2D00(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2D20(0xC8)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig;                          // 0x2DE8(0x470)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3258(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7;                              // 0x3278(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x32C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x32E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x3310(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x3338(0x28)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0x3360(0x100)(None)
	struct FAnimNode_BlendSpaceEvaluator         AnimGraphNode_BlendSpaceEvaluator_1;               // 0x3460(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x34D8(0x20)(None)
	struct FAnimNode_BlendSpaceEvaluator         AnimGraphNode_BlendSpaceEvaluator;                 // 0x34F8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x3570(0x20)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0x3590(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_5;                      // 0x35B0(0xC8)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x3678(0xC8)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8;                  // 0x3740(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x3820(0x108)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_7;                  // 0x3928(0xE0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6;                              // 0x3A08(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x3A50(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x3B58(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_6;                  // 0x3B80(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x3C60(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_6;                   // 0x3C88(0xC8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x3D50(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x3D78(0x28)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization_1;                   // 0x3DA0(0x100)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x3EA0(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x3F10(0x48)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_5;                   // 0x3F58(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x4020(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_4;                      // 0x4040(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x4108(0x70)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x4178(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3;                      // 0x4198(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x4260(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x4368(0x108)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_1;                      // 0x4470(0x10)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x4480(0xC8)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x4548(0x40)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_5;                              // 0x4588(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x45D0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x45F8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x4700(0x28)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_4;                   // 0x4728(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4;                              // 0x47F0(0x48)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_3;                   // 0x4838(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x4900(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x4A08(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_5;                  // 0x4A30(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x4B10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x4B38(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x4B60(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x4B88(0x28)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot_1;                      // 0x4BB0(0x90)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x4C40(0x20)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x4C60(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x4CA8(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x4CC8(0x28)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x4CF0(0x90)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x4D80(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x4DA0(0xC8)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x4E68(0xC8)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0x4F30(0x48)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x4F78(0xC8)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x5040(0x10)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x5050(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x5098(0x48)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_2;                   // 0x50E0(0xC8)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x51A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x51D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x51F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x5220(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x5248(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x5270(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x5298(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x52C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x52E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x5310(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x5338(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x5360(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x53A8(0x20)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x53C8(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x5410(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x5438(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x5460(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x5488(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x54B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x54D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x5500(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x5528(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x5550(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4;                  // 0x5578(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x5658(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x5680(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x56C8(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x5710(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x57F0(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x5838(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x5858(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x5880(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x5960(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x5988(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x59D0(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x5A18(0xE0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5AF8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x5B40(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x5B60(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x5B88(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x5BA8(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x5BD0(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x5BF0(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0x5CB8(0xC8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x5D80(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x5DA0(0xC8)(None)
	struct FAnimNode_Inertialization             AnimGraphNode_Inertialization;                     // 0x5E68(0x100)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x5F68(0x108)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x6070(0xE0)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0x6150(0xC8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x6218(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x6320(0x28)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_LinkedAnimGraph;                     // 0x6348(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x6400(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x6428(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x6450(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x6498(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x65A0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x65C8(0x28)(None)
	double                                       AimingPitch;                                       // 0x65F0(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimingAlpha;                                       // 0x65F8(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_InMoveSpeed_8273BA0444C21360FFFC97B4784FF9FA; // 0x6600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_InMoveAngle_8273BA0444C21360FFFC97B4784FF9FA; // 0x6608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_12;                          // 0x6610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3743[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       InMoveSpeed;                                       // 0x6618(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InMoveAngle;                                       // 0x6620(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_LookAt_AlphaBlend_B4DBD4634F3610BC35070AA28C469B65; // 0x6628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Use_HeadOnly_B4DBD4634F3610BC35070AA28C469B65; // 0x6630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3744[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               __CustomProperty_LooAt_TargetLocation_B4DBD4634F3610BC35070AA28C469B65; // 0x6638(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_HeadOnly;                                      // 0x6650(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3745[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LookAt_Alpha;                                      // 0x6658(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x6660(0x18)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_CharSpeed_415363FF4ADB82E976FE5B899691EC23; // 0x6678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __CustomProperty_IsInUmbral_415363FF4ADB82E976FE5B899691EC23; // 0x6680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3746[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EnemySpeed;                                        // 0x6688(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IsInUmbral;                                        // 0x6690(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3747[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_PropertyAccess_11;                          // 0x6698(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_10;                          // 0x66B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3748[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 K2Node_PropertyAccess_9;                           // 0x66B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                K2Node_PropertyAccess_8;                           // 0x66C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_PropertyAccess_7;                           // 0x66C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_PropertyAccess_6;                           // 0x66D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_PropertyAccess_5;                           // 0x66E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_PropertyAccess_4;                           // 0x66F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3749[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_PropertyAccess_3;                           // 0x66F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_PropertyAccess_2;                           // 0x6710(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               K2Node_PropertyAccess_1;                           // 0x6728(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_PropertyAccess;                             // 0x6740(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __CustomProperty_Use_HeadOnly_C9664D094F50519D36A2CBBB68DC08DE; // 0x6758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       __CustomProperty_LookAt_Alpha_C9664D094F50519D36A2CBBB68DC08DE; // 0x6760(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               __CustomProperty_TargetLocation_C9664D094F50519D36A2CBBB68DC08DE; // 0x6768(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Eyes_Blinking_0FB9360046439526F66C8FA066CDB1CB; // 0x6780(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Expression_Pain_0FB9360046439526F66C8FA066CDB1CB; // 0x6788(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Expression_Anger_0FB9360046439526F66C8FA066CDB1CB; // 0x6790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_Facial_Alpha_0FB9360046439526F66C8FA066CDB1CB; // 0x6798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_R_Arm_Layering_Alpha_EBE47FAE49F7931AF75AF48D88923E51; // 0x67A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_L_Arm_Layering_Alpha_EBE47FAE49F7931AF75AF48D88923E51; // 0x67A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_UpperBody_Layering_Alpha_EBE47FAE49F7931AF75AF48D88923E51; // 0x67B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_AimingPitch_B5C6021844AA7CE25FDBC7AA448FDAA0; // 0x67B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_AimingAlpha_B5C6021844AA7CE25FDBC7AA448FDAA0; // 0x67C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __CustomProperty_EnemySpeed_E21204804DB19B69002174AF90F5C5F3; // 0x67C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __CustomProperty_IsInUmbral_E21204804DB19B69002174AF90F5C5F3; // 0x67D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MoveAngle_0;                                       // 0x67D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MoveSpeed_0;                                       // 0x67E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           BS_MovementBlocking;                               // 0x67E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           BS_Movement;                                       // 0x67F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           BS_HurtFlinch;                                     // 0x67F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     AS_BlockTransitionIn;                              // 0x6800(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     AS_BlockTransitionOut;                             // 0x6808(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         OutBlkTrans_AnimFound;                             // 0x6810(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InBlkTrans_AnimFound;                              // 0x6811(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Aiming_Yaw_0;                                      // 0x6818(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Aiming_Pitch_0;                                    // 0x6820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Is_InUmbral;                                       // 0x6828(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinAimingPitch_0;                                  // 0x6830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxAimingPitch_0;                                  // 0x6838(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimingOffset_Alpha;                                // 0x6840(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECardinalDirection                LocalVelocityDirection_0;                          // 0x6844(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimStruct_CardinalDirection         WalkAnim_CardinalDirection;                        // 0x6848(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAnimStruct_CardinalDirection         RunAnim_CardinalDirection;                         // 0x6868(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     AS_Idle;                                           // 0x6888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultRunSpeed_0;                                 // 0x6890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseBaseMovement;                                   // 0x6898(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRagdollEnded;                                     // 0x6899(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_374F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       R_Arm_Override_Alpha_0;                            // 0x68A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       L_Arm_Override_Alpha_0;                            // 0x68A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       UpperBody_Layering_Alpha;                          // 0x68B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LArm_Layering_Alpha_0;                             // 0x68B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RArm_Layering_Alpha_0;                             // 0x68C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     AS_Falling;                                        // 0x68C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Flinch_Alpha_0;                                    // 0x68D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FlinchAnimTime;                                    // 0x68D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LookAtPlayer_Location;                             // 0x68E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookAtPlayer_Alpha;                                // 0x68F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NPC_Enable_LookAtPlayer;                           // 0x6900(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3750[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                NPC_LookAtTarget;                                  // 0x6908(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FacialExpression_Pain_Value;                       // 0x6910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FacialExpression_Anger_Value;                      // 0x6914(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FacialExpression_Blinking_Value;                   // 0x6918(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SystemicFacial_Alpha;                              // 0x691C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLookAt_UseHeadOnly;                               // 0x6920(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayIdleBreaker;                                   // 0x6921(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3751[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimSequenceBase*>             AS_IdleBreaker;                                    // 0x6928(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        IdleBreaker_Index;                                 // 0x6938(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IdleBreaker_DelayTimer;                            // 0x693C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Idle_Breaker_Timer;                                // 0x6940(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNPC;                                            // 0x6944(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3752[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       OverlayBuffer_BlendWeight;                         // 0x6948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Apply_Overlay;                                     // 0x6950(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3753[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     AS_Overlay_Idle;                                   // 0x6958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     AS_AlternateIdle;                                  // 0x6960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldTransitionToAlternateIdle;                  // 0x6968(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3754[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     AS_AlternateIdleTransitionIn;                      // 0x6970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     AS_AlternateIdleTransitionOut;                     // 0x6978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         InAlternateIdleTrans_AnimFound;                    // 0x6980(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutAlternateIdleTrans_AnimFound;                   // 0x6981(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3755[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     AS_Death;                                          // 0x6988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Disable_IdleBreaker;                               // 0x6990(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3756[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Dialogue_FacialOverride_Alpha;                     // 0x6994(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDead;                                           // 0x6998(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableLookAtCR;                                    // 0x6999(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bASOverlayIdleValid;                               // 0x699A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bASAlternateIdleValid;                             // 0x699B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_EnemyBase_C* GetDefaultObj();

	void HandsIK_Override(const struct FPoseLink& InputPose, double HandsIK_Alpha, double SpringStrength, double SpringDamping, struct FPoseLink* HandsIK_Override);
	void LanternOverlay(const struct FPoseLink& LanternLayeringPose, enum class ELocomotionState CurrentLocomotionState_L, struct FPoseLink* LanternOverlay);
	void RangedOverlay(const struct FPoseLink& RangedLayeringPose, enum class ELocomotionState CurrentLocomotionState_R, struct FPoseLink* RangedOverlay);
	void MagicOverlay(const struct FPoseLink& MagicLayeringPose, enum class ELocomotionState CurrentLocomotionState_M, struct FPoseLink* MagicOverlay);
	void DualWieldOverlay(const struct FPoseLink& DualWieldLayeringPose, enum class ELocomotionState CurrentLocomotionState_DW, struct FPoseLink* DualWieldOverlay);
	void SecondaryOverlay(const struct FPoseLink& SecondaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_S, struct FPoseLink* SecondaryOverlay);
	void PrimaryOverlay(const struct FPoseLink& PrimaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_P, double R_Hand_Unequipped_Alpha, double L_Hand_Unequipped_Alpha, struct FPoseLink* PrimaryOverlay);
	void AL_PlayerFlails(const struct FPoseLink& InPose_Flails, struct FPoseLink* AL_PlayerFlails);
	void AL_AimingOffset(const struct FPoseLink& UpperBody_Additive, double AimingAlpha, double AimingPitch, double AimingYaw, class UBlendSpace* AimOffset_BS, struct FPoseLink* AL_AimingOffset);
	void Locomotion(struct FPoseLink* Locomotion);
	void Locomotion_Blocking(const struct FPoseLink& InPose, struct FPoseLink* Locomotion_Blocking);
	void Warping_Override(const struct FPoseLink& LocomotionInput, double InMoveAngle, double InMoveSpeed, struct FPoseLink* Warping_Override);
	void Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override);
	void LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override);
	void CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override);
	void Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override);
	void FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP);
	void FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void Update_AlternateIdleAnimation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, float K2Node_Select_Default, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_GetCurveValueWithDefault_OutValue_1, bool CallFunc_GetCurveValueWithDefault_ReturnValue_1, float CallFunc_GetCurveValueWithDefault_OutValue_2, bool CallFunc_GetCurveValueWithDefault_ReturnValue_2, double CallFunc_Look_At_Target_Location_Function_DeltaTime_ImplicitCast, double CallFunc_Look_At_Target_Location_Function_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double K2Node_VariableSet_L_Arm_Override_Alpha_0_ImplicitCast, double K2Node_VariableSet_R_Arm_Override_Alpha_0_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_SystemicFacial_Alpha_ImplicitCast);
	void Look_At_Target_Location_Function(const struct FVector& TargetLocation, bool UseLookAtBone, double InterpSpeed, double DeltaTime, float LookAt_YawAmount, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Abs_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_BP_GetCurveValue_OutValue, bool CallFunc_BP_GetCurveValue_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_BP_GetCurveValue_OutValue_1, bool CallFunc_BP_GetCurveValue_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_Abs_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Abs_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast_1);
	void Reset_IdleBreakerTimerDelay(double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void Update_IdleBreakerAnimTime(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* CallFunc_GetSequence_ReturnValue, float CallFunc_GetAccumulatedTime_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_AdvanceTime_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast);
	bool CanPlayIdleBreak(bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Update_IdleState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, bool CallFunc_IsStateBlendingOut_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_CanPlayIdleBreak_ReturnValue, float CallFunc_GetDeltaTime_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_Idle_Breaker_Timer_ImplicitCast);
	void ResetIdleBreakTimer();
	void Set_Idle_State(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void Set_IdleBreakerAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAnimSequenceBase* CallFunc_Array_Get_Item, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue);
	void Update_MovementBSAnimation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FBlendSpacePlayerReference& CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer, bool CallFunc_ConvertToBlendSpacePlayerPure_Result, const struct FBlendSpacePlayerReference& CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue);
	void Update_IdleAnimation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue);
	void LookAt_Target(class AActor* Target_Actor, class AActor* AI_Actor, class FName BoneToLookAt, double InterpSpeed, float LookAt_YawAmount, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BP_GetCurveValue_OutValue, bool CallFunc_BP_GetCurveValue_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, float CallFunc_BP_GetCurveValue_OutValue_1, bool CallFunc_BP_GetCurveValue_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1);
	void Update_FlinchAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetDeltaTime_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void Set_FlinchAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node);
	void Set_AlphaValues();
	void UpdateMiscData();
	void SelectCardinalDirectionFromAngle(double Angle, double DeadZone, enum class ECardinalDirection CurrentDirection, bool UseCurrentDirection, enum class ECardinalDirection* Direction, double BwdDeadZone, double FwdDeadZone, double AbsAngle, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1);
	void Update_LocomotionAnimation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, enum class EHexCardinalDirection Temp_byte_Variable, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, enum class EHexCardinalDirection Temp_byte_Variable_1, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue);
	void Set_Animations(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_3, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_2, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_4, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_5, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_4, TArray<class UAnimSequence*>& CallFunc_BP_GetAnimationsArrayByTag_outAnimations, bool CallFunc_BP_GetAnimationsArrayByTag_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_6, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_7, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_8, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_6, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_9, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_10, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_8, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_11, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_12, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_10, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_11, class UAnimSequence* K2Node_Select_Default, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_13, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_14, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_12, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_13, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_15, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_16, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_14, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_15, const struct FHexCardinalDirectionAnimationStruct& K2Node_MakeStruct_HexCardinalDirectionAnimationStruct, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection, class UAnimSequence* K2Node_Select_Default_3, const struct FHexCardinalDirectionAnimationStruct& K2Node_MakeStruct_HexCardinalDirectionAnimationStruct_1, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_17, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_18, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_16, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_19, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_20, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue_1, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue_2);
	void Set_AimingOffset(float CallFunc_GetCurveValue_ReturnValue, class AActor* CallFunc_GetTargetedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast);
	void Set_CombatStance();
	void Set_InputValues(bool WasMovingLastUpdate, const struct FVector& L_CharVelocity_2D, const struct FRotator& W_CharRotation, const struct FVector& W_CharVelocity_2D);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_0EC29FCA4C65DA6F4DF54FA131543E2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_42C0C1C1491583484BAA3ABE40556318();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_C155F3A14C7C70E9EC70B696E150D452();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_A91762C346846913348F039CF66D8083();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_9B38F75B47C72E5B584C73914648D4D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_A74532FF44365A8B40A47EBC0B9F1147();
	void BlueprintInitializeAnimation();
	void RealmChangeHandler(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm);
	void OnCharacterAnimLayerStackChanged_Event_0();
	void BlueprintBeginPlay();
	void AnimNotify_FlinchStateStarted();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_8D82B07E45A271165CE017B7D4917C13();
	void OnFinishAddComponent_Event(class AActor* PActor, class UActorComponent* PComponent);
	void OnRagdollStateChanged(enum class ERagdollState NewState);
	void LookAtPlayer(bool EnableLookAt, class AActor* TargetMesh);
	void AnimNotify_DisableBreaker();
	void AnimNotify_EnableBreaker();
	void OnRagdollCurveStateChanged(enum class ERagdollCurveState RagdollCurveState);
	void ExecuteUbergraph_ABP_EnemyBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDualRealmStateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class URagdollComponent_BP_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UCharacterConfigComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, const struct FCharacterStatsInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, class AActor* K2Node_CustomEvent_pActor, class UActorComponent* K2Node_CustomEvent_pComponent, class URagdollComponent_BP_C* K2Node_DynamicCast_AsRagdoll_Component_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, enum class ERagdollState K2Node_CustomEvent_NewState, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool K2Node_CustomEvent_EnableLookAt, class AActor* K2Node_CustomEvent_TargetMesh, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, enum class ERagdollCurveState K2Node_CustomEvent_RagdollCurveState, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast);
};

}


