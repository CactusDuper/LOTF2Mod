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
// Function W_InventoryGridItem_List.W_InventoryGridItem_List_C.Update Controller Icon
struct UW_InventoryGridItem_List_C_Update_Controller_Icon_Params
{
public:
	class UInputActionImage*                     Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetInputAction_ReturnValue;               // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetControllerIconByEventName_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_InventoryGridItem_List.W_InventoryGridItem_List_C.SetIsNewItem
struct UW_InventoryGridItem_List_C_SetIsNewItem_Params
{
public:
	bool                                         bIsNew;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_InventoryGridItem_List.W_InventoryGridItem_List_C.ShowInputAction
struct UW_InventoryGridItem_List_C_ShowInputAction_Params
{
public:
	struct FGameplayTag                          InputAction;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_InventoryGridItem_List.W_InventoryGridItem_List_C.SetIsEquipped
struct UW_InventoryGridItem_List_C_SetIsEquipped_Params
{
public:
	bool                                         bIsEquipped;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_InventoryGridItem_List.W_InventoryGridItem_List_C.SetIsEquippable
struct UW_InventoryGridItem_List_C_SetIsEquippable_Params
{
public:
	bool                                         bIsEquippable;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_InventoryGridItem_List.W_InventoryGridItem_List_C.SetIsEpicItem
struct UW_InventoryGridItem_List_C_SetIsEpicItem_Params
{
public:
	bool                                         bEpicItem;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_InventoryGridItem_List.W_InventoryGridItem_List_C.SetIsSelected
struct UW_InventoryGridItem_List_C_SetIsSelected_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function W_InventoryGridItem_List.W_InventoryGridItem_List_C.ExecuteUbergraph_W_InventoryGridItem_List
struct UW_InventoryGridItem_List_C_ExecuteUbergraph_W_InventoryGridItem_List_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsNew;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FAC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Event_inputAction;                          // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsEquipped;                          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsEquippable;                        // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bEpicItem;                            // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsSelected;                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetEffectMaterial_ReturnValue;            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

