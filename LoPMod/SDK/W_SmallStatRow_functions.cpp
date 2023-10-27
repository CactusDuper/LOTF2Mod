#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SmallStatRow.W_SmallStatRow_C
// (None)

class UClass* UW_SmallStatRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SmallStatRow_C");

	return Clss;
}


// W_SmallStatRow_C W_SmallStatRow.Default__W_SmallStatRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SmallStatRow_C* UW_SmallStatRow_C::GetDefaultObj()
{
	static class UW_SmallStatRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SmallStatRow_C*>(UW_SmallStatRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_SmallStatRow.W_SmallStatRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SmallStatRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SmallStatRow_C", "PreConstruct");

	Params::UW_SmallStatRow_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SmallStatRow.W_SmallStatRow_C.SetBaseValues
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              WeaponDamage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WeaponScaling                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SmallStatRow_C::SetBaseValues(float WeaponDamage, float WeaponScaling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SmallStatRow_C", "SetBaseValues");

	Params::UW_SmallStatRow_C_SetBaseValues_Params Parms{};

	Parms.WeaponDamage = WeaponDamage;
	Parms.WeaponScaling = WeaponScaling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SmallStatRow.W_SmallStatRow_C.SetUpdatedScaling
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              UpdatedWeaponScaling                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SmallStatRow_C::SetUpdatedScaling(float UpdatedWeaponScaling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SmallStatRow_C", "SetUpdatedScaling");

	Params::UW_SmallStatRow_C_SetUpdatedScaling_Params Parms{};

	Parms.UpdatedWeaponScaling = UpdatedWeaponScaling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_SmallStatRow.W_SmallStatRow_C.ExecuteUbergraph_W_SmallStatRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_weaponDamage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_weaponScaling                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_updatedWeaponScaling                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_SmallStatRow_C::ExecuteUbergraph_W_SmallStatRow(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_Event_weaponDamage, float K2Node_Event_weaponScaling, float K2Node_Event_updatedWeaponScaling, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_SmallStatRow_C", "ExecuteUbergraph_W_SmallStatRow");

	Params::UW_SmallStatRow_C_ExecuteUbergraph_W_SmallStatRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_weaponDamage = K2Node_Event_weaponDamage;
	Parms.K2Node_Event_weaponScaling = K2Node_Event_weaponScaling;
	Parms.K2Node_Event_updatedWeaponScaling = K2Node_Event_updatedWeaponScaling;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


