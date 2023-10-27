#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIParasiteTetheringComponent.BP_AIParasiteTetheringComponent_C
// (None)

class UClass* UBP_AIParasiteTetheringComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIParasiteTetheringComponent_C");

	return Clss;
}


// BP_AIParasiteTetheringComponent_C BP_AIParasiteTetheringComponent.Default__BP_AIParasiteTetheringComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIParasiteTetheringComponent_C* UBP_AIParasiteTetheringComponent_C::GetDefaultObj()
{
	static class UBP_AIParasiteTetheringComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIParasiteTetheringComponent_C*>(UBP_AIParasiteTetheringComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIParasiteTetheringComponent.BP_AIParasiteTetheringComponent_C.OnStartedTethering_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_AIParasiteTetheringComponent_C::OnStartedTethering_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIParasiteTetheringComponent_C", "OnStartedTethering_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIParasiteTetheringComponent.BP_AIParasiteTetheringComponent_C.OnStoppedTethering_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_AIParasiteTetheringComponent_C::OnStoppedTethering_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIParasiteTetheringComponent_C", "OnStoppedTethering_BP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIParasiteTetheringComponent.BP_AIParasiteTetheringComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIParasiteTetheringComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIParasiteTetheringComponent_C", "ReceiveTick");

	Params::UBP_AIParasiteTetheringComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIParasiteTetheringComponent.BP_AIParasiteTetheringComponent_C.ExecuteUbergraph_BP_AIParasiteTetheringComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             CallFunc_GetLinkedCharacter_ReturnValue                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIParasiteTetheringComponent_C::ExecuteUbergraph_BP_AIParasiteTetheringComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ALOTF2Character* CallFunc_GetLinkedCharacter_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIParasiteTetheringComponent_C", "ExecuteUbergraph_BP_AIParasiteTetheringComponent");

	Params::UBP_AIParasiteTetheringComponent_C_ExecuteUbergraph_BP_AIParasiteTetheringComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetLinkedCharacter_ReturnValue = CallFunc_GetLinkedCharacter_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


