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
// Function GA_RhogarHound_ExplodeOnDeath.GA_RhogarHound_ExplodeOnDeath_C.K2_ActivateAbilityFromEvent
struct UGA_RhogarHound_ExplodeOnDeath_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x218 (0x218 - 0x0)
// Function GA_RhogarHound_ExplodeOnDeath.GA_RhogarHound_ExplodeOnDeath_C.ExecuteUbergraph_GA_RhogarHound_ExplodeOnDeath
struct UGA_RhogarHound_ExplodeOnDeath_C_ExecuteUbergraph_GA_RhogarHound_ExplodeOnDeath_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3727[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpawnDefinition                      K2Node_MakeStruct_SpawnDefinition;                 // 0x8(0x120)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x128(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue;                    // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3728[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x148(0xB0)(ConstParm)
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            CallFunc_CastToCharacter_ReturnValue;              // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_SpawnAutonomousAbilityActor_ReturnValue;  // 0x208(0x10)(ReferenceParm)
};

}
}


