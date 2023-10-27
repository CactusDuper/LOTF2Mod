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

// 0xB0 (0xB0 - 0x0)
// Function GA_KickBridgeActivation_BP.GA_KickBridgeActivation_BP_C.K2_ActivateAbilityFromEvent
struct UGA_KickBridgeActivation_BP_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xD9 (0xD9 - 0x0)
// Function GA_KickBridgeActivation_BP.GA_KickBridgeActivation_BP_C.ExecuteUbergraph_GA_KickBridgeActivation_BP
struct UGA_KickBridgeActivation_BP_C_ExecuteUbergraph_GA_KickBridgeActivation_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
	class UInteractionContext*                   CallFunc_GetInteractionContextFromTargetData_ReturnValue; // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetInteractor_ReturnValue;                // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetInteractableObject_ReturnValue;        // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_KickableBridge_C*                  K2Node_DynamicCast_AsBP_Kickable_Bridge;           // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


