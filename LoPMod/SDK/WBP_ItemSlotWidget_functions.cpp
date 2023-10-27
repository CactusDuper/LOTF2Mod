#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ItemSlotWidget.WBP_ItemSlotWidget_C
// (None)

class UClass* UWBP_ItemSlotWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ItemSlotWidget_C");

	return Clss;
}


// WBP_ItemSlotWidget_C WBP_ItemSlotWidget.Default__WBP_ItemSlotWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ItemSlotWidget_C* UWBP_ItemSlotWidget_C::GetDefaultObj()
{
	static class UWBP_ItemSlotWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ItemSlotWidget_C*>(UWBP_ItemSlotWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ItemSlotWidget.WBP_ItemSlotWidget_C.SetItemUsable
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bUsable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldUseAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemSlotWidget_C::SetItemUsable(bool bUsable, bool bShouldUseAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemSlotWidget_C", "SetItemUsable");

	Params::UWBP_ItemSlotWidget_C_SetItemUsable_Params Parms{};

	Parms.bUsable = bUsable;
	Parms.bShouldUseAnimation = bShouldUseAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemSlotWidget.WBP_ItemSlotWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemSlotWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemSlotWidget_C", "PreConstruct");

	Params::UWBP_ItemSlotWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ItemSlotWidget.WBP_ItemSlotWidget_C.ExecuteUbergraph_WBP_ItemSlotWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldUseAnimation                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemSlotWidget_C::ExecuteUbergraph_WBP_ItemSlotWidget(int32 EntryPoint, bool K2Node_Event_bUsable, bool K2Node_Event_bShouldUseAnimation, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ItemSlotWidget_C", "ExecuteUbergraph_WBP_ItemSlotWidget");

	Params::UWBP_ItemSlotWidget_C_ExecuteUbergraph_WBP_ItemSlotWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bUsable = K2Node_Event_bUsable;
	Parms.K2Node_Event_bShouldUseAnimation = K2Node_Event_bShouldUseAnimation;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


