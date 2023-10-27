#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_FullScreenTutorialMessage.W_FullScreenTutorialMessage_C
// (None)

class UClass* UW_FullScreenTutorialMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_FullScreenTutorialMessage_C");

	return Clss;
}


// W_FullScreenTutorialMessage_C W_FullScreenTutorialMessage.Default__W_FullScreenTutorialMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_FullScreenTutorialMessage_C* UW_FullScreenTutorialMessage_C::GetDefaultObj()
{
	static class UW_FullScreenTutorialMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_FullScreenTutorialMessage_C*>(UW_FullScreenTutorialMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_FullScreenTutorialMessage.W_FullScreenTutorialMessage_C.Finished_4A61C5184E7EB8AF6101039F6FC15DA7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FullScreenTutorialMessage_C::Finished_4A61C5184E7EB8AF6101039F6FC15DA7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FullScreenTutorialMessage_C", "Finished_4A61C5184E7EB8AF6101039F6FC15DA7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FullScreenTutorialMessage.W_FullScreenTutorialMessage_C.Finished_4FDCB4F8491388A501E420B0DD89B2D9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FullScreenTutorialMessage_C::Finished_4FDCB4F8491388A501E420B0DD89B2D9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FullScreenTutorialMessage_C", "Finished_4FDCB4F8491388A501E420B0DD89B2D9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FullScreenTutorialMessage.W_FullScreenTutorialMessage_C.BP_OnActivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FullScreenTutorialMessage_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FullScreenTutorialMessage_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FullScreenTutorialMessage.W_FullScreenTutorialMessage_C.BP_SetDuration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FullScreenTutorialMessage_C::BP_SetDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FullScreenTutorialMessage_C", "BP_SetDuration");

	Params::UW_FullScreenTutorialMessage_C_BP_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FullScreenTutorialMessage.W_FullScreenTutorialMessage_C.BP_OnDeactivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_FullScreenTutorialMessage_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FullScreenTutorialMessage_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_FullScreenTutorialMessage.W_FullScreenTutorialMessage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FullScreenTutorialMessage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FullScreenTutorialMessage_C", "PreConstruct");

	Params::UW_FullScreenTutorialMessage_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FullScreenTutorialMessage.W_FullScreenTutorialMessage_C.On Input Method Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FullScreenTutorialMessage_C::On_Input_Method_Changed(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FullScreenTutorialMessage_C", "On Input Method Changed");

	Params::UW_FullScreenTutorialMessage_C_On_Input_Method_Changed_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_FullScreenTutorialMessage.W_FullScreenTutorialMessage_C.ExecuteUbergraph_W_FullScreenTutorialMessage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URichTextBlockDecorator*     CallFunc_GetDecoratorByClass_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_HexRichDecorator_C*      K2Node_DynamicCast_AsBP_Hex_Rich_Decorator                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2HUD*                   K2Node_DynamicCast_AsLOTF2HUD                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2HUD*                   K2Node_DynamicCast_AsLOTF2HUD_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_FullScreenTutorialMessage_C::ExecuteUbergraph_W_FullScreenTutorialMessage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_duration, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_1, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class URichTextBlockDecorator* CallFunc_GetDecoratorByClass_ReturnValue, class UBP_HexRichDecorator_C* K2Node_DynamicCast_AsBP_Hex_Rich_Decorator, bool K2Node_DynamicCast_bSuccess, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AHUD* CallFunc_GetHUD_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue_1, class ALOTF2HUD* K2Node_DynamicCast_AsLOTF2HUD, bool K2Node_DynamicCast_bSuccess_1, class ALOTF2HUD* K2Node_DynamicCast_AsLOTF2HUD_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_FullScreenTutorialMessage_C", "ExecuteUbergraph_W_FullScreenTutorialMessage");

	Params::UW_FullScreenTutorialMessage_C_ExecuteUbergraph_W_FullScreenTutorialMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_duration = K2Node_Event_duration;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_GetDecoratorByClass_ReturnValue = CallFunc_GetDecoratorByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Hex_Rich_Decorator = K2Node_DynamicCast_AsBP_Hex_Rich_Decorator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_1 = CallFunc_PostEventAtLocation_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue_1 = CallFunc_GetHUD_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2HUD = K2Node_DynamicCast_AsLOTF2HUD;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsLOTF2HUD_1 = K2Node_DynamicCast_AsLOTF2HUD_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


