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
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.HandsIK_Override
struct UABP_Player_Layering_Ranged_C_HandsIK_Override_Params
{
public:
	struct FPoseLink                             InputPose;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       HandsIK_Alpha;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpringStrength;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpringDamping;                                     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             HandsIK_Override;                                  // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.LanternOverlay
struct UABP_Player_Layering_Ranged_C_LanternOverlay_Params
{
public:
	struct FPoseLink                             LanternLayeringPose;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_L;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             LanternOverlay;                                    // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.AL_PlayerFlails
struct UABP_Player_Layering_Ranged_C_AL_PlayerFlails_Params
{
public:
	struct FPoseLink                             InPose_Flails;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AL_PlayerFlails;                                   // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.AL_AimingOffset
struct UABP_Player_Layering_Ranged_C_AL_AimingOffset_Params
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
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Locomotion
struct UABP_Player_Layering_Ranged_C_Locomotion_Params
{
public:
	struct FPoseLink                             Locomotion;                                        // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Locomotion_Blocking
struct UABP_Player_Layering_Ranged_C_Locomotion_Blocking_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Locomotion_Blocking;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.PrimaryOverlay
struct UABP_Player_Layering_Ranged_C_PrimaryOverlay_Params
{
public:
	struct FPoseLink                             PrimaryLayeringPose;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_P;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       R_Hand_Unequipped_Alpha;                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       L_Hand_Unequipped_Alpha;                           // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             PrimaryOverlay;                                    // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.SecondaryOverlay
struct UABP_Player_Layering_Ranged_C_SecondaryOverlay_Params
{
public:
	struct FPoseLink                             SecondaryLayeringPose;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_S;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             SecondaryOverlay;                                  // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.DualWieldOverlay
struct UABP_Player_Layering_Ranged_C_DualWieldOverlay_Params
{
public:
	struct FPoseLink                             DualWieldLayeringPose;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_DW;                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             DualWieldOverlay;                                  // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.MagicOverlay
struct UABP_Player_Layering_Ranged_C_MagicOverlay_Params
{
public:
	struct FPoseLink                             MagicLayeringPose;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_M;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BDE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             MagicOverlay;                                      // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.RangedOverlay
struct UABP_Player_Layering_Ranged_C_RangedOverlay_Params
{
public:
	struct FPoseLink                             RangedLayeringPose;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_R;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BDF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             RangedOverlay;                                     // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.AnimGraph
struct UABP_Player_Layering_Ranged_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Set_AimingBS
struct UABP_Player_Layering_Ranged_C_Set_AimingBS_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBlendSpacePlayerReference            CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer; // 0x28(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToBlendSpacePlayerPure_Result;     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_1;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_2;              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_3;              // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BE1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpace*                           K2Node_Select_Default;                             // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBlendSpacePlayerReference            CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue; // 0x68(0x10)(NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Update_AimingBS
struct UABP_Player_Layering_Ranged_C_Update_AimingBS_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBlendSpacePlayerReference            CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer; // 0x28(0x10)(NoDestructor)
	bool                                         CallFunc_ConvertToBlendSpacePlayerPure_Result;     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_1;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_2;              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_3;              // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BE3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpace*                           K2Node_Select_Default;                             // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBlendSpacePlayerReference            CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue; // 0x68(0x10)(NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Smooth_AimOffsetAlpha_byMontageTag
struct UABP_Player_Layering_Ranged_C_Smooth_AimOffsetAlpha_byMontageTag_Params
{
public:
	struct FGameplayTag                          MontageTag;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	double                                       AimOffsetTarget;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Set_Charged_AimingAlpha
struct UABP_Player_Layering_Ranged_C_Set_Charged_AimingAlpha_Params
{
public:
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_BP_GetMontageByTag_ReturnValue;           // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetPlayLength_ReturnValue;                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue;            // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_1;              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Montage_GetPosition_ReturnValue;          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_MapRangeClamped_ReturnValue;              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_InRangeB_ImplicitCast;    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.GetABP_Player
struct UABP_Player_Layering_Ranged_C_GetABP_Player_Params
{
public:
	class UABP_Player_C*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         K2Node_DynamicCast_AsABP_Player;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.BlueprintUpdateAnimation
struct UABP_Player_Layering_Ranged_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.ExecuteUbergraph_ABP_Player_Layering_Ranged
struct UABP_Player_Layering_Ranged_C_ExecuteUbergraph_ABP_Player_Layering_Ranged_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BEB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_1;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_2;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_3;              // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_4;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_5;              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue_2;       // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_6;              // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue_3;       // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue_3;                  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


