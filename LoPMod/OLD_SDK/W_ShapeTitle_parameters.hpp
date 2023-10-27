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
// Function W_ShapeTitle.W_ShapeTitle_C.PreConstruct
struct UW_ShapeTitle_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function W_ShapeTitle.W_ShapeTitle_C.Set Title
struct UW_ShapeTitle_C_Set_Title_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function W_ShapeTitle.W_ShapeTitle_C.ExecuteUbergraph_W_ShapeTitle
struct UW_ShapeTitle_C_ExecuteUbergraph_W_ShapeTitle_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_Title;                          // 0x8(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function W_ShapeTitle.W_ShapeTitle_C.On Customize Feature__DelegateSignature
struct UW_ShapeTitle_C_On_Customize_Feature__DelegateSignature_Params
{
public:
	enum class ECustomizationCategory            Customization_Category;                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


