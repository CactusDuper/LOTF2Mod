#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x5E8 - 0x560)
// ControlRigBlueprintGeneratedClass CR_RhogarHound_IKs.CR_RhogarHound_IKs_C
class UCR_RhogarHound_IKs_C : public UControlRig
{
public:
	double                                       GroundFoot_L;                                      // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GroundFoot_R;                                      // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GroundHand_R;                                      // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       GroundHand_L;                                      // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PositionalOffset;                                  // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IsInUmbral;                                        // 0x588(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3262[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ShoulderLength;                                    // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ArmLength;                                         // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LegLength;                                         // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              FloorNormalRotation;                               // 0x5A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bEnableFeetIK;                                     // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3264[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAt_Target;                                     // 0x5C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookAt_Alpha;                                      // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCR_RhogarHound_IKs_C* GetDefaultObj();

};

// 0x7C8 (0x7F0 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_RhogarHound_IKs.RigVMMemory_Literal
class URigVMMemory_Literal_RHI : public URigVMMemoryStorage
{
public:
	struct FVector                               LocalVariableDefault__Process_FootPlanting_HitNormal__Const; // 0x28(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       LocalVariableDefault__Process_FootPlanting_GroundOffsetPosition__Const; // 0x40(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LocalVariableDefault__PreIK_AdjustLocalControls_Slope__Const; // 0x48(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___SetTransform_3_Item__Const;           // 0x60(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EBoneGetterSetterMode             RigVMModel___SetTransform_3_Space__Const;          // 0x6C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetTransform_3_bInitial__Const : 1;   // Mask: 0x1, PropSize: 0x10x6D(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_246 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_326A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___GetTransform_4_Item__Const;           // 0x70(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___SetTransform_3_Weight__Const;         // 0x7C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___SetTransform_3_bPropagateToChildren__Const : 1; // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_247 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_326D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___AimRoot_ToFloorNormal_AimItem_Item__Const; // 0x84(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_AimItem_Target               RigVMModel___AimRoot_ToFloorNormal_AimItem_Primary__Const; // 0x90(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FVector                               RigVMModel___AimRoot_ToFloorNormal_MathVectorAdd_6_B__Const; // 0xD8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___AimRoot_ToFloorNormal_MathVectorSub_3_B__Const; // 0xF0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___AimRoot_ToFloorNormal_Select_6_Values_0__Const; // 0x108(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___AimRoot_ToFloorNormal_Select_6_Values_1__Const; // 0x109(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        _;                                                 // 0x10C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___AimRoot_ToFloorNormal_SphereTraceByTraceChannel_Radius__Const; // 0x110(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3270[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___AimRoot_ToFloorNormal_AimItem_Secondary__Const; // 0x118(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigUnit_AimBone_DebugSettings        RigVMModel___AimRoot_ToFloorNormal_AimItem_DebugSettings__Const; // 0x160(0x70)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FRigElementKey                        RigVMModel___SetTransform_4_Item__Const;           // 0x1D0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_5_Item__Const;           // 0x1DC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_2_Item__Const;         // 0x1E8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_1_2_Item__Const;         // 0x1F4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_2_1_Item__Const;         // 0x200(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_2_1_Item__Const;         // 0x20C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_1_1_Item__Const;       // 0x218(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_1_1_1_Item__Const;       // 0x224(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Child__Const; // 0x230(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_Parent__Const; // 0x23C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3272[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_Value__Const; // 0x250(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_3_Child__Const; // 0x2B0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_3_Parent__Const; // 0x2BC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3273[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_3_Value__Const; // 0x2D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_2_Child__Const; // 0x330(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_2_Parent__Const; // 0x33C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3274[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_2_Value__Const; // 0x350(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_1_Child__Const; // 0x3B0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetRelativeTransformForItem_1_1_Parent__Const; // 0x3BC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3275[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___SetRelativeTransformForItem_1_1_Value__Const; // 0x3D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_1_1_1_Item__Const;     // 0x430(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_1_1_1_1_Item__Const;     // 0x43C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_1_1_1_1_Item__Const;   // 0x448(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_1_1_1_1_1_Item__Const;   // 0x454(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_1_1_1_2_Item__Const;   // 0x460(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_1_1_1_1_2_Item__Const;   // 0x46C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatGreater_B__Const;            // 0x478(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatLess_1_B__Const;             // 0x47C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_2_True__Const;                     // 0x480(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_2_False__Const;                    // 0x484(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_1_False__Const;                    // 0x488(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_1_1_False__Const;                  // 0x48C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_False__Const;                      // 0x490(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorAdd_6_B__Const; // 0x498(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_RigUnit_VisualDebugVectorItemSpace_Mode__Const; // 0x4B0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_327E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          RigVMModel___Process_FootPlanting_RigUnit_VisualDebugVectorItemSpace_Color__Const; // 0x4B4(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_RigUnit_VisualDebugVectorItemSpace_Thickness__Const; // 0x4C4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_RigUnit_VisualDebugVectorItemSpace_Space__Const; // 0x4C8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_RigUnit_VisualDebugVectorItemSpace_1_Mode__Const; // 0x4D4(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3280[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          RigVMModel___Process_FootPlanting_RigUnit_VisualDebugVectorItemSpace_1_Color__Const; // 0x4D8(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_RigUnit_VisualDebugVectorItemSpace_2_Mode__Const; // 0x4E8(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3281[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          RigVMModel___Process_FootPlanting_RigUnit_VisualDebugVectorItemSpace_2_Color__Const; // 0x4EC(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FInputRange                           RigVMModel___Process_FootPlanting_RigUnit_AlphaInterp_4_InRange__Const; // 0x4FC(0x8)(Edit, EditConst, NonTransactional, NoDestructor)
	float                                        RigVMModel___Process_FootPlanting_RigUnit_AlphaInterp_4_InterpSpeedIncreasing__Const; // 0x504(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_AccumulateFloatLerp_Blend__Const; // 0x508(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_SetTransform_Item__Const; // 0x50C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3282[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_SetTransform_Value__Const; // 0x520(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_AccumulateVectorLerp_InitialValue__Const; // 0x580(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_AccumulateVectorLerp_Blend__Const; // 0x598(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3284[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootPlanting_AimBoneMath_Secondary__Const; // 0x5A0(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_1_RigUnit_VisualDebugVectorItemSpace_Mode__Const; // 0x5E8(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_1_RigUnit_VisualDebugVectorItemSpace_1_Mode__Const; // 0x5E9(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_1_RigUnit_VisualDebugVectorItemSpace_2_Mode__Const; // 0x5EA(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3286[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_1_SetTransform_Item__Const; // 0x5EC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_2_MathVectorAdd_6_B__Const; // 0x5F8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_2_RigUnit_VisualDebugVectorItemSpace_Mode__Const; // 0x610(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3289[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_2_MathVectorSub_3_B__Const; // 0x618(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_2_RigUnit_VisualDebugVectorItemSpace_1_Mode__Const; // 0x630(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_2_RigUnit_VisualDebugVectorItemSpace_2_Mode__Const; // 0x631(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_2_SetTransform_Item__Const; // 0x634(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_1_1_RigUnit_VisualDebugVectorItemSpace_Mode__Const; // 0x640(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_1_1_RigUnit_VisualDebugVectorItemSpace_1_Mode__Const; // 0x641(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ERigUnitVisualDebugPointMode      RigVMModel___Process_FootPlanting_1_1_RigUnit_VisualDebugVectorItemSpace_2_Mode__Const; // 0x642(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        RigVMModel___Process_FootPlanting_1_1_SetTransform_Item__Const; // 0x644(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_4_1_Item__Const;         // 0x650(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_2_1_Item__Const;       // 0x65C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_2_1_1_Item__Const;       // 0x668(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___SetTransform_1_1_1_2_Item__Const;     // 0x674(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_SetTransform_1_1_Item__Const; // 0x680(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3290[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_1_1_Value__Const; // 0x690(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorAdd_5_B__Const;             // 0x6F0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___PBIK_Root__Const;                     // 0x708(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_Effectors__Const;                // 0x710(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_2_1_1_2_Item__Const; // 0x720(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___RigUnit_GetTransform_Item__Const;     // 0x72C(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPBIKBoneSetting>              RigVMModel___PBIK_BoneSettings__Const;             // 0x738(0x10)(Edit, EditConst, NonTransactional)
	TArray<class FName>                          RigVMModel___PBIK_ExcludedBones__Const;            // 0x748(0x10)(Edit, EditConst, NonTransactional)
	struct FPBIKSolverSettings                   RigVMModel___PBIK_Settings__Const;                 // 0x758(0x10)(Edit, EditConst, NonTransactional, NoDestructor)
	struct FPBIKDebug                            RigVMModel___PBIK_Debug__Const;                    // 0x768(0x8)(Edit, EditConst, NonTransactional, NoDestructor)
	class FString                                RigVMModel___SetControlVisibility_1_Pattern__Const; // 0x770(0x10)(Edit, ZeroConstructor, EditConst, NonTransactional, HasGetValueTypeHash)
	TArray<struct FRigElementKey>                RigVMModel___ArrayIterator_1_Array__Const;         // 0x780(0x10)(Edit, EditConst, NonTransactional)
	class FName                                  RigVMModel___SetControlOffset_Control__Const;      // 0x790(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_Control__Const;    // 0x798(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_1_1_Control__Const; // 0x7A0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_1_2_Control__Const; // 0x7A8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_1_1_1_Control__Const; // 0x7B0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  RigVMModel___SetControlOffset_1_1_2_1_Control__Const; // 0x7B8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_3_1_Item__Const;         // 0x7C0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_3_1_2_Item__Const;       // 0x7CC(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_3_1_3_Item__Const;       // 0x7D8(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigElementKey                        RigVMModel___GetTransform_3_1_2_1_Item__Const;     // 0x7E4(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Literal_RHI* GetDefaultObj();

};

