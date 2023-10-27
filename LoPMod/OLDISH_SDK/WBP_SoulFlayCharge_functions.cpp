#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SoulFlayCharge.WBP_SoulFlayCharge_C
// (None)

class UClass* UWBP_SoulFlayCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SoulFlayCharge_C");

	return Clss;
}


// WBP_SoulFlayCharge_C WBP_SoulFlayCharge.Default__WBP_SoulFlayCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SoulFlayCharge_C* UWBP_SoulFlayCharge_C::GetDefaultObj()
{
	static class UWBP_SoulFlayCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SoulFlayCharge_C*>(UWBP_SoulFlayCharge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SoulFlayCharge.WBP_SoulFlayCharge_C.PlayAbilityFailedFeedback
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SoulFlayCharge_C::PlayAbilityFailedFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SoulFlayCharge_C", "PlayAbilityFailedFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SoulFlayCharge.WBP_SoulFlayCharge_C.PlaySetEmptyAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_SoulFlayCharge_C::PlaySetEmptyAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SoulFlayCharge_C", "PlaySetEmptyAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SoulFlayCharge.WBP_SoulFlayCharge_C.ExecuteUbergraph_WBP_SoulFlayCharge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SoulFlayCharge_C::ExecuteUbergraph_WBP_SoulFlayCharge(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SoulFlayCharge_C", "ExecuteUbergraph_WBP_SoulFlayCharge");

	Params::UWBP_SoulFlayCharge_C_ExecuteUbergraph_WBP_SoulFlayCharge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


