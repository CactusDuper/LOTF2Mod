#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPoleVectorModeEnum : uint8
{
	PV_None                        = 0,
	PV_Position                    = 1,
	PV_Bone                        = 2,
	PV_AngleOffset                 = 3,
	PV_MAX                         = 4,
};

enum class EEffectorSpaceEnum : uint8
{
	ES_Additive                    = 0,
	ES_World                       = 1,
	ES_Component                   = 2,
	ES_MAX                         = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKBodyInertia
struct FPowerIKBodyInertia
{
public:
	bool                                         ApplyInertiaToBody;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothFactor;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSpring;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpringStrength;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringDamping;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKBoneBendDirection
struct FPowerIKBoneBendDirection
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BendDirection;                                     // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKExcludedBone
struct FPowerIKExcludedBone
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKBoneLimit
struct FPowerIKBoneLimit
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E1C[0x3C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKSmoothing
struct FPowerIKSmoothing
{
public:
	bool                                         SmoothPositionOverTime;                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxPositionSpeed;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPositionDistance;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SmoothRotationOverTime;                            // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDegreesSpeed;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDegreesDistance;                                // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKPoleVector
struct FPowerIKPoleVector
{
public:
	enum class EPoleVectorModeEnum               Mode;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E20[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AngleOffset;                                       // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKEffector
struct FPowerIKEffector
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEffectorSpaceEnum                PositionSpace;                                     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E21[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotation;                                          // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EEffectorSpaceEnum                RotationSpace;                                     // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E22[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PullWeight;                                        // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NormalizePulling;                                  // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PositivePullFactor;                                // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NegativePullFactor;                                // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RotateBone;                                        // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RotateLimb;                                        // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E25[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeltaSmoothSpeed;                                  // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularDeltaSmoothSpeed;                           // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPowerIKSmoothing                     Smoothing;                                         // 0x8C(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E26[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPowerIKPoleVector                    PoleVector;                                        // 0xA8(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AffectsCenterOfGravity;                            // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E27[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E28[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKCenterOfGravity
struct FPowerIKCenterOfGravity
{
public:
	float                                        Alpha;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizAmount;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VertAmount;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PullBodyAmount;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x208 - 0xC8)
// ScriptStruct PowerIKRuntime.AnimNode_PowerIK
struct FAnimNode_PowerIK : public FAnimNode_SkeletalControlBase
{
public:
	class FName                                  CharacterRoot;                                     // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootRotationMultiplier;                            // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPowerIKBodyInertia                   BodyInertia;                                       // 0xD4(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKBoneBendDirection>     BendDirections;                                    // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKExcludedBone>          ExcludedBones;                                     // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKBoneLimit>             JointLimits;                                       // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKEffector>              Effectors;                                         // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        SmoothingMaxSpeedMultiplier;                       // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothingMaxDistanceMultiplier;                    // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPowerIKCenterOfGravity               CenterOfGravityConstraint;                         // 0x130(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MaxSquashIterations;                               // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStretchIterations;                              // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFinalIterations;                                // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowBoneTranslation;                              // 0x14C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E2A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SolverAlpha;                                       // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugDrawSize;                                     // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E2B[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKGroundFoot
struct FPowerIKGroundFoot
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PullWeight;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NormalizePulling;                                  // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E2C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PositivePullFactor;                                // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NegativePullFactor;                                // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E2D[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKGroundCollision
struct FPowerIKGroundCollision
{
public:
	enum class ECollisionChannel                 CollisionChannel;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TraceComplex;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E2E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RayCastUp;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RayCastDown;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableWallCollision;                               // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E2F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WallOffset;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKGroundSlope
struct FPowerIKGroundSlope
{
public:
	struct FVector                               StrideDirection;                                   // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGroundAngle;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxNormalAngularSpeed;                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OrientToGround;                                    // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E30[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OrientToPitch;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrientToRoll;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ScaleStride;                                       // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UphillStrideScale;                                 // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownhillStrideScale;                               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SidehillStrideScale;                               // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SidehillPushOuterFeet;                             // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Lean;                                              // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UphillLean;                                        // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownhillLean;                                      // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SidehillLean;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CounterLean;                                       // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CounterLeanBoneName;                               // 0x54(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UphillCounterLean;                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownhillCounterLean;                               // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SidehillCounterLean;                               // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MoveRoot;                                          // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UphillVertOffset;                                  // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UphillHorizOffset;                                 // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownhillVertOffset;                                // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownhillHorizOffset;                               // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SidehillHorizOffset;                               // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SidehillVertOffset;                                // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RotateFootToGround;                                // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PitchFootAmount;                                   // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollFootAmount;                                    // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootAngleDeltaSmoothSpeed;                         // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OffsetFeetPositions;                               // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E39[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StaticFootOffset;                                  // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2D8 (0x3A0 - 0xC8)
// ScriptStruct PowerIKRuntime.AnimNode_PowerIK_Ground
struct FAnimNode_PowerIK_Ground : public FAnimNode_SkeletalControlBase
{
public:
	class FName                                  CharacterRoot;                                     // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPowerIKBodyInertia                   BodyInertia;                                       // 0xD0(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPowerIKGroundFoot>            Feet;                                              // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        FeetDeltaSmoothSpeed;                              // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootRotationMultiplier;                            // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPowerIKGroundCollision               GroundCollision;                                   // 0x100(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E45[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPowerIKGroundSlope                   GroundSlope;                                       // 0x118(0xA0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKBoneBendDirection>     BendDirections;                                    // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKExcludedBone>          ExcludedBones;                                     // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKBoneLimit>             JointLimits;                                       // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E46[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxSquashIterations;                               // 0x1F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStretchIterations;                              // 0x1FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFinalIterations;                                // 0x200(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowBoneTranslation;                              // 0x204(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SolverAlpha;                                       // 0x208(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugDrawSize;                                     // 0x20C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E48[0x190];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PowerIKRuntime.PlaneConstraint
struct FPlaneConstraint
{
public:
	uint8                                        Pad_2E49[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x1D0 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKWalkingLimb
struct FPowerIKWalkingLimb
{
public:
	class FName                                  StartBone;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E4A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EndBone;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E4B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LimbMaxLengthMultiplier;                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepLengthMultiplier;                              // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E4D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepDuration;                                      // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E4E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepHeight;                                        // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E4F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RelatedLimbs;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        RotateFootToGround;                                // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FootCollisionRadius;                               // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E50[0x178];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x258 - 0xC8)
// ScriptStruct PowerIKRuntime.AnimNode_PowerIK_Walk
struct FAnimNode_PowerIK_Walk : public FAnimNode_SkeletalControlBase
{
public:
	class FName                                  CharacterRoot;                                     // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootRotationMultiplier;                            // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPowerIKBodyInertia                   BodyInertia;                                       // 0xD4(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKWalkingLimb>           Limbs;                                             // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E5A[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepMaxReachDistance;                              // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepDurationMultiplier;                            // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepHeightMultiplier;                              // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E5B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           StepHeightCurve;                                   // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                           StepSpeedCurve;                                    // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeleportDistance;                                  // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PrintTeleportWarning;                              // 0x134(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 CollisionChannel;                                  // 0x135(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TraceComplex;                                      // 0x136(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E60[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPowerIKBoneBendDirection>     BendDirections;                                    // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKExcludedBone>          ExcludedBones;                                     // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKBoneLimit>             JointLimits;                                       // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxSquashIterations;                               // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStretchIterations;                              // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFinalIterations;                                // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowBoneTranslation;                              // 0x174(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E61[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SolverAlpha;                                       // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugDrawSize;                                     // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E62[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKEffectorData
struct FPowerIKEffectorData
{
public:
	uint8                                        Pad_2E63[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKBoneData
struct FPowerIKBoneData
{
public:
	uint8                                        Pad_2E64[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKRootData
struct FPowerIKRootData
{
public:
	uint8                                        Pad_2E65[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct PowerIKRuntime.PowerIKCore
struct FPowerIKCore
{
public:
	uint8                                        Pad_2E66[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x170 - 0x40)
// ScriptStruct PowerIKRuntime.RigUnit_PowerIK
struct FRigUnit_PowerIK : public FRigUnitMutable
{
public:
	class FName                                  CharacterRoot;                                     // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootRotationMultiplier;                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPowerIKEffector>              Effectors;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKBoneBendDirection>     BendDirections;                                    // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKExcludedBone>          ExcludedBones;                                     // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FPowerIKBoneLimit>             JointLimits;                                       // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPowerIKCenterOfGravity               CenterOfGravityConstraint;                         // 0x90(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPowerIKBodyInertia                   Inertia;                                           // 0xA0(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MaxSquashIterations;                               // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStretchIterations;                              // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFinalIterations;                                // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowBoneTranslation;                              // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E68[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SolverAlpha;                                       // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPowerIKCore                          Core;                                              // 0xC8(0xA8)(Transient, NativeAccessSpecifierPublic)
};

}

