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
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Enable Shape Customization
struct UW_Body_Tattoos_Panel_C_Enable_Shape_Customization_Params
{
public:
	class UOptionSelectorBaseWidget*             Selector;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTattooPanel*                          Tattoo_Panel;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Set Shape Visibility
struct UW_Body_Tattoos_Panel_C_Set_Shape_Visibility_Params
{
public:
	enum class ESlateVisibility                  Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Right Leg
struct UW_Body_Tattoos_Panel_C_Select_Right_Leg_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2435[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Left Leg
struct UW_Body_Tattoos_Panel_C_Select_Left_Leg_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2436[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Right Arm
struct UW_Body_Tattoos_Panel_C_Select_Right_Arm_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2437[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Body
struct UW_Body_Tattoos_Panel_C_Select_Body_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2438[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Left Arm
struct UW_Body_Tattoos_Panel_C_Select_Left_Arm_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2439[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.Select Back
struct UW_Body_Tattoos_Panel_C_Select_Back_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_243A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.GetDesiredFocusTarget
struct UW_Body_Tattoos_Panel_C_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_Body_Selector_K2Node_ComponentBoundEvent_0_On Customize Feature__DelegateSignature
struct UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_Body_Selector_K2Node_ComponentBoundEvent_0_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_Back_Selector_K2Node_ComponentBoundEvent_1_On Customize Feature__DelegateSignature
struct UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_Back_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_LeftArm_Selector_K2Node_ComponentBoundEvent_2_On Customize Feature__DelegateSignature
struct UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_LeftArm_Selector_K2Node_ComponentBoundEvent_2_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_RightArm_Selector_K2Node_ComponentBoundEvent_3_On Customize Feature__DelegateSignature
struct UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_RightArm_Selector_K2Node_ComponentBoundEvent_3_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_LeftLeg_Selector_K2Node_ComponentBoundEvent_5_On Customize Feature__DelegateSignature
struct UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_LeftLeg_Selector_K2Node_ComponentBoundEvent_5_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.BndEvt__W_Body_Tattoos_Panel_RightLeg_Selector_K2Node_ComponentBoundEvent_6_On Customize Feature__DelegateSignature
struct UW_Body_Tattoos_Panel_C_BndEvt__W_Body_Tattoos_Panel_RightLeg_Selector_K2Node_ComponentBoundEvent_6_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F (0x1F - 0x0)
// Function W_Body_Tattoos_Panel.W_Body_Tattoos_Panel_C.ExecuteUbergraph_W_Body_Tattoos_Panel
struct UW_Body_Tattoos_Panel_C_ExecuteUbergraph_W_Body_Tattoos_Panel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEventAtLocation_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALOTF2Character*                       K2Node_DynamicCast_AsLOTF2Character;               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_5; // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_4; // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_3; // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_2; // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_1; // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category; // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


