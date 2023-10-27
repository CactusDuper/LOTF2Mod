#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SoulOverkill_PROTO.GA_SoulOverkill_PROTO_C
// (None)

class UClass* UGA_SoulOverkill_PROTO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SoulOverkill_PROTO_C");

	return Clss;
}


// GA_SoulOverkill_PROTO_C GA_SoulOverkill_PROTO.Default__GA_SoulOverkill_PROTO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SoulOverkill_PROTO_C* UGA_SoulOverkill_PROTO_C::GetDefaultObj()
{
	static class UGA_SoulOverkill_PROTO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SoulOverkill_PROTO_C*>(UGA_SoulOverkill_PROTO_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_SoulOverkill_PROTO.GA_SoulOverkill_PROTO_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SoulOverkill_PROTO_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulOverkill_PROTO_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SoulOverkill_PROTO.GA_SoulOverkill_PROTO_C.ExecuteUbergraph_GA_SoulOverkill_PROTO
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SoulOverkill_PROTO_C::ExecuteUbergraph_GA_SoulOverkill_PROTO(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SoulOverkill_PROTO_C", "ExecuteUbergraph_GA_SoulOverkill_PROTO");

	Params::UGA_SoulOverkill_PROTO_C_ExecuteUbergraph_GA_SoulOverkill_PROTO_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


