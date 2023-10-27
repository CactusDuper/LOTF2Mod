#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_InGameMenuBase.W_InGameMenuBase_C
// (None)

class UClass* UW_InGameMenuBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_InGameMenuBase_C");

	return Clss;
}


// W_InGameMenuBase_C W_InGameMenuBase.Default__W_InGameMenuBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_InGameMenuBase_C* UW_InGameMenuBase_C::GetDefaultObj()
{
	static class UW_InGameMenuBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_InGameMenuBase_C*>(UW_InGameMenuBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_InGameMenuBase.W_InGameMenuBase_C.Reset Extension Points
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHexLocalPlayer*             LocalPlayer                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_2                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_3                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_4                    (NoDestructor, HasGetValueTypeHash)

void UW_InGameMenuBase_C::Reset_Extension_Points(class UHexLocalPlayer* LocalPlayer, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenuBase_C", "Reset Extension Points");

	Params::UW_InGameMenuBase_C_Reset_Extension_Points_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_2 = CallFunc_MakeLiteralGameplayTag_ReturnValue_2;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_3 = CallFunc_MakeLiteralGameplayTag_ReturnValue_3;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_4 = CallFunc_MakeLiteralGameplayTag_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InGameMenuBase.W_InGameMenuBase_C.OnShown_025869F9447244F8970E6DBA75E0893C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_InGameMenuBase_C::OnShown_025869F9447244F8970E6DBA75E0893C(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenuBase_C", "OnShown_025869F9447244F8970E6DBA75E0893C");

	Params::UW_InGameMenuBase_C_OnShown_025869F9447244F8970E6DBA75E0893C_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InGameMenuBase.W_InGameMenuBase_C.OnResultNamed_025869F9447244F8970E6DBA75E0893C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_InGameMenuBase_C::OnResultNamed_025869F9447244F8970E6DBA75E0893C(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenuBase_C", "OnResultNamed_025869F9447244F8970E6DBA75E0893C");

	Params::UW_InGameMenuBase_C_OnResultNamed_025869F9447244F8970E6DBA75E0893C_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InGameMenuBase.W_InGameMenuBase_C.OnResult_025869F9447244F8970E6DBA75E0893C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_InGameMenuBase_C::OnResult_025869F9447244F8970E6DBA75E0893C(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenuBase_C", "OnResult_025869F9447244F8970E6DBA75E0893C");

	Params::UW_InGameMenuBase_C_OnResult_025869F9447244F8970E6DBA75E0893C_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InGameMenuBase.W_InGameMenuBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_InGameMenuBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenuBase_C", "PreConstruct");

	Params::UW_InGameMenuBase_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_InGameMenuBase.W_InGameMenuBase_C.BP_QuitGame
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_InGameMenuBase_C::BP_QuitGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenuBase_C", "BP_QuitGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenuBase.W_InGameMenuBase_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_InGameMenuBase_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenuBase_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_InGameMenuBase.W_InGameMenuBase_C.ExecuteUbergraph_W_InGameMenuBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacterController_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexLocalPlayer*             CallFunc_GetHexLocalPlayer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacterController_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP_1   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexLocalPlayer*             CallFunc_GetHexLocalPlayer_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancel_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)

void UW_InGameMenuBase_C::ExecuteUbergraph_W_InGameMenuBase(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AAnathemaPlayerCharacterController_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHexLocalPlayer* CallFunc_GetHexLocalPlayer_ReturnValue, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AAnathemaPlayerCharacterController_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP_1, bool K2Node_DynamicCast_bSuccess_1, class UHexLocalPlayer* CallFunc_GetHexLocalPlayer_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_InGameMenuBase_C", "ExecuteUbergraph_W_InGameMenuBase");

	Params::UW_InGameMenuBase_C_ExecuteUbergraph_W_InGameMenuBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP = K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetHexLocalPlayer_ReturnValue = CallFunc_GetHexLocalPlayer_ReturnValue;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.K2Node_CustomEvent_Dialog_2 = K2Node_CustomEvent_Dialog_2;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ActionId = K2Node_CustomEvent_ActionId;
	Parms.K2Node_CustomEvent_Dialog_1 = K2Node_CustomEvent_Dialog_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_Dialog = K2Node_CustomEvent_Dialog;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP_1 = K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetHexLocalPlayer_ReturnValue_1 = CallFunc_GetHexLocalPlayer_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_ShowConfirmationOkCancel_ReturnValue = CallFunc_ShowConfirmationOkCancel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


