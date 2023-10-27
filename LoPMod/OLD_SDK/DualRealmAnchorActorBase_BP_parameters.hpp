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

// 0x1 (0x1 - 0x0)
// Function DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C.ToggleLights
struct ADualRealmAnchorActorBase_BP_C_ToggleLights_Params
{
public:
	bool                                         Condition;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C.OnStateChanged_Event
struct ADualRealmAnchorActorBase_BP_C_OnStateChanged_Event_Params
{
public:
	enum class EDualRealmAnchorState             State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x17 (0x17 - 0x0)
// Function DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C.ExecuteUbergraph_DualRealmAnchorActorBase_BP
struct ADualRealmAnchorActorBase_BP_C_ExecuteUbergraph_DualRealmAnchorActorBase_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EDualRealmAnchorState             K2Node_CustomEvent_state;                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDualRealmAnchorState             CallFunc_GetState_ReturnValue;                     // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


