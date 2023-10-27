#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ShapeTitle.W_ShapeTitle_C
// (None)

class UClass* UW_ShapeTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ShapeTitle_C");

	return Clss;
}


// W_ShapeTitle_C W_ShapeTitle.Default__W_ShapeTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ShapeTitle_C* UW_ShapeTitle_C::GetDefaultObj()
{
	static class UW_ShapeTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ShapeTitle_C*>(UW_ShapeTitle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ShapeTitle.W_ShapeTitle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShapeTitle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ShapeTitle_C", "PreConstruct");

	Params::UW_ShapeTitle_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ShapeTitle.W_ShapeTitle_C.Set Title
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_ShapeTitle_C::Set_Title(class FText Title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ShapeTitle_C", "Set Title");

	Params::UW_ShapeTitle_C_Set_Title_Params Parms{};

	Parms.Title = Title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ShapeTitle.W_ShapeTitle_C.ExecuteUbergraph_W_ShapeTitle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Title                                         (None)

void UW_ShapeTitle_C::ExecuteUbergraph_W_ShapeTitle(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_Title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ShapeTitle_C", "ExecuteUbergraph_W_ShapeTitle");

	Params::UW_ShapeTitle_C_ExecuteUbergraph_W_ShapeTitle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Title = K2Node_CustomEvent_Title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ShapeTitle.W_ShapeTitle_C.On Customize Feature__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ShapeTitle_C::On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ShapeTitle_C", "On Customize Feature__DelegateSignature");

	Params::UW_ShapeTitle_C_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}

}


