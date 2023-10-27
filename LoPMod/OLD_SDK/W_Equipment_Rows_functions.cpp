#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Equipment_Rows.W_Equipment_Rows_C
// (None)

class UClass* UW_Equipment_Rows_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Equipment_Rows_C");

	return Clss;
}


// W_Equipment_Rows_C W_Equipment_Rows.Default__W_Equipment_Rows_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Equipment_Rows_C* UW_Equipment_Rows_C::GetDefaultObj()
{
	static class UW_Equipment_Rows_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Equipment_Rows_C*>(UW_Equipment_Rows_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Equipment_Rows.W_Equipment_Rows_C.Select Melee Row
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Equipment_Rows_C::Select_Melee_Row(enum class EUINavigation Navigation, class UWidget* CallFunc_GetChildAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Equipment_Rows_C", "Select Melee Row");

	Params::UW_Equipment_Rows_C_Select_Melee_Row_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Equipment_Rows.W_Equipment_Rows_C.GetFirstItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryGridItem*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_EquipmentGridItem_C*      K2Node_DynamicCast_AsW_Equipment_Grid_Item                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UInventoryGridItem* UW_Equipment_Rows_C::GetFirstItem(class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_EquipmentGridItem_C* K2Node_DynamicCast_AsW_Equipment_Grid_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Equipment_Rows_C", "GetFirstItem");

	Params::UW_Equipment_Rows_C_GetFirstItem_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Equipment_Grid_Item = K2Node_DynamicCast_AsW_Equipment_Grid_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