// 0x2950 (0x2978 - 0x28)
// RigVMMemoryStorageGeneratorClass CR_RhogarHound_IKs.RigVMMemory_Work
class URigVMMemory_Work_RHI : public URigVMMemoryStorage
{
public:
	struct FControlRigExecuteContext             ExecuteContext_;                                   // 0x28(0x38)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_4_Transform;             // 0x60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_4_CachedIndex;           // 0xC0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_3_CachedIndex;           // 0xD0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___AimRoot_ToFloorNormal_SphereTraceByTraceChannel_HitNormal; // 0xE0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___AimRoot_ToFloorNormal_MathVectorAdd_6_Result; // 0xF8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___AimRoot_ToFloorNormal_RigUnit_GetTransform_4_Transform; // 0x110(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___AimRoot_ToFloorNormal_RigUnit_GetTransform_4_CachedIndex; // 0x170(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___AimRoot_ToFloorNormal_MathVectorAdd_6_A; // 0x180(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___AimRoot_ToFloorNormal_MathVectorSub_3_Result; // 0x198(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___AimRoot_ToFloorNormal_Select_6_Result; // 0x1B0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3297[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___AimRoot_ToFloorNormal_Select_6_Index; // 0x1B4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        IntEquals : 1;                                     // Mask: 0x1, PropSize: 0x10x1B8(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_248 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        RigVMModel___AimRoot_ToFloorNormal_SphereTraceByTraceChannel_bHit : 1; // Mask: 0x1, PropSize: 0x10x1B9(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_249 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3298[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___AimRoot_ToFloorNormal_SphereTraceByTraceChannel_HitLocation; // 0x1C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRigUnit_AimItem_Target               RigVMModel___AimRoot_ToFloorNormal_AimItem_Primary__IO; // 0x1D8(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___AimRoot_ToFloorNormal_AimItem_CachedItem; // 0x220(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimRoot_ToFloorNormal_AimItem_PrimaryCachedSpace; // 0x230(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimRoot_ToFloorNormal_AimItem_SecondaryCachedSpace; // 0x240(0x10)(Edit, EditConst, NonTransactional)
	struct FRotator                              RigVMModel___AimRoot_ToFloorNormal_MathQuaternionToRotator_Result; // 0x250(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor)
	uint8                                        Pad_329C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___AimRoot_ToFloorNormal_GetRelativeTransformForItem_RelativeTransform; // 0x270(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___AimRoot_ToFloorNormal_GetRelativeTransformForItem_CachedChild; // 0x2D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___AimRoot_ToFloorNormal_GetRelativeTransformForItem_CachedParent; // 0x2E0(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___AimRoot_ToFloorNormal_MathQuaternionToRotator_Value; // 0x2F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_5_Transform;             // 0x310(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_5_CachedIndex;           // 0x370(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_4_CachedIndex;           // 0x380(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_2_Transform;           // 0x390(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_2_CachedIndex;         // 0x3F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_2_CachedIndex;         // 0x400(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_1_Transform;           // 0x410(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_1_CachedIndex;         // 0x470(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_2_1_CachedIndex;         // 0x480(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_1_1_Transform;         // 0x490(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_1_CachedIndex;       // 0x4F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_1_1_CachedIndex;       // 0x500(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_CachedChild; // 0x510(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_CachedParent; // 0x520(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_3_CachedChild; // 0x530(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_3_CachedParent; // 0x540(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_2_CachedChild; // 0x550(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_2_CachedParent; // 0x560(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_1_1_CachedChild; // 0x570(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetRelativeTransformForItem_1_1_CachedParent; // 0x580(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_1_1_1_Transform;       // 0x590(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_1_1_CachedIndex;     // 0x5F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_1_1_1_CachedIndex;     // 0x600(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_1_1_1_1_Transform;     // 0x610(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_1_1_1_CachedIndex;   // 0x670(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_1_1_1_1_CachedIndex;   // 0x680(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_1_1_1_2_Transform;     // 0x690(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_1_1_2_CachedIndex;   // 0x6F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_1_1_1_2_CachedIndex;   // 0x700(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___If_1_Result;                          // 0x710(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___MathFloatGreater_Result : 1;          // Mask: 0x1, PropSize: 0x10x714(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24A : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_329F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___MathFloatAbs_Result;                  // 0x718(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAbs_Value;                   // 0x71C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_2_Result;                          // 0x720(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___MathFloatLess_1_Result : 1;           // Mask: 0x1, PropSize: 0x10x724(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_32A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RigVMModel___MathFloatLess_1_A;                    // 0x728(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_Result;                            // 0x72C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___If_1_1_Result;                        // 0x730(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_AccumulateFloatLerp_Result; // 0x734(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_RigUnit_AlphaInterp_4_Result; // 0x738(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_2_Result; // 0x73C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Process_FootPlanting_If_Result;       // 0x740(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Process_FootPlanting_SphereTraceByTraceChannel_bHit : 1; // Mask: 0x1, PropSize: 0x10x748(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_32A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorAdd_6_Result; // 0x750(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_RigUnit_GetTransform_4_Transform; // 0x770(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_RigUnit_GetTransform_4_CachedIndex; // 0x7D0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorAdd_6_A; // 0x7E0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorAdd_6_B__IO; // 0x7F8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorSub_3_Result; // 0x810(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_MathVectorSub_3_B__IO; // 0x828(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___Process_FootPlanting_Select_6_Result; // 0x840(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RigVMModel___Process_FootPlanting_Select_6_Index;  // 0x844(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_SphereTraceByTraceChannel_HitLocation; // 0x848(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_SphereTraceByTraceChannel_HitNormal; // 0x860(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Process_FootPlanting_If_True;         // 0x878(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Process_FootPlanting_If_False;        // 0x880(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_2_A; // 0x888(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputScaleBiasClamp>          RigVMModel___Process_FootPlanting_RigUnit_AlphaInterp_4_ScaleBiasClamp; // 0x890(0x10)(Edit, EditConst, NonTransactional)
	double                                       LocalVariable__RigVMModel___Process_FootPlanting_GroundOffsetPosition; // 0x8A0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_AccumulateFloatLerp_InitialValue; // 0x8A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___Process_FootPlanting_AccumulateFloatLerp_AccumulatedValue; // 0x8B0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               LocalVariable__RigVMModel___Process_FootPlanting_HitNormal; // 0x8C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Process_FootPlanting_MathQuaternionSlerp_Result; // 0x8E0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_MathQuaternionMul_Result; // 0x900(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_AimBoneMath_Result; // 0x920(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_RigUnit_GetTransform_4_1_Transform; // 0x980(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_RigUnit_GetTransform_4_1_CachedIndex; // 0x9E0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootPlanting_AccumulateVectorLerp_Result; // 0x9F0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___Process_FootPlanting_AccumulateVectorLerp_AccumulatedValue; // 0xA08(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootPlanting_AimBoneMath_Primary__IO; // 0xA18(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_AimBoneMath_PrimaryCachedSpace; // 0xA60(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_AimBoneMath_SecondaryCachedSpace; // 0xA70(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Process_FootPlanting_MathQuaternionMul_A; // 0xA80(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_MathQuaternionMul_B; // 0xAA0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_Result; // 0xAC0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_A;  // 0xAC4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_MathFloatAdd_B;  // 0xAC8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_SetTransform_Value__IO; // 0xAD0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_SetTransform_CachedIndex; // 0xB30(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___Process_FootPlanting_1_AccumulateFloatLerp_Result; // 0xB40(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_RigUnit_AlphaInterp_4_Result; // 0xB44(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_2_Result; // 0xB48(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___Process_FootPlanting_1_If_Result;     // 0xB50(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Process_FootPlanting_1_SphereTraceByTraceChannel_bHit : 1; // Mask: 0x1, PropSize: 0x10xB58(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24D : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_32A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_1_MathVectorAdd_6_Result; // 0xB60(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_1_RigUnit_GetTransform_4_Transform; // 0xB80(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_RigUnit_GetTransform_4_CachedIndex; // 0xBE0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootPlanting_1_MathVectorAdd_6_A; // 0xBF0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_1_MathVectorAdd_6_B__IO; // 0xC08(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_1_MathVectorSub_3_Result; // 0xC20(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_1_MathVectorSub_3_B__IO; // 0xC38(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___Process_FootPlanting_1_Select_6_Result; // 0xC50(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_1_SphereTraceByTraceChannel_HitLocation; // 0xC58(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_1_SphereTraceByTraceChannel_HitNormal; // 0xC70(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Process_FootPlanting_1_If_True;       // 0xC88(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Process_FootPlanting_1_If_False;      // 0xC90(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_2_A; // 0xC98(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputScaleBiasClamp>          RigVMModel___Process_FootPlanting_1_RigUnit_AlphaInterp_4_ScaleBiasClamp; // 0xCA0(0x10)(Edit, EditConst, NonTransactional)
	double                                       LocalVariable__RigVMModel___Process_FootPlanting_1_GroundOffsetPosition; // 0xCB0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_AccumulateFloatLerp_InitialValue; // 0xCB8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___Process_FootPlanting_1_AccumulateFloatLerp_AccumulatedValue; // 0xCC0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               LocalVariable__RigVMModel___Process_FootPlanting_1_HitNormal; // 0xCD0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_MathQuaternionSlerp_Result; // 0xCF0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_MathQuaternionMul_Result; // 0xD10(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_1_AimBoneMath_Result; // 0xD30(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_1_RigUnit_GetTransform_4_1_Transform; // 0xD90(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_RigUnit_GetTransform_4_1_CachedIndex; // 0xDF0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootPlanting_1_AccumulateVectorLerp_Result; // 0xE00(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___Process_FootPlanting_1_AccumulateVectorLerp_AccumulatedValue; // 0xE18(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootPlanting_1_AimBoneMath_Primary__IO; // 0xE28(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_AimBoneMath_PrimaryCachedSpace; // 0xE70(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_AimBoneMath_SecondaryCachedSpace; // 0xE80(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_MathQuaternionMul_A; // 0xE90(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_MathQuaternionMul_B; // 0xEB0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_Result; // 0xED0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_A; // 0xED4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_MathFloatAdd_B; // 0xED8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_1_SetTransform_Value__IO; // 0xEE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_SetTransform_CachedIndex; // 0xF40(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___Process_FootPlanting_2_AccumulateFloatLerp_Result; // 0xF50(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_2_RigUnit_AlphaInterp_4_Result; // 0xF54(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_2_MathFloatAdd_2_Result; // 0xF58(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___Process_FootPlanting_2_If_Result;     // 0xF60(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Process_FootPlanting_2_SphereTraceByTraceChannel_bHit : 1; // Mask: 0x1, PropSize: 0x10xF68(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24E : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_32B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_2_MathVectorAdd_6_Result; // 0xF70(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_2_RigUnit_GetTransform_4_Transform; // 0xF90(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_2_RigUnit_GetTransform_4_CachedIndex; // 0xFF0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootPlanting_2_MathVectorAdd_6_A; // 0x1000(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_2_MathVectorSub_3_Result; // 0x1018(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___Process_FootPlanting_2_Select_6_Result; // 0x1030(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_2_SphereTraceByTraceChannel_HitLocation; // 0x1038(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_2_SphereTraceByTraceChannel_HitNormal; // 0x1050(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Process_FootPlanting_2_If_True;       // 0x1068(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Process_FootPlanting_2_If_False;      // 0x1070(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_2_MathFloatAdd_2_A; // 0x1078(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputScaleBiasClamp>          RigVMModel___Process_FootPlanting_2_RigUnit_AlphaInterp_4_ScaleBiasClamp; // 0x1080(0x10)(Edit, EditConst, NonTransactional)
	double                                       LocalVariable__RigVMModel___Process_FootPlanting_2_GroundOffsetPosition; // 0x1090(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_2_AccumulateFloatLerp_InitialValue; // 0x1098(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___Process_FootPlanting_2_AccumulateFloatLerp_AccumulatedValue; // 0x10A0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               LocalVariable__RigVMModel___Process_FootPlanting_2_HitNormal; // 0x10B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Process_FootPlanting_2_MathQuaternionSlerp_Result; // 0x10D0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_2_MathQuaternionMul_Result; // 0x10F0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_2_AimBoneMath_Result; // 0x1110(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_2_RigUnit_GetTransform_4_1_Transform; // 0x1170(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_2_RigUnit_GetTransform_4_1_CachedIndex; // 0x11D0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootPlanting_2_AccumulateVectorLerp_Result; // 0x11E0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___Process_FootPlanting_2_AccumulateVectorLerp_AccumulatedValue; // 0x11F8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootPlanting_2_AimBoneMath_Primary__IO; // 0x1208(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_2_AimBoneMath_PrimaryCachedSpace; // 0x1250(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_2_AimBoneMath_SecondaryCachedSpace; // 0x1260(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Process_FootPlanting_2_MathQuaternionMul_A; // 0x1270(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_2_MathQuaternionMul_B; // 0x1290(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_2_MathFloatAdd_Result; // 0x12B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_2_MathFloatAdd_A; // 0x12B4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_2_MathFloatAdd_B; // 0x12B8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_2_SetTransform_Value__IO; // 0x12C0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_2_SetTransform_CachedIndex; // 0x1320(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___Process_FootPlanting_1_1_AccumulateFloatLerp_Result; // 0x1330(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_1_RigUnit_AlphaInterp_4_Result; // 0x1334(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_1_MathFloatAdd_2_Result; // 0x1338(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       RigVMModel___Process_FootPlanting_1_1_If_Result;   // 0x1340(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___Process_FootPlanting_1_1_SphereTraceByTraceChannel_bHit : 1; // Mask: 0x1, PropSize: 0x10x1348(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_32BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_1_1_MathVectorAdd_6_Result; // 0x1350(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_1_1_RigUnit_GetTransform_4_Transform; // 0x1370(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_1_RigUnit_GetTransform_4_CachedIndex; // 0x13D0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootPlanting_1_1_MathVectorAdd_6_A; // 0x13E0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_1_1_MathVectorSub_3_Result; // 0x13F8(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   RigVMModel___Process_FootPlanting_1_1_Select_6_Result; // 0x1410(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RigVMModel___Process_FootPlanting_1_1_SphereTraceByTraceChannel_HitLocation; // 0x1418(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___Process_FootPlanting_1_1_SphereTraceByTraceChannel_HitNormal; // 0x1430(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Process_FootPlanting_1_1_If_True;     // 0x1448(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       RigVMModel___Process_FootPlanting_1_1_If_False;    // 0x1450(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_1_MathFloatAdd_2_A; // 0x1458(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputScaleBiasClamp>          RigVMModel___Process_FootPlanting_1_1_RigUnit_AlphaInterp_4_ScaleBiasClamp; // 0x1460(0x10)(Edit, EditConst, NonTransactional)
	double                                       LocalVariable__RigVMModel___Process_FootPlanting_1_1_GroundOffsetPosition; // 0x1470(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_1_AccumulateFloatLerp_InitialValue; // 0x1478(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                RigVMModel___Process_FootPlanting_1_1_AccumulateFloatLerp_AccumulatedValue; // 0x1480(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               LocalVariable__RigVMModel___Process_FootPlanting_1_1_HitNormal; // 0x1490(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_1_MathQuaternionSlerp_Result; // 0x14B0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_1_MathQuaternionMul_Result; // 0x14D0(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_1_1_AimBoneMath_Result; // 0x14F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___Process_FootPlanting_1_1_RigUnit_GetTransform_4_1_Transform; // 0x1550(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_1_RigUnit_GetTransform_4_1_CachedIndex; // 0x15B0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___Process_FootPlanting_1_1_AccumulateVectorLerp_Result; // 0x15C0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       RigVMModel___Process_FootPlanting_1_1_AccumulateVectorLerp_AccumulatedValue; // 0x15D8(0x10)(Edit, EditConst, NonTransactional)
	struct FRigUnit_AimItem_Target               RigVMModel___Process_FootPlanting_1_1_AimBoneMath_Primary__IO; // 0x15E8(0x48)(Edit, EditConst, NonTransactional, NoDestructor)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_1_AimBoneMath_PrimaryCachedSpace; // 0x1630(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_1_AimBoneMath_SecondaryCachedSpace; // 0x1640(0x10)(Edit, EditConst, NonTransactional)
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_1_MathQuaternionMul_A; // 0x1650(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FQuat                                 RigVMModel___Process_FootPlanting_1_1_MathQuaternionMul_B; // 0x1670(0x20)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_1_MathFloatAdd_Result; // 0x1690(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_1_MathFloatAdd_A; // 0x1694(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___Process_FootPlanting_1_1_MathFloatAdd_B; // 0x1698(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___Process_FootPlanting_1_1_SetTransform_Value__IO; // 0x16A0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___Process_FootPlanting_1_1_SetTransform_CachedIndex; // 0x1700(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_5_1_Transform;           // 0x1710(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_5_1_CachedIndex;         // 0x1770(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_4_1_CachedIndex;         // 0x1780(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_2_1_Transform;         // 0x1790(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_2_1_CachedIndex;       // 0x17F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_2_1_CachedIndex;       // 0x1800(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_1_1_Transform;         // 0x1810(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_1_1_CachedIndex;       // 0x1870(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_2_1_1_CachedIndex;       // 0x1880(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_1_1_2_Transform;       // 0x1890(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_1_2_CachedIndex;     // 0x18F0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_1_1_2_CachedIndex;     // 0x1900(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_3_Transform;     // 0x1910(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_3_CachedIndex;   // 0x1970(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorAdd_5_Result;               // 0x1980(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorAdd_5_A;                    // 0x1998(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_AlphaInterp_Result;           // 0x19B0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_Result;                // 0x19B4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_A;                     // 0x19B8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_B;                     // 0x19BC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputScaleBiasClamp>          RigVMModel___RigUnit_AlphaInterp_ScaleBiasClamp;   // 0x19C0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorAdd_5_B__IO;                // 0x19D0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_SetTransform_1_1_Value__IO;   // 0x19F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_1_CachedIndex; // 0x1A50(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_Transform;     // 0x1A60(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_CachedIndex;   // 0x1AC0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_SetTransform_1_CachedIndex;   // 0x1AD0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_Transform;   // 0x1AE0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_CachedIndex; // 0x1B40(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_1_Transform; // 0x1B50(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_1_CachedIndex; // 0x1BB0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_2_Transform; // 0x1BC0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_2_CachedIndex; // 0x1C20(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_1_1_Transform; // 0x1C30(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_1_1_CachedIndex; // 0x1C90(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_3_Transform; // 0x1CA0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_3_CachedIndex; // 0x1D00(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_2_1_1_2_Transform; // 0x1D10(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_2_1_1_2_CachedIndex; // 0x1D70(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorAdd_5_1_Result;             // 0x1D80(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RigVMModel___MathVectorAdd_5_1_A;                  // 0x1D98(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___RigUnit_AlphaInterp_1_Result;         // 0x1DB0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_1_Result;              // 0x1DB4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_1_A;                   // 0x1DB8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatMin_1_1_B;                   // 0x1DBC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputScaleBiasClamp>          RigVMModel___RigUnit_AlphaInterp_1_ScaleBiasClamp; // 0x1DC0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorAdd_5_1_B__IO;              // 0x1DD0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___RigUnit_GetTransform_Transform;       // 0x1DF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_CachedIndex;     // 0x1E50(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FPBIKEffector>                 RigVMModel___PBIK_Effectors__IO;                   // 0x1E60(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<int32>>                        RigVMModel___PBIK_EffectorSolverIndices;           // 0x1E70(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<int32>>                        RigVMModel___PBIK_BoneSettingToSolverBoneIndex;    // 0x1E80(0x10)(Edit, EditConst, NonTransactional)
	TArray<TArray<int32>>                        RigVMModel___PBIK_SolverBoneToElementIndex;        // 0x1E90(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FPBIKSolver>                   RigVMModel___PBIK_Solver;                          // 0x1EA0(0x10)(Edit, EditConst, NonTransactional)
	TArray<uint8>                                RigVMModel___PBIK_bNeedsInit;                      // 0x1EB0(0x10)(Edit, EditConst, NonTransactional)
	struct FRigElementKey                        RigVMModel___ArrayIterator_1_Element;              // 0x1EC0(0xC)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TArray<struct FCachedRigElement>>     RigVMModel___SetControlVisibility_1_CachedControlIndices; // 0x1ED0(0x10)(Edit, EditConst, NonTransactional)
	int32                                        RigVMModel___ArrayIterator_1_Index;                // 0x1EE0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        RigVMModel___ArrayIterator_1_Count;                // 0x1EE4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___ArrayIterator_1_Ratio;                // 0x1EE8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        RigVMModel___ArrayIterator_1_Continue : 1;         // Mask: 0x1, PropSize: 0x10x1EEC(0x1)(Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_250 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_32CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_Transform;               // 0x1EF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_CachedIndex;             // 0x1F50(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_CachedIndex;             // 0x1F60(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_Transform;             // 0x1F70(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_CachedIndex;           // 0x1FD0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_CachedIndex;           // 0x1FE0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_2_Transform;             // 0x1FF0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_2_CachedIndex;           // 0x2050(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_2_CachedIndex;           // 0x2060(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___GetTransform_1_1_Transform;           // 0x2070(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_1_1_CachedIndex;         // 0x20D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_1_1_CachedIndex;         // 0x20E0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_4_Transform;     // 0x20F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_4_CachedIndex;   // 0x2150(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_CachedControlIndex;  // 0x2160(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_Transform;   // 0x2170(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_CachedIndex; // 0x21D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_CachedControlIndex; // 0x21E0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_2_1_Transform; // 0x21F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_2_1_CachedIndex; // 0x2250(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_5_1_CachedIndex;         // 0x2260(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_2_Transform; // 0x2270(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_2_CachedIndex; // 0x22D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetTransform_5_CachedIndex;           // 0x22E0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_1_Transform; // 0x22F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_1_CachedIndex; // 0x2350(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_1_1_CachedControlIndex; // 0x2360(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_2_Transform; // 0x2370(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_2_CachedIndex; // 0x23D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_1_2_CachedControlIndex; // 0x23E0(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_1_1_1_Transform; // 0x23F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_1_1_1_CachedIndex; // 0x2450(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_1_1_1_CachedControlIndex; // 0x2460(0x10)(Edit, EditConst, NonTransactional)
	struct FTransform                            RigVMModel___RigUnit_GetTransform_1_1_2_1_Transform; // 0x2470(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___RigUnit_GetTransform_1_1_2_1_CachedIndex; // 0x24D0(0x10)(Edit, EditConst, NonTransactional)
	TArray<struct FCachedRigElement>             RigVMModel___SetControlOffset_1_1_2_1_CachedControlIndex; // 0x24E0(0x10)(Edit, EditConst, NonTransactional)
	float                                        RigVMModel___MathFloatAdd_1_Result;                // 0x24F0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_Result;                  // 0x24F4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathVectorDistance_Result;            // 0x24F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_3_Transform;             // 0x2500(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_3_CachedIndex;           // 0x2560(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_A;                 // 0x2570(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_3_1_Transform;           // 0x2590(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_3_1_CachedIndex;         // 0x25F0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_B;                 // 0x2600(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathVectorDistance_1_Result;          // 0x2618(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_3_1_1_Transform;         // 0x2620(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_3_1_1_CachedIndex;       // 0x2680(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_B;               // 0x2690(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathVectorDistance_1_1_Result;        // 0x26A8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_3_1_2_Transform;         // 0x26B0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_3_1_2_CachedIndex;       // 0x2710(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_1_B;             // 0x2720(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathFloatAdd_2_Result;                // 0x2738(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathVectorDistance_2_Result;          // 0x273C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            RigVMModel___GetTransform_3_2_Transform;           // 0x2740(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_3_2_CachedIndex;         // 0x27A0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_2_A;               // 0x27B0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_3_1_3_Transform;         // 0x27D0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_3_1_3_CachedIndex;       // 0x2830(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_2_B;               // 0x2840(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathVectorDistance_1_2_Result;        // 0x2858(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_3_1_1_1_Transform;       // 0x2860(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_3_1_1_1_CachedIndex;     // 0x28C0(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_2_B;             // 0x28D0(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RigVMModel___MathVectorDistance_1_1_1_Result;      // 0x28E8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RigVMModel___GetTransform_3_1_2_1_Transform;       // 0x28F0(0x60)(Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedRigElement>             RigVMModel___GetTransform_3_1_2_1_CachedIndex;     // 0x2950(0x10)(Edit, EditConst, NonTransactional)
	struct FVector                               RigVMModel___MathVectorDistance_1_1_1_B;           // 0x2960(0x18)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URigVMMemory_Work_RHI* GetDefaultObj();

};

}


