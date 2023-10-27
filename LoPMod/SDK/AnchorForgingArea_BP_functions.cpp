#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnchorForgingArea_BP.AnchorForgingArea_BP_C
// (Actor)

class UClass* AAnchorForgingArea_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnchorForgingArea_BP_C");

	return Clss;
}


// AnchorForgingArea_BP_C AnchorForgingArea_BP.Default__AnchorForgingArea_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnchorForgingArea_BP_C* AAnchorForgingArea_BP_C::GetDefaultObj()
{
	static class AAnchorForgingArea_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnchorForgingArea_BP_C*>(AAnchorForgingArea_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnchorForgingArea_BP.AnchorForgingArea_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnchorForgingArea_BP_C::UserConstructionScript(const struct FVector& CallFunc_GetActorScale3D_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnchorForgingArea_BP_C", "UserConstructionScript");

	Params::AAnchorForgingArea_BP_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetActorScale3D_ReturnValue = CallFunc_GetActorScale3D_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnchorForgingArea_BP.AnchorForgingArea_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAnchorForgingArea_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnchorForgingArea_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AnchorForgingArea_BP.AnchorForgingArea_BP_C.OnForgedAnchorVolumeVisualsChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsVisualsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnchorForgingArea_BP_C::OnForgedAnchorVolumeVisualsChanged_Event(bool bIsVisualsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnchorForgingArea_BP_C", "OnForgedAnchorVolumeVisualsChanged_Event");

	Params::AAnchorForgingArea_BP_C_OnForgedAnchorVolumeVisualsChanged_Event_Params Parms{};

	Parms.bIsVisualsEnabled = bIsVisualsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnchorForgingArea_BP.AnchorForgingArea_BP_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnchorForgingArea_BP_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnchorForgingArea_BP_C", "ReceiveEndPlay");

	Params::AAnchorForgingArea_BP_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnchorForgingArea_BP.AnchorForgingArea_BP_C.ExecuteUbergraph_AnchorForgingArea_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDeveloperMenuSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDeveloperMenuSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsVisualsEnabled                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnchorForgingArea_BP_C::ExecuteUbergraph_AnchorForgingArea_BP(int32 EntryPoint, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bIsVisualsEnabled, bool CallFunc_Not_PreBool_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnchorForgingArea_BP_C", "ExecuteUbergraph_AnchorForgingArea_BP");

	Params::AAnchorForgingArea_BP_C_ExecuteUbergraph_AnchorForgingArea_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bIsVisualsEnabled = K2Node_CustomEvent_bIsVisualsEnabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


