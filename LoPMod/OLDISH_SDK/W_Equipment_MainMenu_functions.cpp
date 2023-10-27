#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Equipment_MainMenu.W_Equipment_MainMenu_C
// (None)

class UClass* UW_Equipment_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Equipment_MainMenu_C");

	return Clss;
}


// W_Equipment_MainMenu_C W_Equipment_MainMenu.Default__W_Equipment_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Equipment_MainMenu_C* UW_Equipment_MainMenu_C::GetDefaultObj()
{
	static class UW_Equipment_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Equipment_MainMenu_C*>(UW_Equipment_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Equipment_MainMenu.W_Equipment_MainMenu_C.GetFirstItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UInventoryGridItem*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_EquipmentGridItem_C*      K2Node_DynamicCast_AsW_Equipment_Grid_Item                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UInventoryGridItem* UW_Equipment_MainMenu_C::GetFirstItem(class UWidget* CallFunc_GetChildAt_ReturnValue, class UW_EquipmentGridItem_C* K2Node_DynamicCast_AsW_Equipment_Grid_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Equipment_MainMenu_C", "GetFirstItem");

	Params::UW_Equipment_MainMenu_C_GetFirstItem_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Equipment_Grid_Item = K2Node_DynamicCast_AsW_Equipment_Grid_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Equipment_MainMenu.W_Equipment_MainMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Equipment_MainMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Equipment_MainMenu_C", "PreConstruct");

	Params::UW_Equipment_MainMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Equipment_MainMenu.W_Equipment_MainMenu_C.ExecuteUbergraph_W_Equipment_MainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Equipment_MainMenu_C::ExecuteUbergraph_W_Equipment_MainMenu(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Equipment_MainMenu_C", "ExecuteUbergraph_W_Equipment_MainMenu");

	Params::UW_Equipment_MainMenu_C_ExecuteUbergraph_W_Equipment_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


