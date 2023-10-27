#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LOTF2GameState_BP.LOTF2GameState_BP_C
// (Actor)

class UClass* ALOTF2GameState_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LOTF2GameState_BP_C");

	return Clss;
}


// LOTF2GameState_BP_C LOTF2GameState_BP.Default__LOTF2GameState_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALOTF2GameState_BP_C* ALOTF2GameState_BP_C::GetDefaultObj()
{
	static class ALOTF2GameState_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALOTF2GameState_BP_C*>(ALOTF2GameState_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LOTF2GameState_BP.LOTF2GameState_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALOTF2GameState_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOTF2GameState_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LOTF2GameState_BP.LOTF2GameState_BP_C.ExecuteUbergraph_LOTF2GameState_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALOTF2GameState_BP_C::ExecuteUbergraph_LOTF2GameState_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LOTF2GameState_BP_C", "ExecuteUbergraph_LOTF2GameState_BP");

	Params::ALOTF2GameState_BP_C_ExecuteUbergraph_LOTF2GameState_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


