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

// 0x18 (0x18 - 0x0)
// Function W_Preset_Name.W_Preset_Name_C.SetPresetName
struct UW_Preset_Name_C_SetPresetName_Params
{
public:
	class FText                                  PresetName;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function W_Preset_Name.W_Preset_Name_C.ExecuteUbergraph_W_Preset_Name
struct UW_Preset_Name_C_ExecuteUbergraph_W_Preset_Name_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DBB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_presetName;                           // 0x8(0x18)(ConstParm)
};

}
}


