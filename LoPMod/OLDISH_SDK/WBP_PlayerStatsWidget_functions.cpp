#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerStatsWidget.WBP_PlayerStatsWidget_C
// (None)

class UClass* UWBP_PlayerStatsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerStatsWidget_C");

	return Clss;
}


// WBP_PlayerStatsWidget_C WBP_PlayerStatsWidget.Default__WBP_PlayerStatsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerStatsWidget_C* UWBP_PlayerStatsWidget_C::GetDefaultObj()
{
	static class UWBP_PlayerStatsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerStatsWidget_C*>(UWBP_PlayerStatsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerStatsWidget.WBP_PlayerStatsWidget_C.SwitchRangedWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               UsingCatalyst                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatsWidget_C::SwitchRangedWeapon(bool UsingCatalyst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatsWidget_C", "SwitchRangedWeapon");

	Params::UWBP_PlayerStatsWidget_C_SwitchRangedWeapon_Params Parms{};

	Parms.UsingCatalyst = UsingCatalyst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatsWidget.WBP_PlayerStatsWidget_C.PlayLevelUpAvailable
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatsWidget_C::PlayLevelUpAvailable(bool bAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatsWidget_C", "PlayLevelUpAvailable");

	Params::UWBP_PlayerStatsWidget_C_PlayLevelUpAvailable_Params Parms{};

	Parms.bAvailable = bAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerStatsWidget.WBP_PlayerStatsWidget_C.ExecuteUbergraph_WBP_PlayerStatsWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_usingCatalyst                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAvailable                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerStatsWidget_C::ExecuteUbergraph_WBP_PlayerStatsWidget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_usingCatalyst, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_bAvailable, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerStatsWidget_C", "ExecuteUbergraph_WBP_PlayerStatsWidget");

	Params::UWBP_PlayerStatsWidget_C_ExecuteUbergraph_WBP_PlayerStatsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_usingCatalyst = K2Node_Event_usingCatalyst;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_bAvailable = K2Node_Event_bAvailable;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


