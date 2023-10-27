#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LVL_World_Sound.LVL_World_Sound_C
// (Actor)

class UClass* ALVL_World_Sound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LVL_World_Sound_C");

	return Clss;
}


// LVL_World_Sound_C LVL_World_Sound.Default__LVL_World_Sound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALVL_World_Sound_C* ALVL_World_Sound_C::GetDefaultObj()
{
	static class ALVL_World_Sound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALVL_World_Sound_C*>(ALVL_World_Sound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LVL_World_Sound.LVL_World_Sound_C.ExecuteUbergraph_LVL_World_Sound
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALVL_World_Sound_C::ExecuteUbergraph_LVL_World_Sound(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LVL_World_Sound_C", "ExecuteUbergraph_LVL_World_Sound");

	Params::ALVL_World_Sound_C_ExecuteUbergraph_LVL_World_Sound_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


