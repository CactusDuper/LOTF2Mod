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
// Function WBP_InventoryItemInfo.WBP_InventoryItemInfo_C.SetWeightDecreasedStatus
struct UWBP_InventoryItemInfo_C_SetWeightDecreasedStatus_Params
{
public:
	bool                                         bWeightDecreased;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_InventoryItemInfo.WBP_InventoryItemInfo_C.ExecuteUbergraph_WBP_InventoryItemInfo
struct UWBP_InventoryItemInfo_C_ExecuteUbergraph_WBP_InventoryItemInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWeightDecreased;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


