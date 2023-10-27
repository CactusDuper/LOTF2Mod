#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.Warping_Override
struct UABP_Investigator_Layer_C_Warping_Override_Params
{
public:
	struct FPoseLink                             LocomotionInput;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       InMoveAngle;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InMoveSpeed;                                       // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             Warping_Override;                                  // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.Facial_Override
struct UABP_Investigator_Layer_C_Facial_Override_Params
{
public:
	struct FPoseLink                             InputPose;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       Facial_Alpha;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Anger;                                  // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Expression_Pain;                                   // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Eyes_Blinking;                                     // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             Facial_Override;                                   // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.LookAtTarget_Override
struct UABP_Investigator_Layer_C_LookAtTarget_Override_Params
{
public:
	struct FPoseLink                             InLocomotion;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                               TargetLocation;                                    // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LookAt_Alpha;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_HeadOnly;                                      // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             LookAtTarget_Override;                             // 0x38(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.FeetIk_Override
struct UABP_Investigator_Layer_C_FeetIk_Override_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                        IsInUmbral;                                        // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EnemySpeed;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             FeetIk_Override;                                   // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.FeetLock_FlinchesPP
struct UABP_Investigator_Layer_C_FeetLock_FlinchesPP_Params
{
public:
	struct FPoseLink                             FlinchedInput;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FeetLock_FlinchesPP;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.Layering_Override
struct UABP_Investigator_Layer_C_Layering_Override_Params
{
public:
	struct FPoseLink                             DefaultSlot_InputPose;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       UpperBody_Layering_Alpha;                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       L_Arm_Layering_Alpha;                              // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       R_Arm_Layering_Alpha;                              // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             Layering_Override;                                 // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.CopyIKBone_Override
struct UABP_Investigator_Layer_C_CopyIKBone_Override_Params
{
public:
	struct FPoseLink                             InputLocomotion;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             CopyIKBone_Override;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.AnimGraph
struct UABP_Investigator_Layer_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.GetABP_EnemyThreadSafe
struct UABP_Investigator_Layer_C_GetABP_EnemyThreadSafe_Params
{
public:
	class UABP_EnemyBase_C*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UABP_EnemyBase_C*                      K2Node_DynamicCast_AsABP_Enemy_Base;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.Update_LookAtAlpha
struct UABP_Investigator_Layer_C_Update_LookAtAlpha_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class UABP_EnemyBase_C*                      CallFunc_GetABP_EnemyThreadSafe_ReturnValue;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDeltaTime_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetCurveValueWithDefault_OutValue;        // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurveValueWithDefault_ReturnValue;     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.ExecuteUbergraph_ABP_Investigator_Layer
struct UABP_Investigator_Layer_C_ExecuteUbergraph_ABP_Investigator_Layer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

