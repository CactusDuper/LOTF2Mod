#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDWidget_SkipCinematic.HUDWidget_SkipCinematic_C
// (None)

class UClass* UHUDWidget_SkipCinematic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDWidget_SkipCinematic_C");

	return Clss;
}


// HUDWidget_SkipCinematic_C HUDWidget_SkipCinematic.Default__HUDWidget_SkipCinematic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDWidget_SkipCinematic_C* UHUDWidget_SkipCinematic_C::GetDefaultObj()
{
	static class UHUDWidget_SkipCinematic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDWidget_SkipCinematic_C*>(UHUDWidget_SkipCinematic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDWidget_SkipCinematic.HUDWidget_SkipCinematic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_SkipCinematic_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_SkipCinematic_C", "PreConstruct");

	Params::UHUDWidget_SkipCinematic_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDWidget_SkipCinematic.HUDWidget_SkipCinematic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDWidget_SkipCinematic_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_SkipCinematic_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDWidget_SkipCinematic.HUDWidget_SkipCinematic_C.BndEvt__HUDWidget_SkipCinematic_Button_Hold_K2Node_ComponentBoundEvent_0_OnHoldActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHUDWidget_SkipCinematic_C::BndEvt__HUDWidget_SkipCinematic_Button_Hold_K2Node_ComponentBoundEvent_0_OnHoldActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_SkipCinematic_C", "BndEvt__HUDWidget_SkipCinematic_Button_Hold_K2Node_ComponentBoundEvent_0_OnHoldActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDWidget_SkipCinematic.HUDWidget_SkipCinematic_C.ExecuteUbergraph_HUDWidget_SkipCinematic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexSubtitleSubsystem*       CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2HUD*                   K2Node_DynamicCast_AsLOTF2HUD                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2HUD*                   K2Node_DynamicCast_AsLOTF2HUD_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDWidget_SkipCinematic_C::ExecuteUbergraph_HUDWidget_SkipCinematic(int32 EntryPoint, class UHexSubtitleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class ALOTF2HUD* K2Node_DynamicCast_AsLOTF2HUD, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AHUD* CallFunc_GetHUD_ReturnValue_1, class ALOTF2HUD* K2Node_DynamicCast_AsLOTF2HUD_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDWidget_SkipCinematic_C", "ExecuteUbergraph_HUDWidget_SkipCinematic");

	Params::UHUDWidget_SkipCinematic_C_ExecuteUbergraph_HUDWidget_SkipCinematic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2HUD = K2Node_DynamicCast_AsLOTF2HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_GetHUD_ReturnValue_1 = CallFunc_GetHUD_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2HUD_1 = K2Node_DynamicCast_AsLOTF2HUD_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


