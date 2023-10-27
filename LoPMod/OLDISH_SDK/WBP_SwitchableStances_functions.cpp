#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SwitchableStances.WBP_SwitchableStances_C
// (None)

class UClass* UWBP_SwitchableStances_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SwitchableStances_C");

	return Clss;
}


// WBP_SwitchableStances_C WBP_SwitchableStances.Default__WBP_SwitchableStances_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SwitchableStances_C* UWBP_SwitchableStances_C::GetDefaultObj()
{
	static class UWBP_SwitchableStances_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SwitchableStances_C*>(UWBP_SwitchableStances_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SwitchableStances.WBP_SwitchableStances_C.Update Icons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputActionImage*           Input_Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetInputAction_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetControllerIconByEventName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SwitchableStances_C::Update_Icons(class UInputActionImage* Input_Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SwitchableStances_C", "Update Icons");

	Params::UWBP_SwitchableStances_C_Update_Icons_Params Parms{};

	Parms.Input_Image = Input_Image;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_GetControllerIconByEventName_ReturnValue = CallFunc_GetControllerIconByEventName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SwitchableStances.WBP_SwitchableStances_C.Switch to Ranged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SwitchableStances_C::Switch_to_Ranged(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SwitchableStances_C", "Switch to Ranged");

	Params::UWBP_SwitchableStances_C_Switch_to_Ranged_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SwitchableStances.WBP_SwitchableStances_C.Switch to Lantern
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SwitchableStances_C::Switch_to_Lantern(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SwitchableStances_C", "Switch to Lantern");

	Params::UWBP_SwitchableStances_C_Switch_to_Lantern_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SwitchableStances.WBP_SwitchableStances_C.Switch Stance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Front_Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Back_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform_1                              (NoDestructor)

void UWBP_SwitchableStances_C::Switch_Stance(class UUserWidget* Front_Widget, class UUserWidget* Back_Widget, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SwitchableStances_C", "Switch Stance");

	Params::UWBP_SwitchableStances_C_Switch_Stance_Params Parms{};

	Parms.Front_Widget = Front_Widget;
	Parms.Back_Widget = Back_Widget;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.K2Node_MakeStruct_WidgetTransform_1 = K2Node_MakeStruct_WidgetTransform_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SwitchableStances.WBP_SwitchableStances_C.BP_SwitchActionsVisibility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStanceWidgetIndex      CurrentStance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHolding                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SwitchableStances_C::BP_SwitchActionsVisibility(enum class EStanceWidgetIndex CurrentStance, bool bHolding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SwitchableStances_C", "BP_SwitchActionsVisibility");

	Params::UWBP_SwitchableStances_C_BP_SwitchActionsVisibility_Params Parms{};

	Parms.CurrentStance = CurrentStance;
	Parms.bHolding = bHolding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SwitchableStances.WBP_SwitchableStances_C.RestoreHudAfterDialogueSequence
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SwitchableStances_C::RestoreHudAfterDialogueSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SwitchableStances_C", "RestoreHudAfterDialogueSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SwitchableStances.WBP_SwitchableStances_C.HideHudForDialogueSequence
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SwitchableStances_C::HideHudForDialogueSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SwitchableStances_C", "HideHudForDialogueSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SwitchableStances.WBP_SwitchableStances_C.BP_SwitchStance
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStanceWidgetIndex      CurrentStance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SwitchableStances_C::BP_SwitchStance(enum class EStanceWidgetIndex CurrentStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SwitchableStances_C", "BP_SwitchStance");

	Params::UWBP_SwitchableStances_C_BP_SwitchStance_Params Parms{};

	Parms.CurrentStance = CurrentStance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SwitchableStances.WBP_SwitchableStances_C.ExecuteUbergraph_WBP_SwitchableStances
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStanceWidgetIndex      K2Node_Event_currentStance_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHolding                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStanceWidgetIndex      K2Node_Event_currentStance                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SwitchableStances_C::ExecuteUbergraph_WBP_SwitchableStances(int32 EntryPoint, enum class EStanceWidgetIndex K2Node_Event_currentStance_1, bool K2Node_Event_bHolding, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, enum class EStanceWidgetIndex K2Node_Event_currentStance, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SwitchableStances_C", "ExecuteUbergraph_WBP_SwitchableStances");

	Params::UWBP_SwitchableStances_C_ExecuteUbergraph_WBP_SwitchableStances_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_currentStance_1 = K2Node_Event_currentStance_1;
	Parms.K2Node_Event_bHolding = K2Node_Event_bHolding;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_Event_currentStance = K2Node_Event_currentStance;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


