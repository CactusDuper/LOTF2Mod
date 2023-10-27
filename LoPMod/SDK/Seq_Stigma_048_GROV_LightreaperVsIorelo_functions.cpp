#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Seq_Stigma_048_GROV_LightreaperVsIorelo.Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)_C
// (None)

class UClass* USeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)_C");

	return Clss;
}


// Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)_C Seq_Stigma_048_GROV_LightreaperVsIorelo.Default__Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__C* USeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__C::GetDefaultObj()
{
	static class USeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__C* Default = nullptr;

	if (!Default)
		Default = static_cast<USeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__C*>(USeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__C::StaticClass()->DefaultObject);

	return Default;
}


// Function Seq_Stigma_048_GROV_LightreaperVsIorelo.Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)_C.SequenceEvent__ENTRYPOINTSeq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__C::SequenceEvent__ENTRYPOINTSeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)_C", "SequenceEvent__ENTRYPOINTSeq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Seq_Stigma_048_GROV_LightreaperVsIorelo.Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)_C", "SequenceEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Seq_Stigma_048_GROV_LightreaperVsIorelo.Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)_C.ExecuteUbergraph_Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexSubtitleSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__C::ExecuteUbergraph_Seq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP_(int32 EntryPoint, class UHexSubtitleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)_C", "ExecuteUbergraph_Seq_Stigma_048_GROV_LightreaperVsIorelo (Director BP)");

	Params::USeq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__C_ExecuteUbergraph_Seq_Stigma_048_GROV_LightreaperVsIorelo__Director_BP__Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


