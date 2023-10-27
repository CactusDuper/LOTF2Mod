#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_AmmoBar.W_AmmoBar_C
// (None)

class UClass* UW_AmmoBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_AmmoBar_C");

	return Clss;
}


// W_AmmoBar_C W_AmmoBar.Default__W_AmmoBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_AmmoBar_C* UW_AmmoBar_C::GetDefaultObj()
{
	static class UW_AmmoBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_AmmoBar_C*>(UW_AmmoBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_AmmoBar.W_AmmoBar_C.Finished_AE58A2294EA4BDCCD839EDAC62FD5DF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AmmoBar_C::Finished_AE58A2294EA4BDCCD839EDAC62FD5DF9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoBar_C", "Finished_AE58A2294EA4BDCCD839EDAC62FD5DF9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AmmoBar.W_AmmoBar_C.UpdateAmmoCost
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmmoCost                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AmmoBar_C::UpdateAmmoCost(int32 AmmoCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoBar_C", "UpdateAmmoCost");

	Params::UW_AmmoBar_C_UpdateAmmoCost_Params Parms{};

	Parms.AmmoCost = AmmoCost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AmmoBar.W_AmmoBar_C.UpdateStats
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentAmmoValue                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxAmmoValue                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AmmoBar_C::UpdateStats(float CurrentAmmoValue, float MaxAmmoValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoBar_C", "UpdateStats");

	Params::UW_AmmoBar_C_UpdateStats_Params Parms{};

	Parms.CurrentAmmoValue = CurrentAmmoValue;
	Parms.MaxAmmoValue = MaxAmmoValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AmmoBar.W_AmmoBar_C.BP_PlayFailAbilityFeedback
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AmmoBar_C::BP_PlayFailAbilityFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoBar_C", "BP_PlayFailAbilityFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AmmoBar.W_AmmoBar_C.BP_UpdateAmmo
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentAmmo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AmmoBar_C::BP_UpdateAmmo(int32 CurrentAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoBar_C", "BP_UpdateAmmo");

	Params::UW_AmmoBar_C_BP_UpdateAmmo_Params Parms{};

	Parms.CurrentAmmo = CurrentAmmo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AmmoBar.W_AmmoBar_C.ExecuteUbergraph_W_AmmoBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_ammoCost                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_currentAmmoValue                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_maxAmmoValue                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_currentAmmo                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AmmoBar_C::ExecuteUbergraph_W_AmmoBar(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Event_ammoCost, float K2Node_Event_currentAmmoValue, float K2Node_Event_maxAmmoValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Event_currentAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoBar_C", "ExecuteUbergraph_W_AmmoBar");

	Params::UW_AmmoBar_C_ExecuteUbergraph_W_AmmoBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ammoCost = K2Node_Event_ammoCost;
	Parms.K2Node_Event_currentAmmoValue = K2Node_Event_currentAmmoValue;
	Parms.K2Node_Event_maxAmmoValue = K2Node_Event_maxAmmoValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_currentAmmo = K2Node_Event_currentAmmo;

	UObject::ProcessEvent(Func, &Parms);

}

}


