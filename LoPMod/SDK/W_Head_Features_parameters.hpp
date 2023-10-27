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
// Function W_Head_Features.W_Head_Features_C.Set Shape Widget
struct UW_Head_Features_C_Set_Shape_Widget_Params
{
public:
	class UOptionSelectorBaseWidget*             Feature;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Select Age
struct UW_Head_Features_C_Select_Age_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Select Face appearance
struct UW_Head_Features_C_Select_Face_appearance_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A3[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Select Eyes Color
struct UW_Head_Features_C_Select_Eyes_Color_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Show Details Panel
struct UW_Head_Features_C_Show_Details_Panel_Params
{
public:
	class UUserWidget*                           Selector_Button;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UShapeCategoryWidget*                  Panel_Widget;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Fine_Tune;                                    // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Set Shape Visibility
struct UW_Head_Features_C_Set_Shape_Visibility_Params
{
public:
	enum class ESlateVisibility                  Visibility;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Update Icon
struct UW_Head_Features_C_Update_Icon_Params
{
public:
	class UInputActionImage*                     Input_Image;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetInputAction_ReturnValue;               // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetControllerIconByEventName_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Head_Features.W_Head_Features_C.GetDesiredFocusTarget
struct UW_Head_Features_C_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Select Cheekbones
struct UW_Head_Features_C_Select_Cheekbones_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B4[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Select Mouth
struct UW_Head_Features_C_Select_Mouth_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B9[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Select Ears
struct UW_Head_Features_C_Select_Ears_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Select Nose
struct UW_Head_Features_C_Select_Nose_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function W_Head_Features.W_Head_Features_C.Select Eyes
struct UW_Head_Features_C_Select_Eyes_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BF[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Hair_Selector_K2Node_ComponentBoundEvent_6_On Customize Feature__DelegateSignature
struct UW_Head_Features_C_BndEvt__WBP_Head_Customization_Hair_Selector_K2Node_ComponentBoundEvent_6_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_7_On Customize Feature__DelegateSignature
struct UW_Head_Features_C_BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_7_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_8_On Customize Feature__DelegateSignature
struct UW_Head_Features_C_BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_8_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_9_On Customize Feature__DelegateSignature
struct UW_Head_Features_C_BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_9_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_10_On Customize Feature__DelegateSignature
struct UW_Head_Features_C_BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_10_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Eyes_Selector_K2Node_ComponentBoundEvent_11_OnHeadShapeSelected__DelegateSignature
struct UW_Head_Features_C_BndEvt__WBP_Head_Customization_Eyes_Selector_K2Node_ComponentBoundEvent_11_OnHeadShapeSelected__DelegateSignature_Params
{
public:
	class FString                                FeatureName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            Category;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_12_OnHeadShapeSelected__DelegateSignature
struct UW_Head_Features_C_BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_12_OnHeadShapeSelected__DelegateSignature_Params
{
public:
	class FString                                FeatureName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            Category;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_13_OnHeadShapeSelected__DelegateSignature
struct UW_Head_Features_C_BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_13_OnHeadShapeSelected__DelegateSignature_Params
{
public:
	class FString                                FeatureName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            Category;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_14_OnHeadShapeSelected__DelegateSignature
struct UW_Head_Features_C_BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_14_OnHeadShapeSelected__DelegateSignature_Params
{
public:
	class FString                                FeatureName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            Category;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_15_OnHeadShapeSelected__DelegateSignature
struct UW_Head_Features_C_BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_15_OnHeadShapeSelected__DelegateSignature_Params
{
public:
	class FString                                FeatureName;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            Category;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__W_Head_Customization_Eyes_Selector_1_K2Node_ComponentBoundEvent_20_On Customize Feature__DelegateSignature
struct UW_Head_Features_C_BndEvt__W_Head_Customization_Eyes_Selector_1_K2Node_ComponentBoundEvent_20_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__W_Head_Customization_Face_Selector_K2Node_ComponentBoundEvent_22_On Customize Feature__DelegateSignature
struct UW_Head_Features_C_BndEvt__W_Head_Customization_Face_Selector_K2Node_ComponentBoundEvent_22_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_Head_Features.W_Head_Features_C.OnRequestEditHead
struct UW_Head_Features_C_OnRequestEditHead_Params
{
public:
	enum class ECustomizationCategory            Category;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowPanel;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C7[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SelectedOption;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
struct UW_Head_Features_C_BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsHovered;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function W_Head_Features.W_Head_Features_C.BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
struct UW_Head_Features_C_BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSelected;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B8 (0x1B8 - 0x0)
// Function W_Head_Features.W_Head_Features_C.ExecuteUbergraph_W_Head_Features
struct UW_Head_Features_C_ExecuteUbergraph_W_Head_Features_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue_1;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALOTF2Character*                       K2Node_DynamicCast_AsLOTF2Character;               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D4[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class ALOTF2Character*                       K2Node_DynamicCast_AsLOTF2Character_1;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsArmorVisible_ReturnValue;               // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_6; // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_5; // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_4; // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_3; // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_2; // 0x3F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_featureName_4;          // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_category_4;             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D6[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_featureName_3;          // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_category_3;             // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D7[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_featureName_2;          // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_category_2;             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D8[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_featureName_1;          // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_category_1;             // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D9[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_featureName;            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_category;               // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DA[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_PostEventAtLocation_ReturnValue;          // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostEventAtLocation_ReturnValue_1;        // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category_1; // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_ComponentBoundEvent_Customization_Category; // 0xBE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECustomizationCategory            K2Node_Event_category;                             // 0xBF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowPanel;                           // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DB[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Event_selectedOption;                       // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               K2Node_ComponentBoundEvent_Item_1;                 // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsHovered;             // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DC[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_ComponentBoundEvent_Item;                   // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsSelected;            // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetWidgetFromItem_ReturnValue;            // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DE[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_HeadPresetWidget_list_C*            K2Node_DynamicCast_AsW_Head_Preset_Widget_List;    // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E0[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           CallFunc_GetWidgetFromItem_ReturnValue_1;          // 0x118(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       CallFunc_GetListItems_ReturnValue;                 // 0x120(0x10)(ConstParm, ReferenceParm)
	class UW_HeadPresetWidget_list_C*            K2Node_DynamicCast_AsW_Head_Preset_Widget_List_1;  // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E2[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetWidgetFromItem_ReturnValue_2;          // 0x148(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E4[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_HeadPresetWidget_list_C*            K2Node_DynamicCast_AsW_Head_Preset_Widget_List_2;  // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E5[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetMutableName_ReturnValue;               // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetMutableName_ReturnValue_1;             // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetMutableName_ReturnValue_2;             // 0x188(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetMutableName_ReturnValue_3;             // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetMutableName_ReturnValue_4;             // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


