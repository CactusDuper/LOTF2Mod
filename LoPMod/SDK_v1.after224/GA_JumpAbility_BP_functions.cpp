#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_JumpAbility_BP.GA_JumpAbility_BP_C
// (None)

class UClass* UGA_JumpAbility_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_JumpAbility_BP_C");

	return Clss;
}


// GA_JumpAbility_BP_C GA_JumpAbility_BP.Default__GA_JumpAbility_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_JumpAbility_BP_C* UGA_JumpAbility_BP_C::GetDefaultObj()
{
	static class UGA_JumpAbility_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_JumpAbility_BP_C*>(UGA_JumpAbility_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_JumpAbility_BP.GA_JumpAbility_BP_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_JumpAbility_BP_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_JumpAbility_BP_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_JumpAbility_BP.GA_JumpAbility_BP_C.ExecuteUbergraph_GA_JumpAbility_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_JumpAbility_BP_C::ExecuteUbergraph_GA_JumpAbility_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_JumpAbility_BP_C", "ExecuteUbergraph_GA_JumpAbility_BP");

	Params::UGA_JumpAbility_BP_C_ExecuteUbergraph_GA_JumpAbility_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


