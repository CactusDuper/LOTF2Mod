#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_AttrScaling.W_AttrScaling_C
// (None)

class UClass* UW_AttrScaling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_AttrScaling_C");

	return Clss;
}


// W_AttrScaling_C W_AttrScaling.Default__W_AttrScaling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_AttrScaling_C* UW_AttrScaling_C::GetDefaultObj()
{
	static class UW_AttrScaling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_AttrScaling_C*>(UW_AttrScaling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_AttrScaling.W_AttrScaling_C.SetStatRequirementsStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bPlayerHasStats                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRequirementsIgnored                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttrScaling_C::SetStatRequirementsStatus(bool bPlayerHasStats, bool bRequirementsIgnored)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttrScaling_C", "SetStatRequirementsStatus");

	Params::UW_AttrScaling_C_SetStatRequirementsStatus_Params Parms{};

	Parms.bPlayerHasStats = bPlayerHasStats;
	Parms.bRequirementsIgnored = bRequirementsIgnored;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttrScaling.W_AttrScaling_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttrScaling_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttrScaling_C", "PreConstruct");

	Params::UW_AttrScaling_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AttrScaling.W_AttrScaling_C.ExecuteUbergraph_W_AttrScaling
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPlayerHasStats                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bRequirementsIgnored                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AttrScaling_C::ExecuteUbergraph_W_AttrScaling(int32 EntryPoint, bool K2Node_Event_bPlayerHasStats, bool K2Node_Event_bRequirementsIgnored, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AttrScaling_C", "ExecuteUbergraph_W_AttrScaling");

	Params::UW_AttrScaling_C_ExecuteUbergraph_W_AttrScaling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bPlayerHasStats = K2Node_Event_bPlayerHasStats;
	Parms.K2Node_Event_bRequirementsIgnored = K2Node_Event_bRequirementsIgnored;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


