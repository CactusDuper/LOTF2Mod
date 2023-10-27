#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SaveGame_Entry.W_SaveGame_Entry_C
// (None)

class UClass* UW_SaveGame_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SaveGame_Entry_C");

	return Clss;
}


// W_SaveGame_Entry_C W_SaveGame_Entry.Default__W_SaveGame_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SaveGame_Entry_C* UW_SaveGame_Entry_C::GetDefaultObj()
{
	static class UW_SaveGame_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SaveGame_Entry_C*>(UW_SaveGame_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SaveGame_Entry.W_SaveGame_Entry_C.SetSaveData
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CharName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CharLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CharLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_SaveGame_Entry_C::SetSaveData(const class FString& CharName, int32 CharLevel, const class FString& CharLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SaveGame_Entry_C", "SetSaveData");

	Params::UW_SaveGame_Entry_C_SetSaveData_Params Parms{};

	Parms.CharName = CharName;
	Parms.CharLevel = CharLevel;
	Parms.CharLocation = CharLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SaveGame_Entry.W_SaveGame_Entry_C.Set Is Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Hovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SaveGame_Entry_C::Set_Is_Hovered(bool Is_Hovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SaveGame_Entry_C", "Set Is Hovered");

	Params::UW_SaveGame_Entry_C_Set_Is_Hovered_Params Parms{};

	Parms.Is_Hovered = Is_Hovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SaveGame_Entry.W_SaveGame_Entry_C.SetRemoveProgress
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SaveGame_Entry_C::SetRemoveProgress(float Progress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SaveGame_Entry_C", "SetRemoveProgress");

	Params::UW_SaveGame_Entry_C_SetRemoveProgress_Params Parms{};

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SaveGame_Entry.W_SaveGame_Entry_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SaveGame_Entry_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SaveGame_Entry_C", "SetSelected");

	Params::UW_SaveGame_Entry_C_SetSelected_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SaveGame_Entry.W_SaveGame_Entry_C.SetError
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextError                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_SaveGame_Entry_C::SetError(class FText& TextError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SaveGame_Entry_C", "SetError");

	Params::UW_SaveGame_Entry_C_SetError_Params Parms{};

	Parms.TextError = TextError;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SaveGame_Entry.W_SaveGame_Entry_C.OnRefreshSelectVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_SaveGame_Entry_C::OnRefreshSelectVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SaveGame_Entry_C", "OnRefreshSelectVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_SaveGame_Entry.W_SaveGame_Entry_C.ExecuteUbergraph_W_SaveGame_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_charName                                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_charLevel                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_charLocation                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_CustomEvent_Is_Hovered                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_progress                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_textError                                           (ConstParm)
// bool                               CallFunc_IsListItemSelected_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SaveGame_Entry_C::ExecuteUbergraph_W_SaveGame_Entry(int32 EntryPoint, const class FString& K2Node_Event_charName, int32 K2Node_Event_charLevel, const class FString& K2Node_Event_charLocation, class FText CallFunc_Conv_StringToText_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_CustomEvent_Is_Hovered, float K2Node_Event_progress, bool K2Node_Event_bSelected, class FText K2Node_Event_textError, bool CallFunc_IsListItemSelected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SaveGame_Entry_C", "ExecuteUbergraph_W_SaveGame_Entry");

	Params::UW_SaveGame_Entry_C_ExecuteUbergraph_W_SaveGame_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_charName = K2Node_Event_charName;
	Parms.K2Node_Event_charLevel = K2Node_Event_charLevel;
	Parms.K2Node_Event_charLocation = K2Node_Event_charLocation;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CustomEvent_Is_Hovered = K2Node_CustomEvent_Is_Hovered;
	Parms.K2Node_Event_progress = K2Node_Event_progress;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_Event_textError = K2Node_Event_textError;
	Parms.CallFunc_IsListItemSelected_ReturnValue = CallFunc_IsListItemSelected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


