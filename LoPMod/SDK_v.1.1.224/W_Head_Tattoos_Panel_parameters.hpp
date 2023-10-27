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
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Enable Shape Customization
struct UW_Head_Tattoos_Panel_C_Enable_Shape_Customization_Params
{
public:
	class UOptionSelectorBaseWidget*             Selector;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTattooPanel*                          Tattoo_Panel;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Set Shape Visibility
struct UW_Head_Tattoos_Panel_C_Set_Shape_Visibility_Params
{
public:
	enum class ESlateVisibility                  Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Select Left Eye
struct UW_Head_Tattoos_Panel_C_Select_Left_Eye_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Select Right Eye
struct UW_Head_Tattoos_Panel_C_Select_Right_Eye_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Select Forehead
struct UW_Head_Tattoos_Panel_C_Select_Forehead_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Select Nose
struct UW_Head_Tattoos_Panel_C_Select_Nose_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.Select Mouth
struct UW_Head_Tattoos_Panel_C_Select_Mouth_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_69[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.GetDesiredFocusTarget
struct UW_Head_Tattoos_Panel_C_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Head_Tattoos_Panel_Forehead_Selector_K2Node_ComponentBoundEvent_0_On Customize Feature__DelegateSignature
struct UW_Head_Tattoos_Panel_C_BndEvt__W_Head_Tattoos_Panel_Forehead_Selector_K2Node_ComponentBoundEvent_0_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Head_Tattoos_Panel_Nose_Selector_K2Node_ComponentBoundEvent_1_On Customize Feature__DelegateSignature
struct UW_Head_Tattoos_Panel_C_BndEvt__W_Head_Tattoos_Panel_Nose_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Head_Tattoos_Panel_RightEye_Selector_K2Node_ComponentBoundEvent_2_On Customize Feature__DelegateSignature
struct UW_Head_Tattoos_Panel_C_BndEvt__W_Head_Tattoos_Panel_RightEye_Selector_K2Node_ComponentBoundEvent_2_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Head_Tattoos_Panel_LeftEye_Selector_K2Node_ComponentBoundEvent_3_On Customize Feature__DelegateSignature
struct UW_Head_Tattoos_Panel_C_BndEvt__W_Head_Tattoos_Panel_LeftEye_Selector_K2Node_ComponentBoundEvent_3_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.BndEvt__W_Head_Tattoos_Panel_Mouth_Selector_K2Node_ComponentBoundEvent_5_On Customize Feature__DelegateSignature
struct UW_Head_Tattoos_Panel_C_BndEvt__W_Head_Tattoos_Panel_Mouth_Selector_K2Node_ComponentBoundEvent_5_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F (0x1F - 0x0)
// Function W_Head_Tattoos_Panel.W_Head_Tattoos_Panel_C.ExecuteUbergraph_W_Head_Tattoos_Panel
struct UW_Head_Tattoos_Panel_C_ExecuteUbergraph_W_Head_Tattoos_Panel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEventAtLocation_ReturnValue;          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALOTF2Character*                       K2Node_DynamicCast_AsLOTF2Character;               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_4; // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_3; // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_2; // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_1; // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category; // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


