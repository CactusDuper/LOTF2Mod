#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1048 (0x1070 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_IK_DigiLegs_Solver.RigVMMemory_Work
class URigVMMemory_Work : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Parent__IO; // 0x60(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FD7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_CachedChild; // 0x70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_CachedParent; // 0x80(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_Parent__IO; // 0x90(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_1_CachedChild; // 0xA0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_1_CachedParent; // 0xB0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_8_3_2_2_Transform;       // 0xC0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_8_3_2_2_CachedIndex;     // 0x120(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_2_1_2_2_CachedIndex; // 0x130(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_8_3_3_2_Transform;       // 0x140(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_8_3_3_2_CachedIndex;     // 0x1A0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_4_2_1_3_2_CachedIndex; // 0x1B0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRelativeTransformForItem_Parent__IO; // 0x1C0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRelativeTransformForItem_CachedChild; // 0x1D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRelativeTransformForItem_CachedParent; // 0x1E0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRelativeTransformForItem_1_Parent__IO; // 0x1F0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRelativeTransformForItem_1_CachedChild; // 0x200(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetRelativeTransformForItem_1_CachedParent; // 0x210(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___Process_FootPlanting_MathFloatMul_Result; // 0x220(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatRemap_3_Result; // 0x224(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_RigUnit_GetTransform_4_1_1_Transform; // 0x230(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_RigUnit_GetTransform_4_1_1_Item__IO; // 0x290(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_RigUnit_GetTransform_4_1_1_CachedIndex; // 0x2A0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___Process_FootPlanting_MathFloatRemap_3_Value; // 0x2B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatRemap_3_1_Result; // 0x2B4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatRemap_3_1_Value; // 0x2B8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LocalVariable__RigVMModel___Process_FootPlanting_AimingNormal_Alpha; // 0x2C0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_RigUnit_AlphaInterp_4_Result; // 0x2C8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_2_Result; // 0x2CC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_SphereTraceByTraceChannel_HitLocation; // 0x2D0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorAdd_6_Result; // 0x2E8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_RigUnit_GetTransform_4_Transform; // 0x300(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_RigUnit_GetTransform_4_Item__IO; // 0x360(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_RigUnit_GetTransform_4_CachedIndex; // 0x370(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorAdd_6_A; // 0x380(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorSub_3_Result; // 0x398(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___Process_FootPlanting_Select_6_Result; // 0x3B0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___Process_FootPlanting_Select_6_Index;  // 0x3B4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        IntEquals : 1;                                     // Mask: 0x1, PropSize: 0x10x3B8(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_288 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        RigVMModel___Process_FootPlanting_SphereTraceByTraceChannel_bHit : 1; // Mask: 0x1, PropSize: 0x10x3B9(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_289 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3FE9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_SphereTraceByTraceChannel_HitNormal; // 0x3C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_2_A; // 0x3D8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_2_B; // 0x3DC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputScaleBiasClamp>          RigVMModel___Process_FootPlanting_RigUnit_AlphaInterp_4_ScaleBiasClamp; // 0x3E0(0x10)(Edit, EditConst, NonTransactional)
	double                                       LocalVariable__RigVMModel___Process_FootPlanting_GroundOffsetPosition; // 0x3F0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LocalVariable__RigVMModel___Process_FootPlanting_HitNormal; // 0x3F8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_MathQuaternionSlerp_Result; // 0x410(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_MathQuaternionMul_Result; // 0x430(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_AimBoneMath_Result; // 0x450(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_GetRelativeTransformForItem_RelativeTransform; // 0x4B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_GetRelativeTransformForItem_Child__IO; // 0x510(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_GetRelativeTransformForItem_CachedChild; // 0x520(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_GetRelativeTransformForItem_CachedParent; // 0x530(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootPlanting_AimBoneMath_Primary__IO; // 0x540(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_AimBoneMath_PrimaryCachedSpace; // 0x588(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_AimBoneMath_SecondaryCachedSpace; // 0x598(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3FEC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Process_FootPlanting_MathQuaternionMul_A; // 0x5B0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_MathQuaternionMul_B; // 0x5D0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathQuaternionSlerp_T; // 0x5F0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_Result; // 0x5F4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_A;  // 0x5F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_B;  // 0x5FC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_SetTransform_Value__IO; // 0x600(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_SetTransform_CachedIndex; // 0x660(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatMul_Result; // 0x670(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatRemap_3_Result; // 0x674(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FEE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_1_RigUnit_GetTransform_4_1_1_Transform; // 0x680(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_1_RigUnit_GetTransform_4_1_1_Item__IO; // 0x6E0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_RigUnit_GetTransform_4_1_1_CachedIndex; // 0x6F0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatRemap_3_Value; // 0x700(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatRemap_3_1_Result; // 0x704(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatRemap_3_1_Value; // 0x708(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LocalVariable__RigVMModel___Process_FootPlanting_1_AimingNormal_Alpha; // 0x710(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_RigUnit_AlphaInterp_4_Result; // 0x718(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_2_Result; // 0x71C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_1_SphereTraceByTraceChannel_HitLocation; // 0x720(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_1_MathVectorAdd_6_Result; // 0x738(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_1_RigUnit_GetTransform_4_Transform; // 0x750(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_1_RigUnit_GetTransform_4_Item__IO; // 0x7B0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_RigUnit_GetTransform_4_CachedIndex; // 0x7C0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootPlanting_1_MathVectorAdd_6_A; // 0x7D0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_1_MathVectorSub_3_Result; // 0x7E8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___Process_FootPlanting_1_Select_6_Result; // 0x800(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___Process_FootPlanting_1_Select_6_Index; // 0x804(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Process_FootPlanting_1_SphereTraceByTraceChannel_bHit : 1; // Mask: 0x1, PropSize: 0x10x808(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_28A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3FF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_1_SphereTraceByTraceChannel_HitNormal; // 0x810(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_2_A; // 0x828(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_2_B; // 0x82C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputScaleBiasClamp>          RigVMModel___Process_FootPlanting_1_RigUnit_AlphaInterp_4_ScaleBiasClamp; // 0x830(0x10)(Edit, EditConst, NonTransactional)
	double                                       LocalVariable__RigVMModel___Process_FootPlanting_1_GroundOffsetPosition; // 0x840(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LocalVariable__RigVMModel___Process_FootPlanting_1_HitNormal; // 0x848(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_MathQuaternionSlerp_Result; // 0x860(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_MathQuaternionMul_Result; // 0x880(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_1_AimBoneMath_Result; // 0x8A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_1_GetRelativeTransformForItem_RelativeTransform; // 0x900(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_1_GetRelativeTransformForItem_Child__IO; // 0x960(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_GetRelativeTransformForItem_CachedChild; // 0x970(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_GetRelativeTransformForItem_CachedParent; // 0x980(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootPlanting_1_AimBoneMath_Primary__IO; // 0x990(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_AimBoneMath_PrimaryCachedSpace; // 0x9D8(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_AimBoneMath_SecondaryCachedSpace; // 0x9E8(0x10)(Edit, EditConst, NonTransactional)
	uint8                                        Pad_3FF5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_MathQuaternionMul_A; // 0xA00(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_MathQuaternionMul_B; // 0xA20(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathQuaternionSlerp_T; // 0xA40(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_Result; // 0xA44(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_A; // 0xA48(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_B; // 0xA4C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_1_SetTransform_Value__IO; // 0xA50(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_SetTransform_CachedIndex; // 0xAB0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_3_Transform;     // 0xAC0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_3_CachedIndex;   // 0xB20(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorAdd_5_Result;               // 0xB30(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorAdd_5_A;                    // 0xB48(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_AlphaInterp_Result;           // 0xB60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_Result;                // 0xB64(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_A;                     // 0xB68(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_B;                     // 0xB6C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputScaleBiasClamp>          RigVMModel___RigUnit_AlphaInterp_ScaleBiasClamp;   // 0xB70(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorAdd_5_B__IO;                // 0xB80(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_1_1_Value__IO;   // 0xBA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_1_CachedIndex; // 0xC00(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_Transform;     // 0xC10(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_CachedIndex;   // 0xC70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_CachedIndex;   // 0xC80(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_3_Transform; // 0xC90(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_3_CachedIndex; // 0xCF0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_2_CachedIndex; // 0xD00(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_1_Transform;   // 0xD10(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_1_CachedIndex; // 0xD70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_2_1_CachedIndex; // 0xD80(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_Transform;     // 0xD90(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_CachedIndex;   // 0xDF0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_CachedControlIndex;  // 0xE00(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_Transform;   // 0xE10(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_CachedIndex; // 0xE70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_CachedControlIndex; // 0xE80(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_Transform; // 0xE90(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_CachedIndex; // 0xEF0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_1_CachedControlIndex; // 0xF00(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_1_Transform; // 0xF10(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0xF70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_1_1_CachedControlIndex; // 0xF80(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_2_Transform; // 0xF90(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_2_CachedIndex; // 0xFF0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_1_2_CachedControlIndex; // 0x1000(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_2_Parent__IO; // 0x1010(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_2_CachedChild; // 0x1020(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_2_CachedParent; // 0x1030(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_1_Parent__IO; // 0x1040(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_1_1_CachedChild; // 0x1050(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_1_1_CachedParent; // 0x1060(0x10)(Edit, EditConst, NonTransactional)

	static class UClass* StaticClass();
	static class URigVMMemory_Work* GetDefaultObj();

};

