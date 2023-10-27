#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RuneEffectSummary.W_RuneEffectSummary_C
// (None)

class UClass* UW_RuneEffectSummary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RuneEffectSummary_C");

	return Clss;
}


// W_RuneEffectSummary_C W_RuneEffectSummary.Default__W_RuneEffectSummary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RuneEffectSummary_C* UW_RuneEffectSummary_C::GetDefaultObj()
{
	static class UW_RuneEffectSummary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RuneEffectSummary_C*>(UW_RuneEffectSummary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_RuneEffectSummary.W_RuneEffectSummary_C.AddRuneEffectDescription
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_RuneEffectSummary_C::AddRuneEffectDescription(class FText& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RuneEffectSummary_C", "AddRuneEffectDescription");

	Params::UW_RuneEffectSummary_C_AddRuneEffectDescription_Params Parms{};

	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RuneEffectSummary.W_RuneEffectSummary_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void UW_RuneEffectSummary_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RuneEffectSummary_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_RuneEffectSummary.W_RuneEffectSummary_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RuneEffectSummary_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RuneEffectSummary_C", "PreConstruct");

	Params::UW_RuneEffectSummary_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RuneEffectSummary.W_RuneEffectSummary_C.SetEffectsStyle
// (BlueprintEvent)
// Parameters:
// TSubclassOf<class UCommonTextStyle>NewStyle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UW_RuneEffectSummary_C::SetEffectsStyle(TSubclassOf<class UCommonTextStyle> NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RuneEffectSummary_C", "SetEffectsStyle");

	Params::UW_RuneEffectSummary_C_SetEffectsStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RuneEffectSummary.W_RuneEffectSummary_C.AddRuneEffectDescriptionForShard
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EHexRuneShardType       ShardType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RuneEffectSummary_C::AddRuneEffectDescriptionForShard(class FText& Description, enum class EHexRuneShardType ShardType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RuneEffectSummary_C", "AddRuneEffectDescriptionForShard");

	Params::UW_RuneEffectSummary_C_AddRuneEffectDescriptionForShard_Params Parms{};

	Parms.Description = Description;
	Parms.ShardType = ShardType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_RuneEffectSummary.W_RuneEffectSummary_C.ExecuteUbergraph_W_RuneEffectSummary
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_SummaryText_C*            K2Node_DynamicCast_AsW_Summary_Text                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_description_1                                       (ConstParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SummaryText_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UCommonTextStyle>K2Node_Event_newStyle                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FText                        K2Node_Event_description                                         (ConstParm)
// enum class EHexRuneShardType       K2Node_Event_shardType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_RuneEffectSummary_C::ExecuteUbergraph_W_RuneEffectSummary(int32 EntryPoint, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UW_SummaryText_C* K2Node_DynamicCast_AsW_Summary_Text, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText K2Node_Event_description_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_Event_IsDesignTime, class UW_SummaryText_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, TSubclassOf<class UCommonTextStyle> K2Node_Event_newStyle, class FText K2Node_Event_description, enum class EHexRuneShardType K2Node_Event_shardType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_RuneEffectSummary_C", "ExecuteUbergraph_W_RuneEffectSummary");

	Params::UW_RuneEffectSummary_C_ExecuteUbergraph_W_RuneEffectSummary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsW_Summary_Text = K2Node_DynamicCast_AsW_Summary_Text;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_description_1 = K2Node_Event_description_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_Event_newStyle = K2Node_Event_newStyle;
	Parms.K2Node_Event_description = K2Node_Event_description;
	Parms.K2Node_Event_shardType = K2Node_Event_shardType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


