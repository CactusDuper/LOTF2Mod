#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER.SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)_C
// (None)

class UClass* USEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)_C");

	return Clss;
}


// SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)_C SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER.Default__SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__C* USEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__C::GetDefaultObj()
{
	static class USEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__C* Default = nullptr;

	if (!Default)
		Default = static_cast<USEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__C*>(USEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__C::StaticClass()->DefaultObject);

	return Default;
}


// Function SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER.SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)_C.SequenceEvent__ENTRYPOINTSEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__C::SequenceEvent__ENTRYPOINTSEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)_C", "SequenceEvent__ENTRYPOINTSEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER.SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)_C.SequenceEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__C::SequenceEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)_C", "SequenceEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER.SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)_C.ExecuteUbergraph_SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexSubtitleSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__C::ExecuteUbergraph_SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP_(int32 EntryPoint, class UHexSubtitleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)_C", "ExecuteUbergraph_SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER (Director BP)");

	Params::USEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__C_ExecuteUbergraph_SEQ_CINE_LOTF2_S002_LIGHTREAPER_MASTER__Director_BP__Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


