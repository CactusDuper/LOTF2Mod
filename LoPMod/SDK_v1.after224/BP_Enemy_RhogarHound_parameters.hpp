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

// 0x5C (0x5C - 0x0)
// Function BP_Enemy_RhogarHound.BP_Enemy_RhogarHound_C.UserConstructionScript
struct ABP_Enemy_RhogarHound_C_UserConstructionScript_Params
{
public:
	struct FAkAnathemaEvent                      RhogarHound_INI_Audio;                             // 0x0(0x50)(Edit, BlueprintVisible)
	class UAkAnathemaComponent*                  CallFunc_GetAkComponentHead_ReturnValue;           // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostAkAnathemaEvent_ReturnValue;          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_Enemy_RhogarHound.BP_Enemy_RhogarHound_C.OnDeath
struct ABP_Enemy_RhogarHound_C_OnDeath_Params
{
public:
	class AActor*                                InstigatorActor;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 InstigatorTags;                                    // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bDeathWasObserved;                                 // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_Enemy_RhogarHound.BP_Enemy_RhogarHound_C.ExecuteUbergraph_BP_Enemy_RhogarHound
struct ABP_Enemy_RhogarHound_C_ExecuteUbergraph_BP_Enemy_RhogarHound_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_393C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_instigatorActor;                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_instigatorTags;                       // 0x10(0x20)(ConstParm)
	bool                                         K2Node_Event_bDeathWasObserved;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


