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
// Function StateTreeModule.StateTreeNodeBlueprintBase.SendEvent
struct UStateTreeNodeBlueprintBase_SendEvent_Params
{
public:
	struct FStateTreeEvent                       Event;                                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function StateTreeModule.StateTreeConditionBlueprintBase.ReceiveTestCondition
struct UStateTreeConditionBlueprintBase_ReceiveTestCondition_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTick
struct UStateTreeEvaluatorBlueprintBase_ReceiveTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveTick
struct UStateTreeTaskBlueprintBase_ReceiveTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStateTreeRunStatus               ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveStateCompleted
struct UStateTreeTaskBlueprintBase_ReceiveStateCompleted_Params
{
public:
	enum class EStateTreeRunStatus               CompletionStatus;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_375[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStateTreeActiveStates                CompletedActiveStates;                             // 0x2(0x12)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveExitState
struct UStateTreeTaskBlueprintBase_ReceiveExitState_Params
{
public:
	struct FStateTreeTransitionResult            Transition;                                        // 0x0(0x2C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2E (0x2E - 0x0)
// Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveEnterState
struct UStateTreeTaskBlueprintBase_ReceiveEnterState_Params
{
public:
	struct FStateTreeTransitionResult            Transition;                                        // 0x0(0x2C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EStateTreeRunStatus               ReturnValue;                                       // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_378[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


