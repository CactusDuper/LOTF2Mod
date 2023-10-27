#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SoundManager_BP.SoundManager_BP_C
// (None)

class UClass* USoundManager_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundManager_BP_C");

	return Clss;
}


// SoundManager_BP_C SoundManager_BP.Default__SoundManager_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USoundManager_BP_C* USoundManager_BP_C::GetDefaultObj()
{
	static class USoundManager_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundManager_BP_C*>(USoundManager_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SoundManager_BP.SoundManager_BP_C.GlobalMuteSwitch
// (Event, Public, BlueprintEvent)
// Parameters:

void USoundManager_BP_C::GlobalMuteSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundManager_BP_C", "GlobalMuteSwitch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SoundManager_BP.SoundManager_BP_C.ExecuteUbergraph_SoundManager_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USoundManager_BP_C::ExecuteUbergraph_SoundManager_BP(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SoundManager_BP_C", "ExecuteUbergraph_SoundManager_BP");

	Params::USoundManager_BP_C_ExecuteUbergraph_SoundManager_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


