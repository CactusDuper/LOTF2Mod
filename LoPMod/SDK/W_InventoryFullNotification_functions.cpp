#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_InventoryFullNotification.W_InventoryFullNotification_C
// (None)

class UClass* UW_InventoryFullNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_InventoryFullNotification_C");

	return Clss;
}


// W_InventoryFullNotification_C W_InventoryFullNotification.Default__W_InventoryFullNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_InventoryFullNotification_C* UW_InventoryFullNotification_C::GetDefaultObj()
{
	static class UW_InventoryFullNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_InventoryFullNotification_C*>(UW_InventoryFullNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_InventoryFullNotification.W_InventoryFullNotification_C.Finished_9937A2E34FCFEA4E94555BBA4CDC5DBB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_InventoryFullNotification_C::Finished_9937A2E34FCFEA4E94555BBA4CDC5DBB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryFullNotification_C", "Finished_9937A2E34FCFEA4E94555BBA4CDC5DBB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InventoryFullNotification.W_InventoryFullNotification_C.Finished_BA19983D440365A8620281872F46058F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_InventoryFullNotification_C::Finished_BA19983D440365A8620281872F46058F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryFullNotification_C", "Finished_BA19983D440365A8620281872F46058F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InventoryFullNotification.W_InventoryFullNotification_C.BP_OnActivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_InventoryFullNotification_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryFullNotification_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InventoryFullNotification.W_InventoryFullNotification_C.BP_SetDuration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InventoryFullNotification_C::BP_SetDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryFullNotification_C", "BP_SetDuration");

	Params::UW_InventoryFullNotification_C_BP_SetDuration_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InventoryFullNotification.W_InventoryFullNotification_C.BP_OnDeactivated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_InventoryFullNotification_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryFullNotification_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InventoryFullNotification.W_InventoryFullNotification_C.ExecuteUbergraph_W_InventoryFullNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InventoryFullNotification_C::ExecuteUbergraph_W_InventoryFullNotification(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_duration, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InventoryFullNotification_C", "ExecuteUbergraph_W_InventoryFullNotification");

	Params::UW_InventoryFullNotification_C_ExecuteUbergraph_W_InventoryFullNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_duration = K2Node_Event_duration;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


