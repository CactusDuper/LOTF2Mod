#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PhotoModeWidget.WBP_PhotoModeWidget_C
// (None)

class UClass* UWBP_PhotoModeWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PhotoModeWidget_C");

	return Clss;
}


// WBP_PhotoModeWidget_C WBP_PhotoModeWidget.Default__WBP_PhotoModeWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PhotoModeWidget_C* UWBP_PhotoModeWidget_C::GetDefaultObj()
{
	static class UWBP_PhotoModeWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PhotoModeWidget_C*>(UWBP_PhotoModeWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.Set Color Balance Blue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        PostProcessSettings                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        DefaultPostProcess                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::Set_Color_Balance_Blue(struct FPostProcessSettings& PostProcessSettings, int32 Index, const struct FPostProcessSettings& DefaultPostProcess, int32 Temp_int_Variable, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_BreakVector4_X_1, double CallFunc_BreakVector4_Y_1, double CallFunc_BreakVector4_Z_1, double CallFunc_BreakVector4_W_1, double CallFunc_BreakVector4_X_2, double CallFunc_BreakVector4_Y_2, double CallFunc_BreakVector4_Z_2, double CallFunc_BreakVector4_W_2, double K2Node_Select_Default, double CallFunc_BreakVector4_X_3, double CallFunc_BreakVector4_Y_3, double CallFunc_BreakVector4_Z_3, double CallFunc_BreakVector4_W_3, double CallFunc_BreakVector4_X_4, double CallFunc_BreakVector4_Y_4, double CallFunc_BreakVector4_Z_4, double CallFunc_BreakVector4_W_4, double CallFunc_BreakVector4_X_5, double CallFunc_BreakVector4_Y_5, double CallFunc_BreakVector4_Z_5, double CallFunc_BreakVector4_W_5, int32 Temp_int_Variable_1, double K2Node_Select_Default_1, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "Set Color Balance Blue");

	Params::UWBP_PhotoModeWidget_C_Set_Color_Balance_Blue_Params Parms{};

	Parms.PostProcessSettings = PostProcessSettings;
	Parms.Index = Index;
	Parms.DefaultPostProcess = DefaultPostProcess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_BreakVector4_X_1 = CallFunc_BreakVector4_X_1;
	Parms.CallFunc_BreakVector4_Y_1 = CallFunc_BreakVector4_Y_1;
	Parms.CallFunc_BreakVector4_Z_1 = CallFunc_BreakVector4_Z_1;
	Parms.CallFunc_BreakVector4_W_1 = CallFunc_BreakVector4_W_1;
	Parms.CallFunc_BreakVector4_X_2 = CallFunc_BreakVector4_X_2;
	Parms.CallFunc_BreakVector4_Y_2 = CallFunc_BreakVector4_Y_2;
	Parms.CallFunc_BreakVector4_Z_2 = CallFunc_BreakVector4_Z_2;
	Parms.CallFunc_BreakVector4_W_2 = CallFunc_BreakVector4_W_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector4_X_3 = CallFunc_BreakVector4_X_3;
	Parms.CallFunc_BreakVector4_Y_3 = CallFunc_BreakVector4_Y_3;
	Parms.CallFunc_BreakVector4_Z_3 = CallFunc_BreakVector4_Z_3;
	Parms.CallFunc_BreakVector4_W_3 = CallFunc_BreakVector4_W_3;
	Parms.CallFunc_BreakVector4_X_4 = CallFunc_BreakVector4_X_4;
	Parms.CallFunc_BreakVector4_Y_4 = CallFunc_BreakVector4_Y_4;
	Parms.CallFunc_BreakVector4_Z_4 = CallFunc_BreakVector4_Z_4;
	Parms.CallFunc_BreakVector4_W_4 = CallFunc_BreakVector4_W_4;
	Parms.CallFunc_BreakVector4_X_5 = CallFunc_BreakVector4_X_5;
	Parms.CallFunc_BreakVector4_Y_5 = CallFunc_BreakVector4_Y_5;
	Parms.CallFunc_BreakVector4_Z_5 = CallFunc_BreakVector4_Z_5;
	Parms.CallFunc_BreakVector4_W_5 = CallFunc_BreakVector4_W_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.Set Color Balance Green
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        PostProcessSettings                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        DefaultPostProcess                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::Set_Color_Balance_Green(struct FPostProcessSettings& PostProcessSettings, int32 Index, const struct FPostProcessSettings& DefaultPostProcess, int32 Temp_int_Variable, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_BreakVector4_X_1, double CallFunc_BreakVector4_Y_1, double CallFunc_BreakVector4_Z_1, double CallFunc_BreakVector4_W_1, double CallFunc_BreakVector4_X_2, double CallFunc_BreakVector4_Y_2, double CallFunc_BreakVector4_Z_2, double CallFunc_BreakVector4_W_2, double K2Node_Select_Default, double CallFunc_BreakVector4_X_3, double CallFunc_BreakVector4_Y_3, double CallFunc_BreakVector4_Z_3, double CallFunc_BreakVector4_W_3, double CallFunc_BreakVector4_X_4, double CallFunc_BreakVector4_Y_4, double CallFunc_BreakVector4_Z_4, double CallFunc_BreakVector4_W_4, double CallFunc_BreakVector4_X_5, double CallFunc_BreakVector4_Y_5, double CallFunc_BreakVector4_Z_5, double CallFunc_BreakVector4_W_5, int32 Temp_int_Variable_1, double K2Node_Select_Default_1, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "Set Color Balance Green");

	Params::UWBP_PhotoModeWidget_C_Set_Color_Balance_Green_Params Parms{};

	Parms.PostProcessSettings = PostProcessSettings;
	Parms.Index = Index;
	Parms.DefaultPostProcess = DefaultPostProcess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_BreakVector4_X_1 = CallFunc_BreakVector4_X_1;
	Parms.CallFunc_BreakVector4_Y_1 = CallFunc_BreakVector4_Y_1;
	Parms.CallFunc_BreakVector4_Z_1 = CallFunc_BreakVector4_Z_1;
	Parms.CallFunc_BreakVector4_W_1 = CallFunc_BreakVector4_W_1;
	Parms.CallFunc_BreakVector4_X_2 = CallFunc_BreakVector4_X_2;
	Parms.CallFunc_BreakVector4_Y_2 = CallFunc_BreakVector4_Y_2;
	Parms.CallFunc_BreakVector4_Z_2 = CallFunc_BreakVector4_Z_2;
	Parms.CallFunc_BreakVector4_W_2 = CallFunc_BreakVector4_W_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector4_X_3 = CallFunc_BreakVector4_X_3;
	Parms.CallFunc_BreakVector4_Y_3 = CallFunc_BreakVector4_Y_3;
	Parms.CallFunc_BreakVector4_Z_3 = CallFunc_BreakVector4_Z_3;
	Parms.CallFunc_BreakVector4_W_3 = CallFunc_BreakVector4_W_3;
	Parms.CallFunc_BreakVector4_X_4 = CallFunc_BreakVector4_X_4;
	Parms.CallFunc_BreakVector4_Y_4 = CallFunc_BreakVector4_Y_4;
	Parms.CallFunc_BreakVector4_Z_4 = CallFunc_BreakVector4_Z_4;
	Parms.CallFunc_BreakVector4_W_4 = CallFunc_BreakVector4_W_4;
	Parms.CallFunc_BreakVector4_X_5 = CallFunc_BreakVector4_X_5;
	Parms.CallFunc_BreakVector4_Y_5 = CallFunc_BreakVector4_Y_5;
	Parms.CallFunc_BreakVector4_Z_5 = CallFunc_BreakVector4_Z_5;
	Parms.CallFunc_BreakVector4_W_5 = CallFunc_BreakVector4_W_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.Set Color Balance Red
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        PostProcessSettings                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        DefaultPostProcess                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::Set_Color_Balance_Red(struct FPostProcessSettings& PostProcessSettings, int32 Index, const struct FPostProcessSettings& DefaultPostProcess, int32 Temp_int_Variable, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_BreakVector4_X_1, double CallFunc_BreakVector4_Y_1, double CallFunc_BreakVector4_Z_1, double CallFunc_BreakVector4_W_1, double CallFunc_BreakVector4_X_2, double CallFunc_BreakVector4_Y_2, double CallFunc_BreakVector4_Z_2, double CallFunc_BreakVector4_W_2, double K2Node_Select_Default, double CallFunc_BreakVector4_X_3, double CallFunc_BreakVector4_Y_3, double CallFunc_BreakVector4_Z_3, double CallFunc_BreakVector4_W_3, double CallFunc_BreakVector4_X_4, double CallFunc_BreakVector4_Y_4, double CallFunc_BreakVector4_Z_4, double CallFunc_BreakVector4_W_4, double CallFunc_BreakVector4_X_5, double CallFunc_BreakVector4_Y_5, double CallFunc_BreakVector4_Z_5, double CallFunc_BreakVector4_W_5, int32 Temp_int_Variable_1, double K2Node_Select_Default_1, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "Set Color Balance Red");

	Params::UWBP_PhotoModeWidget_C_Set_Color_Balance_Red_Params Parms{};

	Parms.PostProcessSettings = PostProcessSettings;
	Parms.Index = Index;
	Parms.DefaultPostProcess = DefaultPostProcess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_BreakVector4_X_1 = CallFunc_BreakVector4_X_1;
	Parms.CallFunc_BreakVector4_Y_1 = CallFunc_BreakVector4_Y_1;
	Parms.CallFunc_BreakVector4_Z_1 = CallFunc_BreakVector4_Z_1;
	Parms.CallFunc_BreakVector4_W_1 = CallFunc_BreakVector4_W_1;
	Parms.CallFunc_BreakVector4_X_2 = CallFunc_BreakVector4_X_2;
	Parms.CallFunc_BreakVector4_Y_2 = CallFunc_BreakVector4_Y_2;
	Parms.CallFunc_BreakVector4_Z_2 = CallFunc_BreakVector4_Z_2;
	Parms.CallFunc_BreakVector4_W_2 = CallFunc_BreakVector4_W_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector4_X_3 = CallFunc_BreakVector4_X_3;
	Parms.CallFunc_BreakVector4_Y_3 = CallFunc_BreakVector4_Y_3;
	Parms.CallFunc_BreakVector4_Z_3 = CallFunc_BreakVector4_Z_3;
	Parms.CallFunc_BreakVector4_W_3 = CallFunc_BreakVector4_W_3;
	Parms.CallFunc_BreakVector4_X_4 = CallFunc_BreakVector4_X_4;
	Parms.CallFunc_BreakVector4_Y_4 = CallFunc_BreakVector4_Y_4;
	Parms.CallFunc_BreakVector4_Z_4 = CallFunc_BreakVector4_Z_4;
	Parms.CallFunc_BreakVector4_W_4 = CallFunc_BreakVector4_W_4;
	Parms.CallFunc_BreakVector4_X_5 = CallFunc_BreakVector4_X_5;
	Parms.CallFunc_BreakVector4_Y_5 = CallFunc_BreakVector4_Y_5;
	Parms.CallFunc_BreakVector4_Z_5 = CallFunc_BreakVector4_Z_5;
	Parms.CallFunc_BreakVector4_W_5 = CallFunc_BreakVector4_W_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.Set Color Balance Intensity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        PostProcessSettings                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        DefaultPostProcess                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::Set_Color_Balance_Intensity(struct FPostProcessSettings& PostProcessSettings, int32 Index, const struct FPostProcessSettings& DefaultPostProcess, int32 Temp_int_Variable, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_BreakVector4_X_1, double CallFunc_BreakVector4_Y_1, double CallFunc_BreakVector4_Z_1, double CallFunc_BreakVector4_W_1, double CallFunc_BreakVector4_X_2, double CallFunc_BreakVector4_Y_2, double CallFunc_BreakVector4_Z_2, double CallFunc_BreakVector4_W_2, double K2Node_Select_Default, double CallFunc_BreakVector4_X_3, double CallFunc_BreakVector4_Y_3, double CallFunc_BreakVector4_Z_3, double CallFunc_BreakVector4_W_3, double CallFunc_BreakVector4_X_4, double CallFunc_BreakVector4_Y_4, double CallFunc_BreakVector4_Z_4, double CallFunc_BreakVector4_W_4, double CallFunc_BreakVector4_X_5, double CallFunc_BreakVector4_Y_5, double CallFunc_BreakVector4_Z_5, double CallFunc_BreakVector4_W_5, int32 Temp_int_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, int32 Temp_int_Variable_2, class FText K2Node_Select_Default_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, double K2Node_Select_Default_2, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "Set Color Balance Intensity");

	Params::UWBP_PhotoModeWidget_C_Set_Color_Balance_Intensity_Params Parms{};

	Parms.PostProcessSettings = PostProcessSettings;
	Parms.Index = Index;
	Parms.DefaultPostProcess = DefaultPostProcess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_BreakVector4_X_1 = CallFunc_BreakVector4_X_1;
	Parms.CallFunc_BreakVector4_Y_1 = CallFunc_BreakVector4_Y_1;
	Parms.CallFunc_BreakVector4_Z_1 = CallFunc_BreakVector4_Z_1;
	Parms.CallFunc_BreakVector4_W_1 = CallFunc_BreakVector4_W_1;
	Parms.CallFunc_BreakVector4_X_2 = CallFunc_BreakVector4_X_2;
	Parms.CallFunc_BreakVector4_Y_2 = CallFunc_BreakVector4_Y_2;
	Parms.CallFunc_BreakVector4_Z_2 = CallFunc_BreakVector4_Z_2;
	Parms.CallFunc_BreakVector4_W_2 = CallFunc_BreakVector4_W_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector4_X_3 = CallFunc_BreakVector4_X_3;
	Parms.CallFunc_BreakVector4_Y_3 = CallFunc_BreakVector4_Y_3;
	Parms.CallFunc_BreakVector4_Z_3 = CallFunc_BreakVector4_Z_3;
	Parms.CallFunc_BreakVector4_W_3 = CallFunc_BreakVector4_W_3;
	Parms.CallFunc_BreakVector4_X_4 = CallFunc_BreakVector4_X_4;
	Parms.CallFunc_BreakVector4_Y_4 = CallFunc_BreakVector4_Y_4;
	Parms.CallFunc_BreakVector4_Z_4 = CallFunc_BreakVector4_Z_4;
	Parms.CallFunc_BreakVector4_W_4 = CallFunc_BreakVector4_W_4;
	Parms.CallFunc_BreakVector4_X_5 = CallFunc_BreakVector4_X_5;
	Parms.CallFunc_BreakVector4_Y_5 = CallFunc_BreakVector4_Y_5;
	Parms.CallFunc_BreakVector4_Z_5 = CallFunc_BreakVector4_Z_5;
	Parms.CallFunc_BreakVector4_W_5 = CallFunc_BreakVector4_W_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.Set Character Rotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::Set_Character_Rotation(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "Set Character Rotation");

	Params::UWBP_PhotoModeWidget_C_Set_Character_Rotation_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.RotatePlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PLayerOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ALOTF2PosePlayerCharacter*>CallFunc_GetSpawnedPlayerCharacters_ReturnValue                  (ReferenceParm)
// class ALOTF2PosePlayerCharacter*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::RotatePlayer(float PLayerOffset, int32 Index, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<class ALOTF2PosePlayerCharacter*>& CallFunc_GetSpawnedPlayerCharacters_ReturnValue, class ALOTF2PosePlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_GetIsStateLoaded_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "RotatePlayer");

	Params::UWBP_PhotoModeWidget_C_RotatePlayer_Params Parms{};

	Parms.PLayerOffset = PLayerOffset;
	Parms.Index = Index;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetSpawnedPlayerCharacters_ReturnValue = CallFunc_GetSpawnedPlayerCharacters_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue = CallFunc_GetIsStateLoaded_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue_1 = CallFunc_K2_SetActorRotation_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.HidePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisibility                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APoseActor*                  K2Node_DynamicCast_AsPose_Actor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::HidePlayer(bool bVisibility, class AActor* Player, class APoseActor* K2Node_DynamicCast_AsPose_Actor, bool K2Node_DynamicCast_bSuccess, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetIsStateLoaded_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "HidePlayer");

	Params::UWBP_PhotoModeWidget_C_HidePlayer_Params Parms{};

	Parms.bVisibility = bVisibility;
	Parms.Player = Player;
	Parms.K2Node_DynamicCast_AsPose_Actor = K2Node_DynamicCast_AsPose_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue = CallFunc_GetIsStateLoaded_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.Pre Character Rotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ALOTF2PosePlayerCharacter*>CallFunc_GetSpawnedPlayerCharacters_ReturnValue                  (ReferenceParm)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2PosePlayerCharacter*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerCharacter*>    CallFunc_GetPlayerCharacters_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::Pre_Character_Rotation(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<class ALOTF2PosePlayerCharacter*>& CallFunc_GetSpawnedPlayerCharacters_ReturnValue, bool CallFunc_GetIsStateLoaded_ReturnValue, class ALOTF2PosePlayerCharacter* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class APlayerCharacter*>& CallFunc_GetPlayerCharacters_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerCharacter* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "Pre Character Rotation");

	Params::UWBP_PhotoModeWidget_C_Pre_Character_Rotation_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetSpawnedPlayerCharacters_ReturnValue = CallFunc_GetSpawnedPlayerCharacters_ReturnValue;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue = CallFunc_GetIsStateLoaded_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerCharacters_ReturnValue = CallFunc_GetPlayerCharacters_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.Set Character
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ALOTF2PosePlayerCharacter*>CallFunc_GetSpawnedPlayerCharacters_ReturnValue                  (ReferenceParm)
// class ALOTF2PosePlayerCharacter*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventorySoulsLantern*CallFunc_GetSoulsLanternEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ASoulsLanternActor*          CallFunc_GetSpawnedSoulsLanternActor_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::Set_Character(int32 Index, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<class ALOTF2PosePlayerCharacter*>& CallFunc_GetSpawnedPlayerCharacters_ReturnValue, class ALOTF2PosePlayerCharacter* CallFunc_Array_Get_Item, bool CallFunc_GetIsStateLoaded_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item_1, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class ASoulsLanternActor* CallFunc_GetSpawnedSoulsLanternActor_ReturnValue, class ADualRealmSoulsLanternActor_BP_C* K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "Set Character");

	Params::UWBP_PhotoModeWidget_C_Set_Character_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetSpawnedPlayerCharacters_ReturnValue = CallFunc_GetSpawnedPlayerCharacters_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue = CallFunc_GetIsStateLoaded_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetSoulsLanternEquipment_ReturnValue = CallFunc_GetSoulsLanternEquipment_ReturnValue;
	Parms.CallFunc_GetSpawnedSoulsLanternActor_ReturnValue = CallFunc_GetSpawnedSoulsLanternActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP = K2Node_DynamicCast_AsDual_Realm_Souls_Lantern_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.SetPhotoModeSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPhotoModeSettings          Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_9                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_10                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_11                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_12                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_13                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_14                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::SetPhotoModeSettings(const struct FPhotoModeSettings& Settings, int32 Temp_int_Array_Index_Variable, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, class APlayerCharacter* CallFunc_Array_Get_Item, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_Array_Length_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_ChangeValue_Value_ImplicitCast, double CallFunc_ChangeValue_Value_ImplicitCast_1, double CallFunc_ChangeValue_Value_ImplicitCast_2, double CallFunc_ChangeValue_Value_ImplicitCast_3, double CallFunc_ChangeValue_Value_ImplicitCast_4, double CallFunc_ChangeValue_Value_ImplicitCast_5, double CallFunc_ChangeValue_Value_ImplicitCast_6, double CallFunc_ChangeValue_Value_ImplicitCast_7, double CallFunc_ChangeValue_Value_ImplicitCast_8, double CallFunc_ChangeValue_Value_ImplicitCast_9, double CallFunc_ChangeValue_Value_ImplicitCast_10, double CallFunc_ChangeValue_Value_ImplicitCast_11, double CallFunc_ChangeValue_Value_ImplicitCast_12, double CallFunc_ChangeValue_Value_ImplicitCast_13, double CallFunc_ChangeValue_Value_ImplicitCast_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "SetPhotoModeSettings");

	Params::UWBP_PhotoModeWidget_C_SetPhotoModeSettings_Params Parms{};

	Parms.Settings = Settings;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast = CallFunc_ChangeValue_Value_ImplicitCast;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_1 = CallFunc_ChangeValue_Value_ImplicitCast_1;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_2 = CallFunc_ChangeValue_Value_ImplicitCast_2;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_3 = CallFunc_ChangeValue_Value_ImplicitCast_3;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_4 = CallFunc_ChangeValue_Value_ImplicitCast_4;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_5 = CallFunc_ChangeValue_Value_ImplicitCast_5;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_6 = CallFunc_ChangeValue_Value_ImplicitCast_6;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_7 = CallFunc_ChangeValue_Value_ImplicitCast_7;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_8 = CallFunc_ChangeValue_Value_ImplicitCast_8;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_9 = CallFunc_ChangeValue_Value_ImplicitCast_9;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_10 = CallFunc_ChangeValue_Value_ImplicitCast_10;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_11 = CallFunc_ChangeValue_Value_ImplicitCast_11;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_12 = CallFunc_ChangeValue_Value_ImplicitCast_12;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_13 = CallFunc_ChangeValue_Value_ImplicitCast_13;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_14 = CallFunc_ChangeValue_Value_ImplicitCast_14;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.GetPhotoModeSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPhotoModeSettings          Settings                                                         (Parm, OutParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhotoModeSettings          K2Node_MakeStruct_PhotoModeSettings                              (None)

void UWBP_PhotoModeWidget_C::GetPhotoModeSettings(struct FPhotoModeSettings* Settings, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, float CallFunc_GetValue_ReturnValue_3, float CallFunc_GetValue_ReturnValue_4, float CallFunc_GetValue_ReturnValue_5, float CallFunc_GetValue_ReturnValue_6, float CallFunc_GetValue_ReturnValue_7, float CallFunc_GetValue_ReturnValue_8, float CallFunc_GetValue_ReturnValue_9, float CallFunc_GetValue_ReturnValue_10, float CallFunc_GetValue_ReturnValue_11, float CallFunc_GetValue_ReturnValue_12, bool CallFunc_IsChecked_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FPhotoModeSettings& K2Node_MakeStruct_PhotoModeSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "GetPhotoModeSettings");

	Params::UWBP_PhotoModeWidget_C_GetPhotoModeSettings_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_GetValue_ReturnValue_2 = CallFunc_GetValue_ReturnValue_2;
	Parms.CallFunc_GetValue_ReturnValue_3 = CallFunc_GetValue_ReturnValue_3;
	Parms.CallFunc_GetValue_ReturnValue_4 = CallFunc_GetValue_ReturnValue_4;
	Parms.CallFunc_GetValue_ReturnValue_5 = CallFunc_GetValue_ReturnValue_5;
	Parms.CallFunc_GetValue_ReturnValue_6 = CallFunc_GetValue_ReturnValue_6;
	Parms.CallFunc_GetValue_ReturnValue_7 = CallFunc_GetValue_ReturnValue_7;
	Parms.CallFunc_GetValue_ReturnValue_8 = CallFunc_GetValue_ReturnValue_8;
	Parms.CallFunc_GetValue_ReturnValue_9 = CallFunc_GetValue_ReturnValue_9;
	Parms.CallFunc_GetValue_ReturnValue_10 = CallFunc_GetValue_ReturnValue_10;
	Parms.CallFunc_GetValue_ReturnValue_11 = CallFunc_GetValue_ReturnValue_11;
	Parms.CallFunc_GetValue_ReturnValue_12 = CallFunc_GetValue_ReturnValue_12;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_MakeStruct_PhotoModeSettings = K2Node_MakeStruct_PhotoModeSettings;

	UObject::ProcessEvent(Func, &Parms);

	if (Settings != nullptr)
		*Settings = std::move(Parms.Settings);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.PostInitialization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::PostInitialization(class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetIsStateLoaded_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "PostInitialization");

	Params::UWBP_PhotoModeWidget_C_PostInitialization_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue = CallFunc_GetIsStateLoaded_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.PreInitialization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MakeLiteralBool_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhotoModePlayers           K2Node_MakeStruct_PhotoModePlayers                               (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSceneState                 CallFunc_GetSceneState_ReturnValue                               (ConstParm)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerCharacter*>    CallFunc_GetPlayerCharacters_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::PreInitialization(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_MakeLiteralBool_ReturnValue, const struct FPhotoModePlayers& K2Node_MakeStruct_PhotoModePlayers, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FSceneState& CallFunc_GetSceneState_ReturnValue, bool CallFunc_GetIsStateLoaded_ReturnValue, TArray<class APlayerCharacter*>& CallFunc_GetPlayerCharacters_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "PreInitialization");

	Params::UWBP_PhotoModeWidget_C_PreInitialization_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeLiteralBool_ReturnValue = CallFunc_MakeLiteralBool_ReturnValue;
	Parms.K2Node_MakeStruct_PhotoModePlayers = K2Node_MakeStruct_PhotoModePlayers;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetSceneState_ReturnValue = CallFunc_GetSceneState_ReturnValue;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue = CallFunc_GetIsStateLoaded_ReturnValue;
	Parms.CallFunc_GetPlayerCharacters_ReturnValue = CallFunc_GetPlayerCharacters_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.PrevTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::PrevTab(int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "PrevTab");

	Params::UWBP_PhotoModeWidget_C_PrevTab_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.NextTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::NextTab(int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "NextTab");

	Params::UWBP_PhotoModeWidget_C_NextTab_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.PauseWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PhotoModeWidget_C::PauseWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "PauseWorld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ShowHideCharacterRotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_PhotoModeWidget_C::ShowHideCharacterRotation(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ShowHideCharacterRotation");

	Params::UWBP_PhotoModeWidget_C_ShowHideCharacterRotation_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.getScreenshotTitle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UWBP_PhotoModeWidget_C::GetScreenshotTitle(class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "getScreenshotTitle");

	Params::UWBP_PhotoModeWidget_C_GetScreenshotTitle_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.getAdjustedWorldDeltaSeconds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UWBP_PhotoModeWidget_C::GetAdjustedWorldDeltaSeconds(double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "getAdjustedWorldDeltaSeconds");

	Params::UWBP_PhotoModeWidget_C_GetAdjustedWorldDeltaSeconds_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.FocusDistanceVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UWBP_PhotoModeWidget_C::FocusDistanceVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "FocusDistanceVisibility");

	Params::UWBP_PhotoModeWidget_C_FocusDistanceVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.RemoveMaterialFromCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWeightedBlendable>  TargetArray                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FWeightedBlendable          Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::RemoveMaterialFromCamera(TArray<struct FWeightedBlendable>& TargetArray, struct FWeightedBlendable& Item, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "RemoveMaterialFromCamera");

	Params::UWBP_PhotoModeWidget_C_RemoveMaterialFromCamera_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.Item = Item;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.GetFocusDistance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FText UWBP_PhotoModeWidget_C::GetFocusDistance(float CallFunc_GetValue_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "GetFocusDistance");

	Params::UWBP_PhotoModeWidget_C_GetFocusDistance_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ShowHideMouseTxtButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_PhotoModeWidget_C::ShowHideMouseTxtButton(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ShowHideMouseTxtButton");

	Params::UWBP_PhotoModeWidget_C_ShowHideMouseTxtButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.CameraModeTxt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_PhotoModeWidget_C::CameraModeTxt(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "CameraModeTxt");

	Params::UWBP_PhotoModeWidget_C_CameraModeTxt_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ActiveTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CommonButtonTab_C*      ButtonToNotModify                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FButtonStyle                NormalTabStyle                                                   (Edit, BlueprintVisible)
// struct FButtonStyle                ActiveTabStyle                                                   (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CommonButtonTab_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::ActiveTab(int32 TabIndex, class UWBP_CommonButtonTab_C* ButtonToNotModify, const struct FButtonStyle& NormalTabStyle, const struct FButtonStyle& ActiveTabStyle, int32 Temp_int_Array_Index_Variable, class UWBP_CommonButtonTab_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ActiveTab");

	Params::UWBP_PhotoModeWidget_C_ActiveTab_Params Parms{};

	Parms.TabIndex = TabIndex;
	Parms.ButtonToNotModify = ButtonToNotModify;
	Parms.NormalTabStyle = NormalTabStyle;
	Parms.ActiveTabStyle = ActiveTabStyle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.OnShown_F51F52C74C69DF5085AA619688729549
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::OnShown_F51F52C74C69DF5085AA619688729549(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "OnShown_F51F52C74C69DF5085AA619688729549");

	Params::UWBP_PhotoModeWidget_C_OnShown_F51F52C74C69DF5085AA619688729549_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.OnResultNamed_F51F52C74C69DF5085AA619688729549
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::OnResultNamed_F51F52C74C69DF5085AA619688729549(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "OnResultNamed_F51F52C74C69DF5085AA619688729549");

	Params::UWBP_PhotoModeWidget_C_OnResultNamed_F51F52C74C69DF5085AA619688729549_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.OnResult_F51F52C74C69DF5085AA619688729549
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::OnResult_F51F52C74C69DF5085AA619688729549(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "OnResult_F51F52C74C69DF5085AA619688729549");

	Params::UWBP_PhotoModeWidget_C_OnResult_F51F52C74C69DF5085AA619688729549_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.OnResetPhotoMode
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PhotoModeWidget_C::OnResetPhotoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "OnResetPhotoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ToggleWidgetSwitcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::ToggleWidgetSwitcher(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ToggleWidgetSwitcher");

	Params::UWBP_PhotoModeWidget_C_ToggleWidgetSwitcher_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__WBP_PhotoModeWidget_HideAIs_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__WBP_PhotoModeWidget_HideAIs_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__WBP_PhotoModeWidget_HideAIs_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__WBP_PhotoModeWidget_HideAIs_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ToggleGrid
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PhotoModeWidget_C::ToggleGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ToggleGrid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__WBP_PhotoModeWidget_PlayerOffset_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__WBP_PhotoModeWidget_PlayerOffset_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__WBP_PhotoModeWidget_PlayerOffset_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__WBP_PhotoModeWidget_PlayerOffset_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.OnQuit
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PhotoModeWidget_C::OnQuit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "OnQuit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__WBP_PhotoModeWidget_Players_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__WBP_PhotoModeWidget_Players_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__WBP_PhotoModeWidget_Players_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__WBP_PhotoModeWidget_Players_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.InterpolationUpdater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::InterpolationUpdater(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "InterpolationUpdater");

	Params::UWBP_PhotoModeWidget_C_InterpolationUpdater_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ResetShowMouseCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PhotoModeWidget_C::ResetShowMouseCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ResetShowMouseCursor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ShowMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PhotoModeWidget_C::ShowMouse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ShowMouse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ToggleMenuEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PhotoModeWidget_C::ToggleMenuEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ToggleMenuEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_PhotoModeWidget_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.SendPhotoData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSPhotosData                PhotoData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::SendPhotoData(const struct FSPhotosData& PhotoData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "SendPhotoData");

	Params::UWBP_PhotoModeWidget_C_SendPhotoData_Params Parms{};

	Parms.PhotoData = PhotoData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.OnInputMethodChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::OnInputMethodChanged_Event(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "OnInputMethodChanged_Event");

	Params::UWBP_PhotoModeWidget_C_OnInputMethodChanged_Event_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.SetFocusBasedOnTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::SetFocusBasedOnTab(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "SetFocusBasedOnTab");

	Params::UWBP_PhotoModeWidget_C_SetFocusBasedOnTab_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.TabToOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CommonButtonTab_C*      CommonButtonPressed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::TabToOpen(int32 TabIndex, class UWBP_CommonButtonTab_C* CommonButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "TabToOpen");

	Params::UWBP_PhotoModeWidget_C_TabToOpen_Params Parms{};

	Parms.TabIndex = TabIndex;
	Parms.CommonButtonPressed = CommonButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__CommonCheckbox_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__CommonCheckbox_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__CommonCheckbox_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__CommonCheckbox_K2Node_ComponentBoundEvent_3_CheckboxDispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__Brightness_K2Node_ComponentBoundEvent_5_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__Brightness_K2Node_ComponentBoundEvent_5_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__Brightness_K2Node_ComponentBoundEvent_5_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__Brightness_K2Node_ComponentBoundEvent_5_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__Temperature_K2Node_ComponentBoundEvent_6_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__Temperature_K2Node_ComponentBoundEvent_6_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__Temperature_K2Node_ComponentBoundEvent_6_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__Temperature_K2Node_ComponentBoundEvent_6_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__Tint_K2Node_ComponentBoundEvent_7_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__Tint_K2Node_ComponentBoundEvent_7_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__Tint_K2Node_ComponentBoundEvent_7_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__Tint_K2Node_ComponentBoundEvent_7_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__Bloom_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__Bloom_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__Bloom_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__Bloom_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__ChromaticAberrationIntensity_K2Node_ComponentBoundEvent_8_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__ChromaticAberrationIntensity_K2Node_ComponentBoundEvent_8_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__ChromaticAberrationIntensity_K2Node_ComponentBoundEvent_8_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__ChromaticAberrationIntensity_K2Node_ComponentBoundEvent_8_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__ChromaticAberrationOffset_K2Node_ComponentBoundEvent_9_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__ChromaticAberrationOffset_K2Node_ComponentBoundEvent_9_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__ChromaticAberrationOffset_K2Node_ComponentBoundEvent_9_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__ChromaticAberrationOffset_K2Node_ComponentBoundEvent_9_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__FilmGrain_K2Node_ComponentBoundEvent_10_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__FilmGrain_K2Node_ComponentBoundEvent_10_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__FilmGrain_K2Node_ComponentBoundEvent_10_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__FilmGrain_K2Node_ComponentBoundEvent_10_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__MotionBlur_K2Node_ComponentBoundEvent_11_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__MotionBlur_K2Node_ComponentBoundEvent_11_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__MotionBlur_K2Node_ComponentBoundEvent_11_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__MotionBlur_K2Node_ComponentBoundEvent_11_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__Vignette_K2Node_ComponentBoundEvent_12_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__Vignette_K2Node_ComponentBoundEvent_12_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__Vignette_K2Node_ComponentBoundEvent_12_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__Vignette_K2Node_ComponentBoundEvent_12_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__FocusDistance_K2Node_ComponentBoundEvent_13_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__FocusDistance_K2Node_ComponentBoundEvent_13_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__FocusDistance_K2Node_ComponentBoundEvent_13_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__FocusDistance_K2Node_ComponentBoundEvent_13_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__PhotoAperture_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__PhotoAperture_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__PhotoAperture_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__PhotoAperture_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__SensorWidth_K2Node_ComponentBoundEvent_15_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__SensorWidth_K2Node_ComponentBoundEvent_15_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__SensorWidth_K2Node_ComponentBoundEvent_15_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__SensorWidth_K2Node_ComponentBoundEvent_15_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__Autofocus_K2Node_ComponentBoundEvent_19_CheckboxDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__Autofocus_K2Node_ComponentBoundEvent_19_CheckboxDispatcher__DelegateSignature(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__Autofocus_K2Node_ComponentBoundEvent_19_CheckboxDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__Autofocus_K2Node_ComponentBoundEvent_19_CheckboxDispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "Tick");

	Params::UWBP_PhotoModeWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ResetColorBalance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        PostProcessSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PhotoModeWidget_C::ResetColorBalance(const struct FPostProcessSettings& PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ResetColorBalance");

	Params::UWBP_PhotoModeWidget_C_ResetColorBalance_Params Parms{};

	Parms.PostProcessSettings = PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_21_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_21_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_21_Dispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__ColorBalanceSelector_K2Node_ComponentBoundEvent_21_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__ColorBalanceRed_K2Node_ComponentBoundEvent_22_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__ColorBalanceRed_K2Node_ComponentBoundEvent_22_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__ColorBalanceRed_K2Node_ComponentBoundEvent_22_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__ColorBalanceRed_K2Node_ComponentBoundEvent_22_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__ColorBalanceGreen_K2Node_ComponentBoundEvent_23_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__ColorBalanceGreen_K2Node_ComponentBoundEvent_23_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__ColorBalanceGreen_K2Node_ComponentBoundEvent_23_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__ColorBalanceGreen_K2Node_ComponentBoundEvent_23_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__ColorBalanceBlue_K2Node_ComponentBoundEvent_24_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__ColorBalanceBlue_K2Node_ComponentBoundEvent_24_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__ColorBalanceBlue_K2Node_ComponentBoundEvent_24_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__ColorBalanceBlue_K2Node_ComponentBoundEvent_24_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__ColorBalanceIntensity_K2Node_ComponentBoundEvent_25_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__ColorBalanceIntensity_K2Node_ComponentBoundEvent_25_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__ColorBalanceIntensity_K2Node_ComponentBoundEvent_25_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__ColorBalanceIntensity_K2Node_ComponentBoundEvent_25_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__FrameSize_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__FrameSize_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__FrameSize_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__FrameSize_K2Node_ComponentBoundEvent_4_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__FrameRed_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__FrameRed_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__FrameRed_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__FrameRed_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__FrameGreen_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__FrameGreen_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__FrameGreen_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__FrameGreen_K2Node_ComponentBoundEvent_2_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__FrameBlue_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__FrameBlue_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__FrameBlue_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__FrameBlue_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__FrameSelector_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__FrameSelector_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__FrameSelector_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__FrameSelector_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__LogoSize_1_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__LogoSize_1_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__LogoSize_1_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__LogoSize_1_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__LogoSize_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__LogoSize_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__LogoSize_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__LogoSize_K2Node_ComponentBoundEvent_3_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__CommonSlider_1_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__CommonSlider_1_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__CommonSlider_1_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__CommonSlider_1_K2Node_ComponentBoundEvent_1_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__CommonSlider_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__CommonSlider_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__CommonSlider_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__CommonSlider_K2Node_ComponentBoundEvent_0_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__Logo_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__Logo_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__Logo_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__Logo_K2Node_ComponentBoundEvent_2_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.OnDestruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PhotoModeWidget_C::OnDestruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "OnDestruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.Initialization
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_PhotoModeComponent_C*    PhotoModeComponentReference                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::Initialization(class UBP_PhotoModeComponent_C* PhotoModeComponentReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "Initialization");

	Params::UWBP_PhotoModeWidget_C_Initialization_Params Parms{};

	Parms.PhotoModeComponentReference = PhotoModeComponentReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ChangeTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::ChangeTab(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ChangeTab");

	Params::UWBP_PhotoModeWidget_C_ChangeTab_Params Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.Focus
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WidgetItem                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::Focus(class UWidget*& WidgetItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "Focus");

	Params::UWBP_PhotoModeWidget_C_Focus_Params Parms{};

	Parms.WidgetItem = WidgetItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__Filter_K2Node_ComponentBoundEvent_17_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__Filter_K2Node_ComponentBoundEvent_17_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__Filter_K2Node_ComponentBoundEvent_17_Dispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__Filter_K2Node_ComponentBoundEvent_17_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__LUTIntensity_K2Node_ComponentBoundEvent_18_SliderDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__LUTIntensity_K2Node_ComponentBoundEvent_18_SliderDispatcher__DelegateSignature(double SliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__LUTIntensity_K2Node_ComponentBoundEvent_18_SliderDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__LUTIntensity_K2Node_ComponentBoundEvent_18_SliderDispatcher__DelegateSignature_Params Parms{};

	Parms.SliderValue = SliderValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__SelectorSlider_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__SelectorSlider_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__SelectorSlider_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__SelectorSlider_K2Node_ComponentBoundEvent_0_Dispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__TurnPlayerToCamera_K2Node_ComponentBoundEvent_0_CheckboxDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__TurnPlayerToCamera_K2Node_ComponentBoundEvent_0_CheckboxDispatcher__DelegateSignature(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__TurnPlayerToCamera_K2Node_ComponentBoundEvent_0_CheckboxDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__TurnPlayerToCamera_K2Node_ComponentBoundEvent_0_CheckboxDispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.BndEvt__HidePlayer_K2Node_ComponentBoundEvent_20_CheckboxDispatcher__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::BndEvt__HidePlayer_K2Node_ComponentBoundEvent_20_CheckboxDispatcher__DelegateSignature(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "BndEvt__HidePlayer_K2Node_ComponentBoundEvent_20_CheckboxDispatcher__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_BndEvt__HidePlayer_K2Node_ComponentBoundEvent_20_CheckboxDispatcher__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ExecuteUbergraph_WBP_PhotoModeWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// struct FIntPoint                   CallFunc_Get_Default_Screen_Resolution_Resolution__X_and_Y_      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_1                            (NoDestructor)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_CommonButtonTab_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// TArray<class UWBP_CommonCheckbox_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// TArray<class UWBP_SelectorSlider_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (ReferenceParm, ContainsInstancedReference)
// TArray<class UWBP_CommonSlider_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets_3                     (ReferenceParm, ContainsInstancedReference)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TabIndex                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CommonButtonTab_C*      K2Node_Event_CommonButtonPressed                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Value_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_23                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_22                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_21                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_20                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_19                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_18                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue_1                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSPostProcessPressets       CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_17                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_16                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_15                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_14                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_13                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Value_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_5                                         (ConstParm, ReferenceParm)
// class AActor*                      K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_6                                         (ConstParm, ReferenceParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingleForObjects_OutHit                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingleForObjects_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSPhotosData                K2Node_Event_PhotoData                                           (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        K2Node_CustomEvent_PostProcessSettings                           (None)
// double                             K2Node_ComponentBoundEvent_Value_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PhotoMode_C*             K2Node_DynamicCast_AsBP_Photo_Mode                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ALOTF2PosePlayerCharacter*>CallFunc_GetSpawnedPlayerCharacters_ReturnValue                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue_2                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_DeltaTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// int32                              CallFunc_FTrunc_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancel_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_24                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSPostProcessRendering      CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Value_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_7                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_8                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_9                                         (ReferenceParm)
// struct FWeightedBlendable          CallFunc_Array_Get_Item_2                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_10                                        (ReferenceParm)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          CallFunc_Array_Get_Item_3                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue_3                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          CallFunc_Array_Get_Item_4                                        (NoDestructor)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_2                            (NoDestructor)
// double                             K2Node_ComponentBoundEvent_Value_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_5                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_11                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_PhotoModeComponent_C*    K2Node_CustomEvent_PhotoModeComponentReference                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TabIndex                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_WidgetItem                                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CommonButtonTab_C*      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSPhotoModeComponentGameLogoCallFunc_Array_Get_Item_6                                        (HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable_2                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_SliderValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          CallFunc_Array_Get_Item_7                                        (NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_3                            (NoDestructor)
// bool                               K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CommonButtonTab_C*      CallFunc_Array_Get_Item_8                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_2            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_3            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_4            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_5            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_WhiteTint_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_BlueCorrection_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_6            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_7            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_ChromaticAberrationStartOffset_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_FilmGrainIntensity_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_MotionBlurAmount_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldSensorWidth_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_InterpolationUpdater_DeltaTime_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_HitDistance_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_HitDistance_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_8            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_9            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RotatePlayer_PlayerOffset_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_10           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_R_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_G_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_B_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ChangeValue_Value_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_11           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_12           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_13           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_14           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_15           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_16           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_5                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_6                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_7                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_8                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Initialize_DefaultValue_ImplicitCast_9                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_SetFieldsInStruct_ColorGradingIntensity_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::ExecuteUbergraph_WBP_PhotoModeWidget(int32 EntryPoint, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetIsStateLoaded_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class AActor* Temp_object_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, TArray<class FText>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool K2Node_SwitchInteger_CmpSuccess, double Temp_real_Variable, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array_2, const struct FIntPoint& CallFunc_Get_Default_Screen_Resolution_Resolution__X_and_Y_, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_1, double Temp_real_Variable_1, int32 CallFunc_Array_Length_ReturnValue_4, double Temp_real_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_5, double Temp_real_Variable_3, TArray<class UWBP_CommonButtonTab_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, TArray<class UWBP_CommonCheckbox_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, TArray<class UWBP_SelectorSlider_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, TArray<class UWBP_CommonSlider_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_3, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double Temp_real_Variable_4, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 K2Node_CustomEvent_Index, int32 CallFunc_Array_Length_ReturnValue_6, int32 K2Node_Event_TabIndex, class UWBP_CommonButtonTab_C* K2Node_Event_CommonButtonPressed, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_2, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double Temp_real_Variable_8, bool K2Node_ComponentBoundEvent_Value_9, double Temp_real_Variable_9, double Temp_real_Variable_10, double K2Node_ComponentBoundEvent_SliderValue_23, const struct FVector4& CallFunc_MakeVector4_ReturnValue, double Temp_real_Variable_11, double K2Node_ComponentBoundEvent_SliderValue_22, int32 Temp_int_Variable, double K2Node_ComponentBoundEvent_SliderValue_21, double K2Node_ComponentBoundEvent_SliderValue_20, double K2Node_ComponentBoundEvent_SliderValue_19, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_3, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, double K2Node_ComponentBoundEvent_SliderValue_18, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_GetIsStateLoaded_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, const struct FSPostProcessPressets& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_3, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, double K2Node_ComponentBoundEvent_SliderValue_17, double K2Node_ComponentBoundEvent_SliderValue_16, double K2Node_ComponentBoundEvent_SliderValue_15, class UWidget* Temp_object_Variable_1, int32 Temp_int_Variable_1, class UWidget* K2Node_Select_Default, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, double K2Node_ComponentBoundEvent_SliderValue_14, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double K2Node_ComponentBoundEvent_Value_8, int32 CallFunc_FTrunc_ReturnValue, double K2Node_Select_Default_1, double K2Node_ComponentBoundEvent_SliderValue_13, bool K2Node_ComponentBoundEvent_Value_7, int32 Temp_int_Array_Index_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_5, class AActor* K2Node_Select_Default_2, TArray<class AActor*>& K2Node_MakeArray_Array_6, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_SafeDivide_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_4, const struct FSPhotosData& K2Node_Event_PhotoData, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, int32 CallFunc_FTrunc_ReturnValue_1, const struct FPostProcessSettings& K2Node_CustomEvent_PostProcessSettings, double K2Node_ComponentBoundEvent_Value_6, int32 CallFunc_FTrunc_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PhotoMode_C* K2Node_DynamicCast_AsBP_Photo_Mode, bool K2Node_DynamicCast_bSuccess, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, double K2Node_ComponentBoundEvent_SliderValue_12, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, TArray<class ALOTF2PosePlayerCharacter*>& CallFunc_GetSpawnedPlayerCharacters_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_GetIsStateLoaded_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetValue_ReturnValue, double K2Node_ComponentBoundEvent_SliderValue_11, int32 CallFunc_FTrunc_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_1, float CallFunc_GetValue_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess_2, double K2Node_ComponentBoundEvent_SliderValue_10, double K2Node_CustomEvent_DeltaTime, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_6, double K2Node_ComponentBoundEvent_Value_10, class FText CallFunc_MakeLiteralText_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_3, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_ComponentBoundEvent_SliderValue_24, int32 Temp_int_Array_Index_Variable_4, float CallFunc_GetValue_ReturnValue_2, double K2Node_ComponentBoundEvent_SliderValue_9, int32 CallFunc_FTrunc_ReturnValue_6, int32 Temp_int_Array_Index_Variable_5, bool K2Node_SwitchInteger_CmpSuccess_3, const struct FSPostProcessRendering& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue, bool K2Node_ComponentBoundEvent_Value_11, float CallFunc_GetValue_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_7, bool K2Node_SwitchInteger_CmpSuccess_4, bool K2Node_CustomEvent_Active, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_7, int32 CallFunc_Array_Length_ReturnValue_8, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_8, int32 CallFunc_Array_Length_ReturnValue_9, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_9, const struct FWeightedBlendable& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_10, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_10, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FWeightedBlendable& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_11, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue_4, double K2Node_ComponentBoundEvent_SliderValue_8, double K2Node_ComponentBoundEvent_SliderValue_7, double K2Node_ComponentBoundEvent_SliderValue_6, const struct FLinearColor& K2Node_MakeStruct_LinearColor, double K2Node_ComponentBoundEvent_SliderValue_5, double K2Node_ComponentBoundEvent_Value_5, int32 CallFunc_FTrunc_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_5, int32 Temp_int_Loop_Counter_Variable_5, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_8, float CallFunc_GetValue_ReturnValue_4, float CallFunc_GetValue_ReturnValue_5, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_GetIsStateLoaded_ReturnValue_3, double K2Node_ComponentBoundEvent_SliderValue_4, double CallFunc_MapRangeClamped_ReturnValue, int32 Temp_int_Array_Index_Variable_6, const struct FWeightedBlendable& CallFunc_Array_Get_Item_4, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2, bool K2Node_DynamicCast_bSuccess_3, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, double K2Node_ComponentBoundEvent_SliderValue_3, double K2Node_ComponentBoundEvent_SliderValue_2, double K2Node_ComponentBoundEvent_SliderValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_2, double K2Node_ComponentBoundEvent_Value_4, int32 CallFunc_FTrunc_ReturnValue_9, int32 CallFunc_Subtract_IntInt_ReturnValue_1, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, int32 CallFunc_Array_Add_ReturnValue_2, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, double CallFunc_BreakVector4_X_1, double CallFunc_BreakVector4_Y_1, double CallFunc_BreakVector4_Z_1, double CallFunc_BreakVector4_W_1, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, const struct FVector4& CallFunc_MakeVector4_ReturnValue_2, double CallFunc_BreakVector4_X_2, double CallFunc_BreakVector4_Y_2, double CallFunc_BreakVector4_Z_2, double CallFunc_BreakVector4_W_2, const struct FVector4& CallFunc_MakeVector4_ReturnValue_3, double CallFunc_BreakVector4_X_3, double CallFunc_BreakVector4_Y_3, double CallFunc_BreakVector4_Z_3, double CallFunc_BreakVector4_W_3, const struct FVector4& CallFunc_MakeVector4_ReturnValue_4, double CallFunc_BreakVector4_X_4, double CallFunc_BreakVector4_Y_4, double CallFunc_BreakVector4_Z_4, double CallFunc_BreakVector4_W_4, const struct FVector4& CallFunc_MakeVector4_ReturnValue_5, double CallFunc_BreakVector4_X_5, double CallFunc_BreakVector4_Y_5, double CallFunc_BreakVector4_Z_5, double CallFunc_BreakVector4_W_5, const struct FVector4& CallFunc_MakeVector4_ReturnValue_6, double CallFunc_BreakVector4_X_6, double CallFunc_BreakVector4_Y_6, double CallFunc_BreakVector4_Z_6, double CallFunc_BreakVector4_W_6, double CallFunc_BreakVector4_X_7, double CallFunc_BreakVector4_Y_7, double CallFunc_BreakVector4_Z_7, double CallFunc_BreakVector4_W_7, const struct FVector4& CallFunc_MakeVector4_ReturnValue_7, const struct FVector4& CallFunc_MakeVector4_ReturnValue_8, double CallFunc_BreakVector4_X_8, double CallFunc_BreakVector4_Y_8, double CallFunc_BreakVector4_Z_8, double CallFunc_BreakVector4_W_8, const struct FVector4& CallFunc_MakeVector4_ReturnValue_9, double CallFunc_BreakVector4_X_9, double CallFunc_BreakVector4_Y_9, double CallFunc_BreakVector4_Z_9, double CallFunc_BreakVector4_W_9, const struct FVector4& CallFunc_MakeVector4_ReturnValue_10, double CallFunc_BreakVector4_X_10, double CallFunc_BreakVector4_Y_10, double CallFunc_BreakVector4_Z_10, double CallFunc_BreakVector4_W_10, const struct FVector4& CallFunc_MakeVector4_ReturnValue_11, double CallFunc_BreakVector4_X_11, double CallFunc_BreakVector4_Y_11, double CallFunc_BreakVector4_Z_11, double CallFunc_BreakVector4_W_11, const struct FVector4& CallFunc_MakeVector4_ReturnValue_12, double CallFunc_FInterpTo_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_6, class UBP_PhotoModeComponent_C* K2Node_CustomEvent_PhotoModeComponentReference, int32 K2Node_CustomEvent_TabIndex, double CallFunc_BreakVector4_X_12, double CallFunc_BreakVector4_Y_12, double CallFunc_BreakVector4_Z_12, double CallFunc_BreakVector4_W_12, class UWidget* K2Node_CustomEvent_WidgetItem, int32 Temp_int_Array_Index_Variable_7, class UWBP_CommonButtonTab_C* CallFunc_Array_Get_Item_5, bool CallFunc_IsValid_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_7, int32 Temp_int_Loop_Counter_Variable_8, bool CallFunc_Less_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_10, int32 CallFunc_Array_Add_ReturnValue_4, int32 Temp_int_Array_Index_Variable_8, double K2Node_ComponentBoundEvent_Value_3, const struct FSPhotoModeComponentGameLogo& CallFunc_Array_Get_Item_6, int32 CallFunc_FTrunc_ReturnValue_10, int32 CallFunc_FTrunc_ReturnValue_11, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_12, enum class EMessagingResult Temp_byte_Variable, class UHexGameDialog* Temp_object_Variable_2, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, double K2Node_ComponentBoundEvent_SliderValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable_9, const struct FWeightedBlendable& CallFunc_Array_Get_Item_7, bool CallFunc_Array_RemoveItem_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3, bool K2Node_DynamicCast_bSuccess_4, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_2, double K2Node_ComponentBoundEvent_Value_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_13, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_3, bool K2Node_ComponentBoundEvent_Value_1, bool K2Node_ComponentBoundEvent_Value, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Loop_Counter_Variable_9, int32 Temp_int_Loop_Counter_Variable_10, bool CallFunc_Less_IntInt_ReturnValue_9, int32 CallFunc_Add_IntInt_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_10, int32 CallFunc_Add_IntInt_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable_10, class UWBP_CommonButtonTab_C* CallFunc_Array_Get_Item_8, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_5, float CallFunc_BreakRotator_Pitch_5, float CallFunc_BreakRotator_Yaw_5, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_5, float K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast, float K2Node_SetFieldsInStruct_WhiteTint_ImplicitCast, float K2Node_SetFieldsInStruct_BlueCorrection_ImplicitCast, float K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_6, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_7, float K2Node_SetFieldsInStruct_ChromaticAberrationStartOffset_ImplicitCast, float K2Node_SetFieldsInStruct_FilmGrainIntensity_ImplicitCast, float K2Node_SetFieldsInStruct_MotionBlurAmount_ImplicitCast, float K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldSensorWidth_ImplicitCast, double CallFunc_InterpolationUpdater_DeltaTime_ImplicitCast, double K2Node_VariableSet_HitDistance_ImplicitCast, double K2Node_VariableSet_HitDistance_ImplicitCast_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_8, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_9, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, float CallFunc_RotatePlayer_PlayerOffset_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_2, double CallFunc_FTrunc_A_ImplicitCast_3, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_10, float K2Node_MakeStruct_R_ImplicitCast, float K2Node_MakeStruct_G_ImplicitCast, float K2Node_MakeStruct_B_ImplicitCast, double CallFunc_ChangeValue_Value_ImplicitCast, double CallFunc_ChangeValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_11, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_12, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_13, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_14, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_15, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_16, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_Initialize_DefaultValue_ImplicitCast, double CallFunc_Initialize_DefaultValue_ImplicitCast_1, double CallFunc_Initialize_DefaultValue_ImplicitCast_2, double CallFunc_Initialize_DefaultValue_ImplicitCast_3, double CallFunc_Initialize_DefaultValue_ImplicitCast_4, double CallFunc_Initialize_DefaultValue_ImplicitCast_5, double CallFunc_Initialize_DefaultValue_ImplicitCast_6, double CallFunc_Initialize_DefaultValue_ImplicitCast_7, double CallFunc_Initialize_DefaultValue_ImplicitCast_8, double CallFunc_Initialize_DefaultValue_ImplicitCast_9, float K2Node_SetFieldsInStruct_ColorGradingIntensity_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ExecuteUbergraph_WBP_PhotoModeWidget");

	Params::UWBP_PhotoModeWidget_C_ExecuteUbergraph_WBP_PhotoModeWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue = CallFunc_GetIsStateLoaded_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Get_Default_Screen_Resolution_Resolution__X_and_Y_ = CallFunc_Get_Default_Screen_Resolution_Resolution__X_and_Y_;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.K2Node_MakeStruct_WeightedBlendable_1 = K2Node_MakeStruct_WeightedBlendable_1;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_2 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_2;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_3 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_3;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_GetViewportSize_ReturnValue_1 = CallFunc_GetViewportSize_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.K2Node_Event_TabIndex = K2Node_Event_TabIndex;
	Parms.K2Node_Event_CommonButtonPressed = K2Node_Event_CommonButtonPressed;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetViewportSize_ReturnValue_2 = CallFunc_GetViewportSize_ReturnValue_2;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.K2Node_ComponentBoundEvent_Value_9 = K2Node_ComponentBoundEvent_Value_9;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.K2Node_ComponentBoundEvent_SliderValue_23 = K2Node_ComponentBoundEvent_SliderValue_23;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.Temp_real_Variable_11 = Temp_real_Variable_11;
	Parms.K2Node_ComponentBoundEvent_SliderValue_22 = K2Node_ComponentBoundEvent_SliderValue_22;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_ComponentBoundEvent_SliderValue_21 = K2Node_ComponentBoundEvent_SliderValue_21;
	Parms.K2Node_ComponentBoundEvent_SliderValue_20 = K2Node_ComponentBoundEvent_SliderValue_20;
	Parms.K2Node_ComponentBoundEvent_SliderValue_19 = K2Node_ComponentBoundEvent_SliderValue_19;
	Parms.CallFunc_GetViewportSize_ReturnValue_3 = CallFunc_GetViewportSize_ReturnValue_3;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.K2Node_ComponentBoundEvent_SliderValue_18 = K2Node_ComponentBoundEvent_SliderValue_18;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue_1 = CallFunc_GetIsStateLoaded_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_SliderValue_17 = K2Node_ComponentBoundEvent_SliderValue_17;
	Parms.K2Node_ComponentBoundEvent_SliderValue_16 = K2Node_ComponentBoundEvent_SliderValue_16;
	Parms.K2Node_ComponentBoundEvent_SliderValue_15 = K2Node_ComponentBoundEvent_SliderValue_15;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SliderValue_14 = K2Node_ComponentBoundEvent_SliderValue_14;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_8 = K2Node_ComponentBoundEvent_Value_8;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_ComponentBoundEvent_SliderValue_13 = K2Node_ComponentBoundEvent_SliderValue_13;
	Parms.K2Node_ComponentBoundEvent_Value_7 = K2Node_ComponentBoundEvent_Value_7;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_SphereTraceSingleForObjects_OutHit = CallFunc_SphereTraceSingleForObjects_OutHit;
	Parms.CallFunc_SphereTraceSingleForObjects_ReturnValue = CallFunc_SphereTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_BoneName_1 = CallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_GetViewportSize_ReturnValue_4 = CallFunc_GetViewportSize_ReturnValue_4;
	Parms.K2Node_Event_PhotoData = K2Node_Event_PhotoData;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.K2Node_CustomEvent_PostProcessSettings = K2Node_CustomEvent_PostProcessSettings;
	Parms.K2Node_ComponentBoundEvent_Value_6 = K2Node_ComponentBoundEvent_Value_6;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Photo_Mode = K2Node_DynamicCast_AsBP_Photo_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue_1 = CallFunc_GetCurrentInputType_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_ComponentBoundEvent_SliderValue_12 = K2Node_ComponentBoundEvent_SliderValue_12;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_GetSpawnedPlayerCharacters_ReturnValue = CallFunc_GetSpawnedPlayerCharacters_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue_2 = CallFunc_GetIsStateLoaded_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SliderValue_11 = K2Node_ComponentBoundEvent_SliderValue_11;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_4 = CallFunc_FTrunc_ReturnValue_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_ComponentBoundEvent_SliderValue_10 = K2Node_ComponentBoundEvent_SliderValue_10;
	Parms.K2Node_CustomEvent_DeltaTime = K2Node_CustomEvent_DeltaTime;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.K2Node_ComponentBoundEvent_Value_10 = K2Node_ComponentBoundEvent_Value_10;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_5 = CallFunc_FTrunc_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_ShowConfirmationOkCancel_ReturnValue = CallFunc_ShowConfirmationOkCancel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_SliderValue_24 = K2Node_ComponentBoundEvent_SliderValue_24;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_GetValue_ReturnValue_2 = CallFunc_GetValue_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_SliderValue_9 = K2Node_ComponentBoundEvent_SliderValue_9;
	Parms.CallFunc_FTrunc_ReturnValue_6 = CallFunc_FTrunc_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_11 = K2Node_ComponentBoundEvent_Value_11;
	Parms.CallFunc_GetValue_ReturnValue_3 = CallFunc_GetValue_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue_7 = CallFunc_FTrunc_ReturnValue_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_Array_Length_ReturnValue_9 = CallFunc_Array_Length_ReturnValue_9;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_10 = CallFunc_Array_Length_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeArray_Array_10 = K2Node_MakeArray_Array_10;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = CallFunc_K2_GetVectorParameterValue_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_11 = CallFunc_Array_Length_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_SliderValue_8 = K2Node_ComponentBoundEvent_SliderValue_8;
	Parms.K2Node_ComponentBoundEvent_SliderValue_7 = K2Node_ComponentBoundEvent_SliderValue_7;
	Parms.K2Node_ComponentBoundEvent_SliderValue_6 = K2Node_ComponentBoundEvent_SliderValue_6;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_ComponentBoundEvent_SliderValue_5 = K2Node_ComponentBoundEvent_SliderValue_5;
	Parms.K2Node_ComponentBoundEvent_Value_5 = K2Node_ComponentBoundEvent_Value_5;
	Parms.CallFunc_FTrunc_ReturnValue_8 = CallFunc_FTrunc_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_GetValue_ReturnValue_4 = CallFunc_GetValue_ReturnValue_4;
	Parms.CallFunc_GetValue_ReturnValue_5 = CallFunc_GetValue_ReturnValue_5;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue_3 = CallFunc_GetIsStateLoaded_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_SliderValue_4 = K2Node_ComponentBoundEvent_SliderValue_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue_1 = CallFunc_K2_GetVectorParameterValue_ReturnValue_1;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_ComponentBoundEvent_SliderValue_3 = K2Node_ComponentBoundEvent_SliderValue_3;
	Parms.K2Node_ComponentBoundEvent_SliderValue_2 = K2Node_ComponentBoundEvent_SliderValue_2;
	Parms.K2Node_ComponentBoundEvent_SliderValue_1 = K2Node_ComponentBoundEvent_SliderValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_MakeStruct_WeightedBlendable_2 = K2Node_MakeStruct_WeightedBlendable_2;
	Parms.K2Node_ComponentBoundEvent_Value_4 = K2Node_ComponentBoundEvent_Value_4;
	Parms.CallFunc_FTrunc_ReturnValue_9 = CallFunc_FTrunc_ReturnValue_9;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_5 = CallFunc_BreakVector2D_X_5;
	Parms.CallFunc_BreakVector2D_Y_5 = CallFunc_BreakVector2D_Y_5;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.CallFunc_BreakVector4_X_1 = CallFunc_BreakVector4_X_1;
	Parms.CallFunc_BreakVector4_Y_1 = CallFunc_BreakVector4_Y_1;
	Parms.CallFunc_BreakVector4_Z_1 = CallFunc_BreakVector4_Z_1;
	Parms.CallFunc_BreakVector4_W_1 = CallFunc_BreakVector4_W_1;
	Parms.CallFunc_MakeVector4_ReturnValue_1 = CallFunc_MakeVector4_ReturnValue_1;
	Parms.CallFunc_MakeVector4_ReturnValue_2 = CallFunc_MakeVector4_ReturnValue_2;
	Parms.CallFunc_BreakVector4_X_2 = CallFunc_BreakVector4_X_2;
	Parms.CallFunc_BreakVector4_Y_2 = CallFunc_BreakVector4_Y_2;
	Parms.CallFunc_BreakVector4_Z_2 = CallFunc_BreakVector4_Z_2;
	Parms.CallFunc_BreakVector4_W_2 = CallFunc_BreakVector4_W_2;
	Parms.CallFunc_MakeVector4_ReturnValue_3 = CallFunc_MakeVector4_ReturnValue_3;
	Parms.CallFunc_BreakVector4_X_3 = CallFunc_BreakVector4_X_3;
	Parms.CallFunc_BreakVector4_Y_3 = CallFunc_BreakVector4_Y_3;
	Parms.CallFunc_BreakVector4_Z_3 = CallFunc_BreakVector4_Z_3;
	Parms.CallFunc_BreakVector4_W_3 = CallFunc_BreakVector4_W_3;
	Parms.CallFunc_MakeVector4_ReturnValue_4 = CallFunc_MakeVector4_ReturnValue_4;
	Parms.CallFunc_BreakVector4_X_4 = CallFunc_BreakVector4_X_4;
	Parms.CallFunc_BreakVector4_Y_4 = CallFunc_BreakVector4_Y_4;
	Parms.CallFunc_BreakVector4_Z_4 = CallFunc_BreakVector4_Z_4;
	Parms.CallFunc_BreakVector4_W_4 = CallFunc_BreakVector4_W_4;
	Parms.CallFunc_MakeVector4_ReturnValue_5 = CallFunc_MakeVector4_ReturnValue_5;
	Parms.CallFunc_BreakVector4_X_5 = CallFunc_BreakVector4_X_5;
	Parms.CallFunc_BreakVector4_Y_5 = CallFunc_BreakVector4_Y_5;
	Parms.CallFunc_BreakVector4_Z_5 = CallFunc_BreakVector4_Z_5;
	Parms.CallFunc_BreakVector4_W_5 = CallFunc_BreakVector4_W_5;
	Parms.CallFunc_MakeVector4_ReturnValue_6 = CallFunc_MakeVector4_ReturnValue_6;
	Parms.CallFunc_BreakVector4_X_6 = CallFunc_BreakVector4_X_6;
	Parms.CallFunc_BreakVector4_Y_6 = CallFunc_BreakVector4_Y_6;
	Parms.CallFunc_BreakVector4_Z_6 = CallFunc_BreakVector4_Z_6;
	Parms.CallFunc_BreakVector4_W_6 = CallFunc_BreakVector4_W_6;
	Parms.CallFunc_BreakVector4_X_7 = CallFunc_BreakVector4_X_7;
	Parms.CallFunc_BreakVector4_Y_7 = CallFunc_BreakVector4_Y_7;
	Parms.CallFunc_BreakVector4_Z_7 = CallFunc_BreakVector4_Z_7;
	Parms.CallFunc_BreakVector4_W_7 = CallFunc_BreakVector4_W_7;
	Parms.CallFunc_MakeVector4_ReturnValue_7 = CallFunc_MakeVector4_ReturnValue_7;
	Parms.CallFunc_MakeVector4_ReturnValue_8 = CallFunc_MakeVector4_ReturnValue_8;
	Parms.CallFunc_BreakVector4_X_8 = CallFunc_BreakVector4_X_8;
	Parms.CallFunc_BreakVector4_Y_8 = CallFunc_BreakVector4_Y_8;
	Parms.CallFunc_BreakVector4_Z_8 = CallFunc_BreakVector4_Z_8;
	Parms.CallFunc_BreakVector4_W_8 = CallFunc_BreakVector4_W_8;
	Parms.CallFunc_MakeVector4_ReturnValue_9 = CallFunc_MakeVector4_ReturnValue_9;
	Parms.CallFunc_BreakVector4_X_9 = CallFunc_BreakVector4_X_9;
	Parms.CallFunc_BreakVector4_Y_9 = CallFunc_BreakVector4_Y_9;
	Parms.CallFunc_BreakVector4_Z_9 = CallFunc_BreakVector4_Z_9;
	Parms.CallFunc_BreakVector4_W_9 = CallFunc_BreakVector4_W_9;
	Parms.CallFunc_MakeVector4_ReturnValue_10 = CallFunc_MakeVector4_ReturnValue_10;
	Parms.CallFunc_BreakVector4_X_10 = CallFunc_BreakVector4_X_10;
	Parms.CallFunc_BreakVector4_Y_10 = CallFunc_BreakVector4_Y_10;
	Parms.CallFunc_BreakVector4_Z_10 = CallFunc_BreakVector4_Z_10;
	Parms.CallFunc_BreakVector4_W_10 = CallFunc_BreakVector4_W_10;
	Parms.CallFunc_MakeVector4_ReturnValue_11 = CallFunc_MakeVector4_ReturnValue_11;
	Parms.CallFunc_BreakVector4_X_11 = CallFunc_BreakVector4_X_11;
	Parms.CallFunc_BreakVector4_Y_11 = CallFunc_BreakVector4_Y_11;
	Parms.CallFunc_BreakVector4_Z_11 = CallFunc_BreakVector4_Z_11;
	Parms.CallFunc_BreakVector4_W_11 = CallFunc_BreakVector4_W_11;
	Parms.CallFunc_MakeVector4_ReturnValue_12 = CallFunc_MakeVector4_ReturnValue_12;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.K2Node_CustomEvent_PhotoModeComponentReference = K2Node_CustomEvent_PhotoModeComponentReference;
	Parms.K2Node_CustomEvent_TabIndex = K2Node_CustomEvent_TabIndex;
	Parms.CallFunc_BreakVector4_X_12 = CallFunc_BreakVector4_X_12;
	Parms.CallFunc_BreakVector4_Y_12 = CallFunc_BreakVector4_Y_12;
	Parms.CallFunc_BreakVector4_Z_12 = CallFunc_BreakVector4_Z_12;
	Parms.CallFunc_BreakVector4_W_12 = CallFunc_BreakVector4_W_12;
	Parms.K2Node_CustomEvent_WidgetItem = K2Node_CustomEvent_WidgetItem;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_Less_IntInt_ReturnValue_8 = CallFunc_Less_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.K2Node_ComponentBoundEvent_Value_3 = K2Node_ComponentBoundEvent_Value_3;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_FTrunc_ReturnValue_10 = CallFunc_FTrunc_ReturnValue_10;
	Parms.CallFunc_FTrunc_ReturnValue_11 = CallFunc_FTrunc_ReturnValue_11;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_12 = CallFunc_FTrunc_ReturnValue_12;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_Dialog = K2Node_CustomEvent_Dialog;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ActionId = K2Node_CustomEvent_ActionId;
	Parms.K2Node_CustomEvent_Dialog_1 = K2Node_CustomEvent_Dialog_1;
	Parms.K2Node_ComponentBoundEvent_SliderValue = K2Node_ComponentBoundEvent_SliderValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Array_Index_Variable_9 = Temp_int_Array_Index_Variable_9;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue_2 = CallFunc_K2_GetVectorParameterValue_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.K2Node_MakeStruct_LinearColor_2 = K2Node_MakeStruct_LinearColor_2;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_13 = CallFunc_FTrunc_ReturnValue_13;
	Parms.K2Node_MakeStruct_WeightedBlendable_3 = K2Node_MakeStruct_WeightedBlendable_3;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.K2Node_CustomEvent_Dialog_2 = K2Node_CustomEvent_Dialog_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_9 = Temp_int_Loop_Counter_Variable_9;
	Parms.Temp_int_Loop_Counter_Variable_10 = Temp_int_Loop_Counter_Variable_10;
	Parms.CallFunc_Less_IntInt_ReturnValue_9 = CallFunc_Less_IntInt_ReturnValue_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_Less_IntInt_ReturnValue_10 = CallFunc_Less_IntInt_ReturnValue_10;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Array_Index_Variable_10 = Temp_int_Array_Index_Variable_10;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakRotator_Roll_2 = CallFunc_BreakRotator_Roll_2;
	Parms.CallFunc_BreakRotator_Pitch_2 = CallFunc_BreakRotator_Pitch_2;
	Parms.CallFunc_BreakRotator_Yaw_2 = CallFunc_BreakRotator_Yaw_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_3 = CallFunc_BreakRotator_Roll_3;
	Parms.CallFunc_BreakRotator_Pitch_3 = CallFunc_BreakRotator_Pitch_3;
	Parms.CallFunc_BreakRotator_Yaw_3 = CallFunc_BreakRotator_Yaw_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll_4 = CallFunc_BreakRotator_Roll_4;
	Parms.CallFunc_BreakRotator_Pitch_4 = CallFunc_BreakRotator_Pitch_4;
	Parms.CallFunc_BreakRotator_Yaw_4 = CallFunc_BreakRotator_Yaw_4;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue_1 = CallFunc_K2_SetActorRotation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_5 = CallFunc_BreakRotator_Roll_5;
	Parms.CallFunc_BreakRotator_Pitch_5 = CallFunc_BreakRotator_Pitch_5;
	Parms.CallFunc_BreakRotator_Yaw_5 = CallFunc_BreakRotator_Yaw_5;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_1 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_2 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_3 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_4 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_5 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_5;
	Parms.K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast = K2Node_SetFieldsInStruct_WhiteTemp_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_WhiteTint_ImplicitCast = K2Node_SetFieldsInStruct_WhiteTint_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_BlueCorrection_ImplicitCast = K2Node_SetFieldsInStruct_BlueCorrection_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast = K2Node_SetFieldsInStruct_SceneFringeIntensity_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_6 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_6;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_7 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_7;
	Parms.K2Node_SetFieldsInStruct_ChromaticAberrationStartOffset_ImplicitCast = K2Node_SetFieldsInStruct_ChromaticAberrationStartOffset_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_FilmGrainIntensity_ImplicitCast = K2Node_SetFieldsInStruct_FilmGrainIntensity_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_MotionBlurAmount_ImplicitCast = K2Node_SetFieldsInStruct_MotionBlurAmount_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast = K2Node_SetFieldsInStruct_VignetteIntensity_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldSensorWidth_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldSensorWidth_ImplicitCast;
	Parms.CallFunc_InterpolationUpdater_DeltaTime_ImplicitCast = CallFunc_InterpolationUpdater_DeltaTime_ImplicitCast;
	Parms.K2Node_VariableSet_HitDistance_ImplicitCast = K2Node_VariableSet_HitDistance_ImplicitCast;
	Parms.K2Node_VariableSet_HitDistance_ImplicitCast_1 = K2Node_VariableSet_HitDistance_ImplicitCast_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_8 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_8;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_9 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_9;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast_1 = CallFunc_FTrunc_A_ImplicitCast_1;
	Parms.CallFunc_RInterpTo_DeltaTime_ImplicitCast = CallFunc_RInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_RotatePlayer_PlayerOffset_ImplicitCast = CallFunc_RotatePlayer_PlayerOffset_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast_2 = CallFunc_FTrunc_A_ImplicitCast_2;
	Parms.CallFunc_FTrunc_A_ImplicitCast_3 = CallFunc_FTrunc_A_ImplicitCast_3;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_10 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_10;
	Parms.K2Node_MakeStruct_R_ImplicitCast = K2Node_MakeStruct_R_ImplicitCast;
	Parms.K2Node_MakeStruct_G_ImplicitCast = K2Node_MakeStruct_G_ImplicitCast;
	Parms.K2Node_MakeStruct_B_ImplicitCast = K2Node_MakeStruct_B_ImplicitCast;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast = CallFunc_ChangeValue_Value_ImplicitCast;
	Parms.CallFunc_ChangeValue_Value_ImplicitCast_1 = CallFunc_ChangeValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_11 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_11;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_12 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_12;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_13 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_13;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_14 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_14;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_15 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_15;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast_16 = CallFunc_SetScalarParameterValue_Value_ImplicitCast_16;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast = CallFunc_Initialize_DefaultValue_ImplicitCast;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_1 = CallFunc_Initialize_DefaultValue_ImplicitCast_1;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_2 = CallFunc_Initialize_DefaultValue_ImplicitCast_2;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_3 = CallFunc_Initialize_DefaultValue_ImplicitCast_3;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_4 = CallFunc_Initialize_DefaultValue_ImplicitCast_4;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_5 = CallFunc_Initialize_DefaultValue_ImplicitCast_5;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_6 = CallFunc_Initialize_DefaultValue_ImplicitCast_6;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_7 = CallFunc_Initialize_DefaultValue_ImplicitCast_7;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_8 = CallFunc_Initialize_DefaultValue_ImplicitCast_8;
	Parms.CallFunc_Initialize_DefaultValue_ImplicitCast_9 = CallFunc_Initialize_DefaultValue_ImplicitCast_9;
	Parms.K2Node_SetFieldsInStruct_ColorGradingIntensity_ImplicitCast = K2Node_SetFieldsInStruct_ColorGradingIntensity_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ED_FreeCameraRotation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    RotationValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PhotoModeWidget_C::ED_FreeCameraRotation__DelegateSignature(const struct FRotator& RotationValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ED_FreeCameraRotation__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_ED_FreeCameraRotation__DelegateSignature_Params Parms{};

	Parms.RotationValue = RotationValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ED_FreeCameraFOV__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             FOVValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PhotoModeWidget_C::ED_FreeCameraFOV__DelegateSignature(double FOVValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ED_FreeCameraFOV__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_ED_FreeCameraFOV__DelegateSignature_Params Parms{};

	Parms.FOVValue = FOVValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PhotoModeWidget.WBP_PhotoModeWidget_C.ED_FreeCameraReference__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        PostProcessValues                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PhotoModeWidget_C::ED_FreeCameraReference__DelegateSignature(const struct FPostProcessSettings& PostProcessValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PhotoModeWidget_C", "ED_FreeCameraReference__DelegateSignature");

	Params::UWBP_PhotoModeWidget_C_ED_FreeCameraReference__DelegateSignature_Params Parms{};

	Parms.PostProcessValues = PostProcessValues;

	UObject::ProcessEvent(Func, &Parms);

}

}


