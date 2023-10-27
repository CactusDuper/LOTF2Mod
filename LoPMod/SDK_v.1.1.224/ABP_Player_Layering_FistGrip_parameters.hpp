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
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.HandsIK_Override
struct UABP_Player_Layering_FistGrip_C_HandsIK_Override_Params
{
public:
	struct FPoseLink                             InputPose;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	double                                       HandsIK_Alpha;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpringStrength;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpringDamping;                                     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             HandsIK_Override;                                  // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.LanternOverlay
struct UABP_Player_Layering_FistGrip_C_LanternOverlay_Params
{
public:
	struct FPoseLink                             LanternLayeringPose;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_L;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1638[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             LanternOverlay;                                    // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.AL_PlayerFlails
struct UABP_Player_Layering_FistGrip_C_AL_PlayerFlails_Params
{
public:
	struct FPoseLink                             InPose_Flails;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AL_PlayerFlails;                                   // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.AL_AimingOffset
struct UABP_Player_Layering_FistGrip_C_AL_AimingOffset_Params
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
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.Locomotion
struct UABP_Player_Layering_FistGrip_C_Locomotion_Params
{
public:
	struct FPoseLink                             Locomotion;                                        // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.Locomotion_Blocking
struct UABP_Player_Layering_FistGrip_C_Locomotion_Blocking_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             Locomotion_Blocking;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.PrimaryOverlay
struct UABP_Player_Layering_FistGrip_C_PrimaryOverlay_Params
{
public:
	struct FPoseLink                             PrimaryLayeringPose;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_P;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_163F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       R_Hand_Unequipped_Alpha;                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       L_Hand_Unequipped_Alpha;                           // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                             PrimaryOverlay;                                    // 0x28(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.SecondaryOverlay
struct UABP_Player_Layering_FistGrip_C_SecondaryOverlay_Params
{
public:
	struct FPoseLink                             SecondaryLayeringPose;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_S;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1644[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             SecondaryOverlay;                                  // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.DualWieldOverlay
struct UABP_Player_Layering_FistGrip_C_DualWieldOverlay_Params
{
public:
	struct FPoseLink                             DualWieldLayeringPose;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_DW;                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1648[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             DualWieldOverlay;                                  // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.MagicOverlay
struct UABP_Player_Layering_FistGrip_C_MagicOverlay_Params
{
public:
	struct FPoseLink                             MagicLayeringPose;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_M;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1655[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             MagicOverlay;                                      // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.RangedOverlay
struct UABP_Player_Layering_FistGrip_C_RangedOverlay_Params
{
public:
	struct FPoseLink                             RangedLayeringPose;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	enum class ELocomotionState                  CurrentLocomotionState_R;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1659[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseLink                             RangedOverlay;                                     // 0x18(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.AnimGraph
struct UABP_Player_Layering_FistGrip_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x300 (0x300 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.Update_CorrectiveRotator
struct UABP_Player_Layering_FistGrip_C_Update_CorrectiveRotator_Params
{
public:
	struct FAnimUpdateContext                    Context;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FAnimNodeReference                    Node;                                              // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FVector                               Temp_struct_Variable;                              // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDeltaTime_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1685[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Temp_struct_Variable_1;                            // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_2;                            // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_3;                            // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_4;                            // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  Temp_byte_Variable;                                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1686[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Temp_struct_Variable_5;                            // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Temp_struct_Variable_6;                            // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Temp_struct_Variable_7;                            // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Temp_struct_Variable_8;                            // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Temp_struct_Variable_9;                            // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue;                // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_1;              // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  Temp_byte_Variable_1;                              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1689[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Temp_struct_Variable_10;                           // 0x138(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_11;                           // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_12;                           // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_13;                           // 0x180(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_14;                           // 0x198(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  Temp_byte_Variable_2;                              // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_168C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Temp_struct_Variable_15;                           // 0x1B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Temp_struct_Variable_16;                           // 0x1D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Temp_struct_Variable_17;                           // 0x1E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Temp_struct_Variable_18;                           // 0x200(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              Temp_struct_Variable_19;                           // 0x218(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_2;              // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ELocomotionState                  Temp_byte_Variable_3;                              // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_168E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              K2Node_Select_Default;                             // 0x240(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               K2Node_Select_Default_1;                           // 0x258(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default_2;                           // 0x270(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_Select_Default_3;                           // 0x288(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x2A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SelectRotator_ReturnValue;                // 0x2B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_VInterpTo_ReturnValue;                    // 0x2D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RInterpTo_ReturnValue;                    // 0x2E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.GetABP_Player
struct UABP_Player_Layering_FistGrip_C_GetABP_Player_Params
{
public:
	class UABP_Player_C*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         K2Node_DynamicCast_AsABP_Player;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.BlueprintUpdateAnimation
struct UABP_Player_Layering_FistGrip_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.ExecuteUbergraph_ABP_Player_Layering_FistGrip
struct UABP_Player_Layering_FistGrip_C_ExecuteUbergraph_ABP_Player_Layering_FistGrip_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


