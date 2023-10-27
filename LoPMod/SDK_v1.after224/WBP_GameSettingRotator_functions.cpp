#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameSettingRotator.WBP_GameSettingRotator_C
// (None)

class UClass* UWBP_GameSettingRotator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameSettingRotator_C");

	return Clss;
}


// WBP_GameSettingRotator_C WBP_GameSettingRotator.Default__WBP_GameSettingRotator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameSettingRotator_C* UWBP_GameSettingRotator_C::GetDefaultObj()
{
	static class UWBP_GameSettingRotator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameSettingRotator_C*>(UWBP_GameSettingRotator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameSettingRotator.WBP_GameSettingRotator_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_GameSettingRotator_C::IsInteractable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameSettingRotator_C", "IsInteractable");

	Params::UWBP_GameSettingRotator_C_IsInteractable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


