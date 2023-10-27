#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Disconnect.WBP_Disconnect_C
// (None)

class UClass* UWBP_Disconnect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Disconnect_C");

	return Clss;
}


// WBP_Disconnect_C WBP_Disconnect.Default__WBP_Disconnect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Disconnect_C* UWBP_Disconnect_C::GetDefaultObj()
{
	static class UWBP_Disconnect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Disconnect_C*>(UWBP_Disconnect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Disconnect.WBP_Disconnect_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Disconnect_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Disconnect_C", "PreConstruct");

	Params::UWBP_Disconnect_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Disconnect.WBP_Disconnect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Disconnect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Disconnect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Disconnect.WBP_Disconnect_C.ExecuteUbergraph_WBP_Disconnect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_DisconnectReasonToText_ReturnValue                      (None)

void UWBP_Disconnect_C::ExecuteUbergraph_WBP_Disconnect(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_DisconnectReasonToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Disconnect_C", "ExecuteUbergraph_WBP_Disconnect");

	Params::UWBP_Disconnect_C_ExecuteUbergraph_WBP_Disconnect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_DisconnectReasonToText_ReturnValue = CallFunc_DisconnectReasonToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


