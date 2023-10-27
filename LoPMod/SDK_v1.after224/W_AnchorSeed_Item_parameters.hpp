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
// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.Update Controller Icon
struct UW_AnchorSeed_Item_C_Update_Controller_Icon_Params
{
public:
	class UInputActionImage*                     Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetInputAction_ReturnValue;               // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetControllerIconByEventName_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.ShowInputAction
struct UW_AnchorSeed_Item_C_ShowInputAction_Params
{
public:
	struct FGameplayTag                          InputAction;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.SetIsEquipped
struct UW_AnchorSeed_Item_C_SetIsEquipped_Params
{
public:
	bool                                         bIsEquipped;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.SetIsSelected
struct UW_AnchorSeed_Item_C_SetIsSelected_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.PreConstruct
struct UW_AnchorSeed_Item_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function W_AnchorSeed_Item.W_AnchorSeed_Item_C.ExecuteUbergraph_W_AnchorSeed_Item
struct UW_AnchorSeed_Item_C_ExecuteUbergraph_W_AnchorSeed_Item_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_inputAction;                          // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsEquipped;                          // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsSelected;                          // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EBD[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

