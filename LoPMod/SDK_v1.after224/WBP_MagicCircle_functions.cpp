#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MagicCircle.WBP_MagicCircle_C
// (None)

class UClass* UWBP_MagicCircle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MagicCircle_C");

	return Clss;
}


// WBP_MagicCircle_C WBP_MagicCircle.Default__WBP_MagicCircle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MagicCircle_C* UWBP_MagicCircle_C::GetDefaultObj()
{
	static class UWBP_MagicCircle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MagicCircle_C*>(UWBP_MagicCircle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MagicCircle.WBP_MagicCircle_C.BP_UpdateActionsVisibility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MagicCircle_C::BP_UpdateActionsVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MagicCircle_C", "BP_UpdateActionsVisibility");

	Params::UWBP_MagicCircle_C_BP_UpdateActionsVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MagicCircle.WBP_MagicCircle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MagicCircle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MagicCircle_C", "PreConstruct");

	Params::UWBP_MagicCircle_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MagicCircle.WBP_MagicCircle_C.BP_SetIsUsable
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsUsable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MagicCircle_C::BP_SetIsUsable(bool bIsUsable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MagicCircle_C", "BP_SetIsUsable");

	Params::UWBP_MagicCircle_C_BP_SetIsUsable_Params Parms{};

	Parms.bIsUsable = bIsUsable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MagicCircle.WBP_MagicCircle_C.ExecuteUbergraph_WBP_MagicCircle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsUsable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MagicCircle_C::ExecuteUbergraph_WBP_MagicCircle(int32 EntryPoint, bool K2Node_Event_bVisible, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsUsable, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MagicCircle_C", "ExecuteUbergraph_WBP_MagicCircle");

	Params::UWBP_MagicCircle_C_ExecuteUbergraph_WBP_MagicCircle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bIsUsable = K2Node_Event_bIsUsable;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


