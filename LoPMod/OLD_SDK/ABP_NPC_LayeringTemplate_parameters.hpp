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

// 0x20 (0x20 - 0x0)
// Function ABP_NPC_LayeringTemplate.ABP_NPC_LayeringTemplate_C.AnimGraph
struct UABP_NPC_LayeringTemplate_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InputLocomotion;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ABP_NPC_LayeringTemplate.ABP_NPC_LayeringTemplate_C.GetABP_EnemyThreadSafe
struct UABP_NPC_LayeringTemplate_C_GetABP_EnemyThreadSafe_Params
{
public:
	class UABP_EnemyBase_C*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UABP_EnemyBase_C*                      K2Node_DynamicCast_AsABP_Enemy_Base;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ABP_NPC_LayeringTemplate.ABP_NPC_LayeringTemplate_C.ExecuteUbergraph_ABP_NPC_LayeringTemplate
struct UABP_NPC_LayeringTemplate_C_ExecuteUbergraph_ABP_NPC_LayeringTemplate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


