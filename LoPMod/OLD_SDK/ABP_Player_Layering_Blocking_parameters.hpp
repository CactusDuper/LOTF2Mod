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

// 0x40 (0x40 - 0x0)
// Function ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C.AnimGraph
struct UABP_Player_Layering_Blocking_C_AnimGraph_Params
{
public:
	struct FPoseLink                             LayeredLocomotion;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             BaseLocomotion;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             BlockingOverlay;                                   // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C.GetABP_Player
struct UABP_Player_Layering_Blocking_C_GetABP_Player_Params
{
public:
	class UABP_Player_C*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         K2Node_DynamicCast_AsABP_Player;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C.BlueprintUpdateAnimation
struct UABP_Player_Layering_Blocking_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function ABP_Player_Layering_Blocking.ABP_Player_Layering_Blocking_C.ExecuteUbergraph_ABP_Player_Layering_Blocking
struct UABP_Player_Layering_Blocking_C_ExecuteUbergraph_ABP_Player_Layering_Blocking_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UABP_Player_C*                         CallFunc_GetABP_Player_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


