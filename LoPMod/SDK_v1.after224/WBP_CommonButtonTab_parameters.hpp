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
// Function WBP_CommonButtonTab.WBP_CommonButtonTab_C.Initialize
struct UWBP_CommonButtonTab_C_Initialize_Params
{
public:
	class UWBP_PhotoModeWidget_C*                PhotoModeWidgetRef;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CommonButtonTab.WBP_CommonButtonTab_C.PreConstruct
struct UWBP_CommonButtonTab_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE71 (0xE71 - 0x0)
// Function WBP_CommonButtonTab.WBP_CommonButtonTab_C.ExecuteUbergraph_WBP_CommonButtonTab
struct UWBP_CommonButtonTab_C_ExecuteUbergraph_WBP_CommonButtonTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_PhotoModeWidget_C*                K2Node_CustomEvent_PhotoModeWidgetRef;             // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PhotoModeDataInterface_C> K2Node_DynamicCast_AsBPI_Photo_Mode_Data_Interface; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B9A[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x30(0xD0)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x100(0x3F0)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x4F0(0xD0)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_1;                   // 0x5C0(0x3F0)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x9B0(0xD0)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_2;                   // 0xA80(0x3F0)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xE70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


