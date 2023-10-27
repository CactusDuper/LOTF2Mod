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

// 0x10 (0x10 - 0x0)
// Function AoE_wadingArea_Buffer.AoE_wadingArea_Buffer_C.BPI Interact
struct AAoE_wadingArea_Buffer_C_BPI_Interact_Params
{
public:
	class AActor*                                Actor_that_called;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                InteractorPlayer;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AoE_wadingArea_Buffer.AoE_wadingArea_Buffer_C.BndEvt__AoE_killingArea_Drowning_Proto_Lantern_DualRealmBehaviour_K2Node_ComponentBoundEvent_0_OnUpdateRealmVisuals__DelegateSignature
struct AAoE_wadingArea_Buffer_C_BndEvt__AoE_killingArea_Drowning_Proto_Lantern_DualRealmBehaviour_K2Node_ComponentBoundEvent_0_OnUpdateRealmVisuals__DelegateSignature_Params
{
public:
	enum class EGameRealm                        NewRealm;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function AoE_wadingArea_Buffer.AoE_wadingArea_Buffer_C.ExecuteUbergraph_AoE_wadingArea_Buffer
struct AAoE_wadingArea_Buffer_C_ExecuteUbergraph_AoE_wadingArea_Buffer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Actor_that_called;                    // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_InteractorPlayer;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EGameRealm                        K2Node_ComponentBoundEvent_newRealm;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


