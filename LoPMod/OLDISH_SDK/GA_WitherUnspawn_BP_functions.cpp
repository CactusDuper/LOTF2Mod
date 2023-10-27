#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_WitherUnspawn_BP.GA_WitherUnspawn_BP_C
// (None)

class UClass* UGA_WitherUnspawn_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_WitherUnspawn_BP_C");

	return Clss;
}


// GA_WitherUnspawn_BP_C GA_WitherUnspawn_BP.Default__GA_WitherUnspawn_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_WitherUnspawn_BP_C* UGA_WitherUnspawn_BP_C::GetDefaultObj()
{
	static class UGA_WitherUnspawn_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_WitherUnspawn_BP_C*>(UGA_WitherUnspawn_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_WitherUnspawn_BP.GA_WitherUnspawn_BP_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_WitherUnspawn_BP_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_WitherUnspawn_BP_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_WitherUnspawn_BP.GA_WitherUnspawn_BP_C.ExecuteUbergraph_GA_WitherUnspawn_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WitherUnspawn_BP_C::ExecuteUbergraph_GA_WitherUnspawn_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_WitherUnspawn_BP_C", "ExecuteUbergraph_GA_WitherUnspawn_BP");

	Params::UGA_WitherUnspawn_BP_C_ExecuteUbergraph_GA_WitherUnspawn_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


