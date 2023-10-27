#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_UpdateHomeLocation.BTTask_UpdateHomeLocation_C
// (None)

class UClass* UBTTask_UpdateHomeLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_UpdateHomeLocation_C");

	return Clss;
}


// BTTask_UpdateHomeLocation_C BTTask_UpdateHomeLocation.Default__BTTask_UpdateHomeLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_UpdateHomeLocation_C* UBTTask_UpdateHomeLocation_C::GetDefaultObj()
{
	static class UBTTask_UpdateHomeLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_UpdateHomeLocation_C*>(UBTTask_UpdateHomeLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_UpdateHomeLocation.BTTask_UpdateHomeLocation_C.SetNewHomeLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     HomeLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlackboardKeySelector      K2Node_MakeStruct_BlackboardKeySelector                          (None)
// struct FBlackboardKeySelector      K2Node_MakeStruct_BlackboardKeySelector_1                        (None)
// struct FBlackboardKeySelector      K2Node_MakeStruct_BlackboardKeySelector_2                        (None)
// struct FBlackboardKeySelector      K2Node_MakeStruct_BlackboardKeySelector_3                        (None)
// struct FBlackboardKeySelector      K2Node_MakeStruct_BlackboardKeySelector_4                        (None)
// struct FBlackboardKeySelector      K2Node_MakeStruct_BlackboardKeySelector_5                        (None)
// float                              CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_UpdateHomeLocation_C::SetNewHomeLocation(const struct FVector& HomeLocation, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector_1, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector_2, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector_3, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector_4, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector_5, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_1, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_UpdateHomeLocation_C", "SetNewHomeLocation");

	Params::UBTTask_UpdateHomeLocation_C_SetNewHomeLocation_Params Parms{};

	Parms.HomeLocation = HomeLocation;
	Parms.K2Node_MakeStruct_BlackboardKeySelector = K2Node_MakeStruct_BlackboardKeySelector;
	Parms.K2Node_MakeStruct_BlackboardKeySelector_1 = K2Node_MakeStruct_BlackboardKeySelector_1;
	Parms.K2Node_MakeStruct_BlackboardKeySelector_2 = K2Node_MakeStruct_BlackboardKeySelector_2;
	Parms.K2Node_MakeStruct_BlackboardKeySelector_3 = K2Node_MakeStruct_BlackboardKeySelector_3;
	Parms.K2Node_MakeStruct_BlackboardKeySelector_4 = K2Node_MakeStruct_BlackboardKeySelector_4;
	Parms.K2Node_MakeStruct_BlackboardKeySelector_5 = K2Node_MakeStruct_BlackboardKeySelector_5;
	Parms.CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast = CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast;
	Parms.CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_1 = CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_1;
	Parms.CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_2 = CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_UpdateHomeLocation.BTTask_UpdateHomeLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_UpdateHomeLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_UpdateHomeLocation_C", "ReceiveExecuteAI");

	Params::UBTTask_UpdateHomeLocation_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_UpdateHomeLocation.BTTask_UpdateHomeLocation_C.OnQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_UpdateHomeLocation_C::OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_UpdateHomeLocation_C", "OnQueryFinished");

	Params::UBTTask_UpdateHomeLocation_C_OnQueryFinished_Params Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_UpdateHomeLocation.BTTask_UpdateHomeLocation_C.ExecuteUbergraph_BTTask_UpdateHomeLocation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsZero_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*K2Node_CustomEvent_QueryInstance                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         K2Node_CustomEvent_QueryStatus                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*CallFunc_RunEQSQuery_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetQueryResultsAsLocations_ResultLocations              (ReferenceParm)
// bool                               CallFunc_GetQueryResultsAsLocations_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetRandomLocationInNavigableRadius_Radius_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetNamedParam_Value_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_UpdateHomeLocation_C::ExecuteUbergraph_BTTask_UpdateHomeLocation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Vector_IsZero_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, float CallFunc_K2_GetRandomLocationInNavigableRadius_Radius_ImplicitCast, float CallFunc_SetNamedParam_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_UpdateHomeLocation_C", "ExecuteUbergraph_BTTask_UpdateHomeLocation");

	Params::UBTTask_UpdateHomeLocation_C_ExecuteUbergraph_BTTask_UpdateHomeLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Vector_IsZero_ReturnValue = CallFunc_Vector_IsZero_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation = CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue = CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue;
	Parms.K2Node_CustomEvent_QueryInstance = K2Node_CustomEvent_QueryInstance;
	Parms.K2Node_CustomEvent_QueryStatus = K2Node_CustomEvent_QueryStatus;
	Parms.CallFunc_RunEQSQuery_ReturnValue = CallFunc_RunEQSQuery_ReturnValue;
	Parms.CallFunc_GetQueryResultsAsLocations_ResultLocations = CallFunc_GetQueryResultsAsLocations_ResultLocations;
	Parms.CallFunc_GetQueryResultsAsLocations_ReturnValue = CallFunc_GetQueryResultsAsLocations_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_K2_GetRandomLocationInNavigableRadius_Radius_ImplicitCast = CallFunc_K2_GetRandomLocationInNavigableRadius_Radius_ImplicitCast;
	Parms.CallFunc_SetNamedParam_Value_ImplicitCast = CallFunc_SetNamedParam_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


