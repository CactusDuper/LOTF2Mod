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

// 0x38 (0x38 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.HandsIK_Override
struct UABP_Player_LayeringTemplate_C_HandsIK_Override_Params
{
public:
	struct FPoseLink                             InputPose;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       HandsIK_Alpha;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpringStrength;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpringDamping;                                     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             HandsIK_Override;                                  // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.LanternOverlay
struct UABP_Player_LayeringTemplate_C_LanternOverlay_Params
{
public:
	struct FPoseLink                             LanternLayeringPose;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_L;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_388F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             LanternOverlay;                                    // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.AL_PlayerFlails
struct UABP_Player_LayeringTemplate_C_AL_PlayerFlails_Params
{
public:
	struct FPoseLink                             InPose_Flails;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AL_PlayerFlails;                                   // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.AL_AimingOffset
struct UABP_Player_LayeringTemplate_C_AL_AimingOffset_Params
{
public:
	struct FPoseLink                             UpperBody_Additive;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       AimingAlpha;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimingPitch;                                       // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimingYaw;                                         // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                           AimOffset_BS;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             AL_AimingOffset;                                   // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.Locomotion
struct UABP_Player_LayeringTemplate_C_Locomotion_Params
{
public:
	struct FPoseLink                             Locomotion;                                        // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.Locomotion_Blocking
struct UABP_Player_LayeringTemplate_C_Locomotion_Blocking_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Locomotion_Blocking;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.PrimaryOverlay
struct UABP_Player_LayeringTemplate_C_PrimaryOverlay_Params
{
public:
	struct FPoseLink                             PrimaryLayeringPose;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_P;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3890[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       R_Hand_Unequipped_Alpha;                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       L_Hand_Unequipped_Alpha;                           // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             PrimaryOverlay;                                    // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.SecondaryOverlay
struct UABP_Player_LayeringTemplate_C_SecondaryOverlay_Params
{
public:
	struct FPoseLink                             SecondaryLayeringPose;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_S;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3891[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             SecondaryOverlay;                                  // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.DualWieldOverlay
struct UABP_Player_LayeringTemplate_C_DualWieldOverlay_Params
{
public:
	struct FPoseLink                             DualWieldLayeringPose;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_DW;                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3892[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             DualWieldOverlay;                                  // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.MagicOverlay
struct UABP_Player_LayeringTemplate_C_MagicOverlay_Params
{
public:
	struct FPoseLink                             MagicLayeringPose;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_M;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3893[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             MagicOverlay;                                      // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.RangedOverlay
struct UABP_Player_LayeringTemplate_C_RangedOverlay_Params
{
public:
	struct FPoseLink                             RangedLayeringPose;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_R;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3894[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             RangedOverlay;                                     // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.AnimGraph
struct UABP_Player_LayeringTemplate_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InputLocomotion;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             OverlayPose;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.Update_LayeringAlphas
struct UABP_Player_LayeringTemplate_C_Update_LayeringAlphas_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	float                                        CallFunc_GetCurveValueWithDefault_OutValue;        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurveValueWithDefault_ReturnValue;     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3895[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetDeltaTime_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3896[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.GetABP_PlayerThreadSafe
struct UABP_Player_LayeringTemplate_C_GetABP_PlayerThreadSafe_Params
{
public:
	class UABP_Player_C*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         K2Node_DynamicCast_AsABP_Player;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.BlueprintUpdateAnimation
struct UABP_Player_LayeringTemplate_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ABP_Player_LayeringTemplate.ABP_Player_LayeringTemplate_C.ExecuteUbergraph_ABP_Player_LayeringTemplate
struct UABP_Player_LayeringTemplate_C_ExecuteUbergraph_ABP_Player_LayeringTemplate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