// 0x440 (0x468 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_IK_DigiLegs_Solver.RigVMMemory_Literal
class URigVMMemory_Literal : public URigVMMemoryStorage
{
public:
	struct FVector                               LocalVariableDefault__Process_FootPlanting_HitNormal__Const; // 0x28(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       LocalVariableDefault__Process_FootPlanting_GroundOffsetPosition__Const; // 0x40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       LocalVariableDefault__Process_FootPlanting_AimingNormal_Alpha__Const; // 0x48(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Child__Const; // 0x50(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Parent__Const; // 0x5C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetRelativeTransformForItem_bParentInitial__Const : 1; // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_28B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3FFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_Value__Const; // 0x70(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SetRelativeTransformForItem_Weight__Const; // 0xD0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetRelativeTransformForItem_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10xD4(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_28C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3FFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_Child__Const; // 0xD8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_Parent__Const; // 0xE4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_1_Value__Const; // 0xF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_2_1_2_2_Item__Const; // 0x150(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___RigUnit_SetTransform_4_2_1_2_2_Space__Const; // 0x15C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4000[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___GetTransform_8_3_2_2_Item__Const;     // 0x160(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_4_2_1_3_2_Item__Const; // 0x16C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_8_3_3_2_Item__Const;     // 0x178(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRelativeTransformForItem_Child__Const; // 0x184(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRelativeTransformForItem_Parent__Const; // 0x190(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4002[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetRelativeTransformForItem_Value__Const; // 0x1A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRelativeTransformForItem_1_Child__Const; // 0x200(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetRelativeTransformForItem_1_Parent__Const; // 0x20C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatRemap_3_SourceMinimum__Const; // 0x218(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatRemap_3_SourceMaximum__Const; // 0x21C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatRemap_3_TargetMaximum__Const; // 0x220(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatRemap_3_1_SourceMinimum__Const; // 0x224(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatRemap_3_1_SourceMaximum__Const; // 0x228(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4004[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorAdd_6_B__Const; // 0x230(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorSub_3_B__Const; // 0x248(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___Process_FootPlanting_Select_6_Values_0__Const; // 0x260(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___Process_FootPlanting_Select_6_Values_1__Const; // 0x261(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4005[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        _;                                                 // 0x264(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FInputRange                           RigVMModel___Process_FootPlanting_RigUnit_AlphaInterp_4_InRange__Const; // 0x268(0x8)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___Process_FootPlanting_RigUnit_AlphaInterp_4_InterpSpeedIncreasing__Const; // 0x270(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_SetTransform_Item__Const; // 0x274(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_GetRelativeTransformForItem_Child__Const; // 0x280(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_GetRelativeTransformForItem_Parent__Const; // 0x28C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootPlanting_AimBoneMath_Primary__Const; // 0x298(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootPlanting_AimBoneMath_Secondary__Const; // 0x2E0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	uint8                                        Pad_400A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimBone_DebugSettings        RigVMModel___Process_FootPlanting_AimBoneMath_DebugSettings__Const; // 0x330(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_1_SetTransform_Item__Const; // 0x3A0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_1_1_Item__Const; // 0x3AC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_400B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_1_1_Value__Const; // 0x3C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorAdd_5_B__Const;             // 0x420(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_AlphaInterp_InterpSpeedIncreasing__Const; // 0x438(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_AlphaInterp_InterpSpeedDecreasing__Const; // 0x43C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_Control__Const;      // 0x440(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_Control__Const;    // 0x448(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_1_Control__Const;  // 0x450(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_1_1_Control__Const; // 0x458(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_1_2_Control__Const; // 0x460(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal* GetDefaultObj();

};

// 0x48 (0x5A8 - 0x560)
// ControlRigBlueprintGeneratedClass CR_IK_DigiLegs_Solver.CR_IK_DigiLegs_Solver_C
class UCR_IK_DigiLegs_Solver_C : public UControlRig
{
public:
	double                                       GroundFoot_L;                                      // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GroundFoot_R;                                      // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IsInUmbral;                                        // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_400D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CharSpeed;                                         // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Feet_PositionalOffset;                             // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LKnee;                                             // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RKnee;                                             // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LFoot;                                             // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RFoot;                                             // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_IK_DigiLegs_Solver_C* GetDefaultObj();

};

}


