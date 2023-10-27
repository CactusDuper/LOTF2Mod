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
// Function WBP_HSVColorSlider.WBP_HSVColorSlider_C.Get Focus Target
struct UWBP_HSVColorSlider_C_Get_Focus_Target_Params
{
public:
	class UUserWidget*                           Focus_Target;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_HSVColorSlider.WBP_HSVColorSlider_C.PreConstruct
struct UWBP_HSVColorSlider_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_HSVColorSlider.WBP_HSVColorSlider_C.BndEvt__WBP_HSVColorSlider_Intensity_Slider_K2Node_ComponentBoundEvent_0_On Value Changed__DelegateSignature
struct UWBP_HSVColorSlider_C_BndEvt__WBP_HSVColorSlider_Intensity_Slider_K2Node_ComponentBoundEvent_0_On_Value_Changed__DelegateSignature_Params
{
public:
	double                                       New_Value;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_HSVColorSlider.WBP_HSVColorSlider_C.BndEvt__WBP_HSVColorSlider_Tint_Slider_K2Node_ComponentBoundEvent_1_On Value Changed__DelegateSignature
struct UWBP_HSVColorSlider_C_BndEvt__WBP_HSVColorSlider_Tint_Slider_K2Node_ComponentBoundEvent_1_On_Value_Changed__DelegateSignature_Params
{
public:
	double                                       New_Value;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_HSVColorSlider.WBP_HSVColorSlider_C.ExecuteUbergraph_WBP_HSVColorSlider
struct UWBP_HSVColorSlider_C_ExecuteUbergraph_WBP_HSVColorSlider_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BDC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       K2Node_ComponentBoundEvent_New_Value_1;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_ComponentBoundEvent_New_Value;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPercent_InPercent_ImplicitCast_1;      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


