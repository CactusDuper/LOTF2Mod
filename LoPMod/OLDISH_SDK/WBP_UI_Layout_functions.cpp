#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UI_Layout.WBP_UI_Layout_C
// (None)

class UClass* UWBP_UI_Layout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UI_Layout_C");

	return Clss;
}


// WBP_UI_Layout_C WBP_UI_Layout.Default__WBP_UI_Layout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UI_Layout_C* UWBP_UI_Layout_C::GetDefaultObj()
{
	static class UWBP_UI_Layout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UI_Layout_C*>(UWBP_UI_Layout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_UI_Layout.WBP_UI_Layout_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_UI_Layout_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UI_Layout_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_UI_Layout.WBP_UI_Layout_C.ExecuteUbergraph_WBP_UI_Layout
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Layout_C::ExecuteUbergraph_WBP_UI_Layout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UI_Layout_C", "ExecuteUbergraph_WBP_UI_Layout");

	Params::UWBP_UI_Layout_C_ExecuteUbergraph_WBP_UI_Layout_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


