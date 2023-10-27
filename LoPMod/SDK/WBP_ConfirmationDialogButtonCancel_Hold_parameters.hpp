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
// Function WBP_ConfirmationDialogButtonCancel_Hold.WBP_ConfirmationDialogButtonCancel_Hold_C.Update Icon
struct UWBP_ConfirmationDialogButtonCancel_Hold_C_Update_Icon_Params
{
public:
	struct FGameplayTag                          CallFunc_GetInputAction_ReturnValue;               // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetControllerIconByEventName_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_ConfirmationDialogButtonCancel_Hold.WBP_ConfirmationDialogButtonCancel_Hold_C.On Input Method Changed
struct UWBP_ConfirmationDialogButtonCancel_Hold_C_On_Input_Method_Changed_Params
{
public:
	enum class ECommonInputType                  bNewInputType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_ConfirmationDialogButtonCancel_Hold.WBP_ConfirmationDialogButtonCancel_Hold_C.PreConstruct
struct UWBP_ConfirmationDialogButtonCancel_Hold_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function WBP_ConfirmationDialogButtonCancel_Hold.WBP_ConfirmationDialogButtonCancel_Hold_C.ExecuteUbergraph_WBP_ConfirmationDialogButtonCancel_Hold
struct UWBP_ConfirmationDialogButtonCancel_Hold_C_ExecuteUbergraph_WBP_ConfirmationDialogButtonCancel_Hold_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3660[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputSubsystem*                 CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ECommonInputType                  K2Node_CustomEvent_bNewInputType;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


