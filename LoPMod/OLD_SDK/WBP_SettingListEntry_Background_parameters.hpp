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
// Function WBP_SettingListEntry_Background.WBP_SettingListEntry_Background_C.SetIndentation
struct UWBP_SettingListEntry_Background_C_SetIndentation_Params
{
public:
	int32                                        IndentationLevel;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       IndentationSize;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SettingListEntry_Background.WBP_SettingListEntry_Background_C.OnAddedToFocusPath
struct UWBP_SettingListEntry_Background_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xD8 (0xD8 - 0x0)
// Function WBP_SettingListEntry_Background.WBP_SettingListEntry_Background_C.OnMouseEnter
struct UWBP_SettingListEntry_Background_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x40(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SettingListEntry_Background.WBP_SettingListEntry_Background_C.OnRemovedFromFocusPath
struct UWBP_SettingListEntry_Background_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function WBP_SettingListEntry_Background.WBP_SettingListEntry_Background_C.OnMouseLeave
struct UWBP_SettingListEntry_Background_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_SettingListEntry_Background.WBP_SettingListEntry_Background_C.PreConstruct
struct UWBP_SettingListEntry_Background_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function WBP_SettingListEntry_Background.WBP_SettingListEntry_Background_C.ExecuteUbergraph_WBP_SettingListEntry_Background
struct UWBP_SettingListEntry_Background_C_ExecuteUbergraph_WBP_SettingListEntry_Background_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x8(0x8)(NoDestructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x40)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x50(0x98)(ConstParm)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0xE8(0x8)(NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xF0(0x98)(ConstParm)
};

}
}


