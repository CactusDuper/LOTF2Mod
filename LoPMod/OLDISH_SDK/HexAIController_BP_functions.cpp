#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HexAIController_BP.HexAIController_BP_C
// (Actor)

class UClass* AHexAIController_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HexAIController_BP_C");

	return Clss;
}


// HexAIController_BP_C HexAIController_BP.Default__HexAIController_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHexAIController_BP_C* AHexAIController_BP_C::GetDefaultObj()
{
	static class AHexAIController_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHexAIController_BP_C*>(AHexAIController_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HexAIController_BP.HexAIController_BP_C.IsNeutralActorHostile
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexAIController_BP_C::IsNeutralActorHostile(class AActor* Actor, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexAIController_BP_C", "IsNeutralActorHostile");

	Params::AHexAIController_BP_C_IsNeutralActorHostile_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function HexAIController_BP.HexAIController_BP_C.Do Heavy Hit Reaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHexAIController_BP_C::Do_Heavy_Hit_Reaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexAIController_BP_C", "Do Heavy Hit Reaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HexAIController_BP.HexAIController_BP_C.ExecuteUbergraph_HexAIController_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexAIController_BP_C::ExecuteUbergraph_HexAIController_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HexAIController_BP_C", "ExecuteUbergraph_HexAIController_BP");

	Params::AHexAIController_BP_C_ExecuteUbergraph_HexAIController_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


