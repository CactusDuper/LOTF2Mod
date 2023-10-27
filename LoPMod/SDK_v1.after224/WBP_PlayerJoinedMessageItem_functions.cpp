#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerJoinedMessageItem.WBP_PlayerJoinedMessageItem_C
// (None)

class UClass* UWBP_PlayerJoinedMessageItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerJoinedMessageItem_C");

	return Clss;
}


// WBP_PlayerJoinedMessageItem_C WBP_PlayerJoinedMessageItem.Default__WBP_PlayerJoinedMessageItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerJoinedMessageItem_C* UWBP_PlayerJoinedMessageItem_C::GetDefaultObj()
{
	static class UWBP_PlayerJoinedMessageItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerJoinedMessageItem_C*>(UWBP_PlayerJoinedMessageItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerJoinedMessageItem.WBP_PlayerJoinedMessageItem_C.Finished_A923CB514A20453702A64B9E0F6AD28B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerJoinedMessageItem_C::Finished_A923CB514A20453702A64B9E0F6AD28B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerJoinedMessageItem_C", "Finished_A923CB514A20453702A64B9E0F6AD28B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerJoinedMessageItem.WBP_PlayerJoinedMessageItem_C.Finished_EE2B32064E0B765880FFDCA4397F07BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerJoinedMessageItem_C::Finished_EE2B32064E0B765880FFDCA4397F07BB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerJoinedMessageItem_C", "Finished_EE2B32064E0B765880FFDCA4397F07BB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerJoinedMessageItem.WBP_PlayerJoinedMessageItem_C.PlayFadeInAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerJoinedMessageItem_C::PlayFadeInAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerJoinedMessageItem_C", "PlayFadeInAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerJoinedMessageItem.WBP_PlayerJoinedMessageItem_C.ExecuteUbergraph_WBP_PlayerJoinedMessageItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerJoinedMessageItem_C::ExecuteUbergraph_WBP_PlayerJoinedMessageItem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerJoinedMessageItem_C", "ExecuteUbergraph_WBP_PlayerJoinedMessageItem");

	Params::UWBP_PlayerJoinedMessageItem_C_ExecuteUbergraph_WBP_PlayerJoinedMessageItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


