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
// Function BPI_PhotoModeDataInterface.BPI_PhotoModeDataInterface_C.TabToOpen
struct IBPI_PhotoModeDataInterface_C_TabToOpen_Params
{
public:
	int32                                        TabIndex;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_CommonButtonTab_C*                CommonButtonPressed;                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BPI_PhotoModeDataInterface.BPI_PhotoModeDataInterface_C.SendPhotoData
struct IBPI_PhotoModeDataInterface_C_SendPhotoData_Params
{
public:
	struct FSPhotosData                          PhotoData;                                         // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


