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
// Function BattleEffectAbility_SpawnSAAOnIgniteApplication.BattleEffectAbility_SpawnSAAOnIgniteApplication_C.K2_ActivateAbilityFromEvent
struct UBattleEffectAbility_SpawnSAAOnIgniteApplication_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x200 (0x200 - 0x0)
// Function BattleEffectAbility_SpawnSAAOnIgniteApplication.BattleEffectAbility_SpawnSAAOnIgniteApplication_C.ExecuteUbergraph_BattleEffectAbility_SpawnSAAOnIgniteApplication
struct UBattleEffectAbility_SpawnSAAOnIgniteApplication_C_ExecuteUbergraph_BattleEffectAbility_SpawnSAAOnIgniteApplication_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpawnDefinition                      K2Node_MakeStruct_SpawnDefinition;                 // 0x8(0x120)(NoDestructor)
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x128(0xB0)(ConstParm)
	class AActor*                                CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x1D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 K2Node_DynamicCast_AsPawn;                         // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_SpawnAutonomousAbilityActor_ReturnValue;  // 0x1F0(0x10)(ReferenceParm)
};

}
}


