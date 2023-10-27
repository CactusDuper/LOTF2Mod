#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C
// (Actor)

class UClass* ABP_EnvInteraction_SimulationTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnvInteraction_SimulationTrigger_C");

	return Clss;
}


// BP_EnvInteraction_SimulationTrigger_C BP_EnvInteraction_SimulationTrigger.Default__BP_EnvInteraction_SimulationTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnvInteraction_SimulationTrigger_C* ABP_EnvInteraction_SimulationTrigger_C::GetDefaultObj()
{
	static class ABP_EnvInteraction_SimulationTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnvInteraction_SimulationTrigger_C*>(ABP_EnvInteraction_SimulationTrigger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C.NewMainCharacterHandler
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      New_Main_Character                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_SimulationTrigger_C::NewMainCharacterHandler(class AActor* New_Main_Character, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_SimulationTrigger_C", "NewMainCharacterHandler");

	Params::ABP_EnvInteraction_SimulationTrigger_C_NewMainCharacterHandler_Params Parms{};

	Parms.New_Main_Character = New_Main_Character;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_SimulationTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_SimulationTrigger_C", "ReceiveActorBeginOverlap");

	Params::ABP_EnvInteraction_SimulationTrigger_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_SimulationTrigger_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_SimulationTrigger_C", "ReceiveActorEndOverlap");

	Params::ABP_EnvInteraction_SimulationTrigger_C_ReceiveActorEndOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_SimulationTrigger_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_SimulationTrigger_C", "ReceiveEndPlay");

	Params::ABP_EnvInteraction_SimulationTrigger_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EnvInteraction_SimulationTrigger_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_SimulationTrigger_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C.StopSimulation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnvInteraction_SimulationTrigger_C::StopSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_SimulationTrigger_C", "StopSimulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C.StartSimulation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnvInteraction_SimulationTrigger_C::StartSimulation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_SimulationTrigger_C", "StartSimulation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C.RegisterTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnvInteraction_SimulationTrigger_C::RegisterTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_SimulationTrigger_C", "RegisterTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C.ExecuteUbergraph_BP_EnvInteraction_SimulationTrigger
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHexEnvInteraction*          CallFunc_GetEnvInteraction_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EnvInteraction_C*        K2Node_DynamicCast_AsBP_Env_Interaction                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHexEnvInteraction*          CallFunc_GetEnvInteraction_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EnvInteraction_C*        K2Node_DynamicCast_AsBP_Env_Interaction_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHexEnvInteraction*          CallFunc_GetEnvInteraction_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EnvInteraction_C*        K2Node_DynamicCast_AsBP_Env_Interaction_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHexEnvInteraction*          CallFunc_GetEnvInteraction_ReturnValue_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHexEnvInteraction*          CallFunc_GetEnvInteraction_ReturnValue_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EnvInteraction_C*        K2Node_DynamicCast_AsBP_Env_Interaction_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EnvInteraction_C*        K2Node_DynamicCast_AsBP_Env_Interaction_4                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void ABP_EnvInteraction_SimulationTrigger_C::ExecuteUbergraph_BP_EnvInteraction_SimulationTrigger(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_OtherActor_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_1, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_1, bool K2Node_DynamicCast_bSuccess_1, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_2, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_3, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_4, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_3, bool K2Node_DynamicCast_bSuccess_3, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnvInteraction_SimulationTrigger_C", "ExecuteUbergraph_BP_EnvInteraction_SimulationTrigger");

	Params::ABP_EnvInteraction_SimulationTrigger_C_ExecuteUbergraph_BP_EnvInteraction_SimulationTrigger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetEnvInteraction_ReturnValue = CallFunc_GetEnvInteraction_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Env_Interaction = K2Node_DynamicCast_AsBP_Env_Interaction;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_OtherActor_1 = K2Node_Event_OtherActor_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetEnvInteraction_ReturnValue_1 = CallFunc_GetEnvInteraction_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Env_Interaction_1 = K2Node_DynamicCast_AsBP_Env_Interaction_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnvInteraction_ReturnValue_2 = CallFunc_GetEnvInteraction_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Env_Interaction_2 = K2Node_DynamicCast_AsBP_Env_Interaction_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_3 = CallFunc_GetWorldSubsystem_ReturnValue_3;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_4 = CallFunc_GetWorldSubsystem_ReturnValue_4;
	Parms.CallFunc_GetEnvInteraction_ReturnValue_3 = CallFunc_GetEnvInteraction_ReturnValue_3;
	Parms.CallFunc_GetEnvInteraction_ReturnValue_4 = CallFunc_GetEnvInteraction_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Env_Interaction_3 = K2Node_DynamicCast_AsBP_Env_Interaction_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Env_Interaction_4 = K2Node_DynamicCast_AsBP_Env_Interaction_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


