#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_AmmoCharge.W_AmmoCharge_C
// (None)

class UClass* UW_AmmoCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_AmmoCharge_C");

	return Clss;
}


// W_AmmoCharge_C W_AmmoCharge.Default__W_AmmoCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_AmmoCharge_C* UW_AmmoCharge_C::GetDefaultObj()
{
	static class UW_AmmoCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_AmmoCharge_C*>(UW_AmmoCharge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_AmmoCharge.W_AmmoCharge_C.PlayCantUseAmmo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AmmoCharge_C::PlayCantUseAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoCharge_C", "PlayCantUseAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AmmoCharge.W_AmmoCharge_C.PlayMarkAmmo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AmmoCharge_C::PlayMarkAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoCharge_C", "PlayMarkAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AmmoCharge.W_AmmoCharge_C.PlayTryUseAmmo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AmmoCharge_C::PlayTryUseAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoCharge_C", "PlayTryUseAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AmmoCharge.W_AmmoCharge_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AmmoCharge_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoCharge_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AmmoCharge.W_AmmoCharge_C.PlayUseAmmo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AmmoCharge_C::PlayUseAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoCharge_C", "PlayUseAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AmmoCharge.W_AmmoCharge_C.SetAmmoAsUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_AmmoCharge_C::SetAmmoAsUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoCharge_C", "SetAmmoAsUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_AmmoCharge.W_AmmoCharge_C.ExecuteUbergraph_W_AmmoCharge
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_AmmoCharge_C::ExecuteUbergraph_W_AmmoCharge(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_AmmoCharge_C", "ExecuteUbergraph_W_AmmoCharge");

	Params::UW_AmmoCharge_C_ExecuteUbergraph_W_AmmoCharge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


