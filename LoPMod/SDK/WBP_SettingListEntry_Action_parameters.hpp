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

// 0x8 (0x8 - 0x0)
// Function WBP_SettingListEntry_Action.WBP_SettingListEntry_Action_C.GetPrimaryGamepadFocusWidget
struct UWBP_SettingListEntry_Action_C_GetPrimaryGamepadFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_SettingListEntry_Action.WBP_SettingListEntry_Action_C.OnSettingAssigned
struct UWBP_SettingListEntry_Action_C_OnSettingAssigned_Params
{
public:
	class FText                                  ActionText;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function WBP_SettingListEntry_Action.WBP_SettingListEntry_Action_C.ExecuteUbergraph_WBP_SettingListEntry_Action
struct UWBP_SettingListEntry_Action_C_ExecuteUbergraph_WBP_SettingListEntry_Action_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_actionText;                           // 0x8(0x18)(ConstParm)
};

}
}


