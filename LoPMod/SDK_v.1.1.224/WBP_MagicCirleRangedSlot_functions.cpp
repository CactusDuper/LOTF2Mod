#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MagicCirleRangedSlot.WBP_MagicCirleRangedSlot_C
// (None)

class UClass* UWBP_MagicCirleRangedSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MagicCirleRangedSlot_C");

	return Clss;
}


// WBP_MagicCirleRangedSlot_C WBP_MagicCirleRangedSlot.Default__WBP_MagicCirleRangedSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MagicCirleRangedSlot_C* UWBP_MagicCirleRangedSlot_C::GetDefaultObj()
{
	static class UWBP_MagicCirleRangedSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MagicCirleRangedSlot_C*>(UWBP_MagicCirleRangedSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MagicCirleRangedSlot.WBP_MagicCirleRangedSlot_C.BP_SetIsUsable
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MagicCirleRangedSlot_C::BP_SetIsUsable(bool bUsable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MagicCirleRangedSlot_C", "BP_SetIsUsable");

	Params::UWBP_MagicCirleRangedSlot_C_BP_SetIsUsable_Params Parms{};

	Parms.bUsable = bUsable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MagicCirleRangedSlot.WBP_MagicCirleRangedSlot_C.ExecuteUbergraph_WBP_MagicCirleRangedSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MagicCirleRangedSlot_C::ExecuteUbergraph_WBP_MagicCirleRangedSlot(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, bool K2Node_Event_bUsable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MagicCirleRangedSlot_C", "ExecuteUbergraph_WBP_MagicCirleRangedSlot");

	Params::UWBP_MagicCirleRangedSlot_C_ExecuteUbergraph_WBP_MagicCirleRangedSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;
	Parms.K2Node_Event_bUsable = K2Node_Event_bUsable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


