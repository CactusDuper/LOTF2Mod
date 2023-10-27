#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BossComponent.BossComponent_C
// (None)

class UClass* UBossComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BossComponent_C");

	return Clss;
}


// BossComponent_C BossComponent.Default__BossComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBossComponent_C* UBossComponent_C::GetDefaultObj()
{
	static class UBossComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBossComponent_C*>(UBossComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BossComponent.BossComponent_C.CreateUIHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacterController_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterUIData*            CallFunc_GetUIData_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexLocalPlayer*             CallFunc_GetHexLocalPlayer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UExtensionPointEntryWidget*  CallFunc_PushHUDNotification_ForPlayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_BossStats_C*              K2Node_DynamicCast_AsW_Boss_Stats                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseAICharacter*            K2Node_DynamicCast_AsBase_AICharacter                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossComponent_C::CreateUIHealth(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AAnathemaPlayerCharacterController_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP, bool K2Node_DynamicCast_bSuccess, class UCharacterUIData* CallFunc_GetUIData_ReturnValue, class UHexLocalPlayer* CallFunc_GetHexLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UExtensionPointEntryWidget* CallFunc_PushHUDNotification_ForPlayer_ReturnValue, class UW_BossStats_C* K2Node_DynamicCast_AsW_Boss_Stats, bool K2Node_DynamicCast_bSuccess_1, class ABaseAICharacter* K2Node_DynamicCast_AsBase_AICharacter, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossComponent_C", "CreateUIHealth");

	Params::UBossComponent_C_CreateUIHealth_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP = K2Node_DynamicCast_AsAnathema_Player_Character_Controller_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIData_ReturnValue = CallFunc_GetUIData_ReturnValue;
	Parms.CallFunc_GetHexLocalPlayer_ReturnValue = CallFunc_GetHexLocalPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PushHUDNotification_ForPlayer_ReturnValue = CallFunc_PushHUDNotification_ForPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Boss_Stats = K2Node_DynamicCast_AsW_Boss_Stats;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBase_AICharacter = K2Node_DynamicCast_AsBase_AICharacter;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossComponent.BossComponent_C.OnRep_CombatStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBossComponent_C::OnRep_CombatStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossComponent_C", "OnRep_CombatStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossComponent.BossComponent_C.Removed_EA1DDCE345C37A31AFBB54BEC4C70719
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TagWaitingFor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBossComponent_C::Removed_EA1DDCE345C37A31AFBB54BEC4C70719(const struct FGameplayTag& TagWaitingFor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossComponent_C", "Removed_EA1DDCE345C37A31AFBB54BEC4C70719");

	Params::UBossComponent_C_Removed_EA1DDCE345C37A31AFBB54BEC4C70719_Params Parms{};

	Parms.TagWaitingFor = TagWaitingFor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossComponent.BossComponent_C.Added_D31EEDB743FF9D243026749FF59477F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TagWaitingFor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBossComponent_C::Added_D31EEDB743FF9D243026749FF59477F0(const struct FGameplayTag& TagWaitingFor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossComponent_C", "Added_D31EEDB743FF9D243026749FF59477F0");

	Params::UBossComponent_C_Added_D31EEDB743FF9D243026749FF59477F0_Params Parms{};

	Parms.TagWaitingFor = TagWaitingFor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossComponent.BossComponent_C.Added_E686B92C4A131B2DE98E16A837D1803F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TagWaitingFor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBossComponent_C::Added_E686B92C4A131B2DE98E16A837D1803F(const struct FGameplayTag& TagWaitingFor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossComponent_C", "Added_E686B92C4A131B2DE98E16A837D1803F");

	Params::UBossComponent_C_Added_E686B92C4A131B2DE98E16A837D1803F_Params Parms{};

	Parms.TagWaitingFor = TagWaitingFor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BossComponent.BossComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBossComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BossComponent.BossComponent_C.ExecuteUbergraph_BossComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_TagWaitingFor_1                               (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_TagWaitingFor                                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// class UAnathemaSoundManager*       CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_TagWaitingFor_2                               (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacterSoundData*         CallFunc_GetSoundData_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAkAnathemaEvent            CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkStateValue*               CallFunc_Map_Find_Value_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1         (None)
// class UAkStateValue*               CallFunc_Map_Find_Value_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys_2                                         (ReferenceParm)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_2         (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayTask_HexWaitGameplayTagsRemoved*CallFunc_WaitGameplayTagsRemove_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayTask_HexWaitGameplayTagsAdded*CallFunc_WaitGameplayTagsAdd_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayTask_HexWaitGameplayTagsAdded*CallFunc_WaitGameplayTagsAdd_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBossComponent_C::ExecuteUbergraph_BossComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor, const struct FGameplayTag& Temp_struct_Variable_2, class UAnathemaSoundManager* CallFunc_GetWorldSubsystem_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_TagWaitingFor_2, class AActor* CallFunc_GetOwner_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UCharacterSoundData* CallFunc_GetSoundData_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAkAnathemaEvent& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UAkStateValue* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1, class UAkStateValue* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys_2, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, class UGameplayTask_HexWaitGameplayTagsRemoved* CallFunc_WaitGameplayTagsRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UGameplayTask_HexWaitGameplayTagsAdded* CallFunc_WaitGameplayTagsAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_3, class UGameplayTask_HexWaitGameplayTagsAdded* CallFunc_WaitGameplayTagsAdd_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BossComponent_C", "ExecuteUbergraph_BossComponent");

	Params::UBossComponent_C_ExecuteUbergraph_BossComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_TagWaitingFor_1 = K2Node_CustomEvent_TagWaitingFor_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_TagWaitingFor = K2Node_CustomEvent_TagWaitingFor;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_TagWaitingFor_2 = K2Node_CustomEvent_TagWaitingFor_2;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetSoundData_ReturnValue = CallFunc_GetSoundData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1 = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Map_Keys_Keys_2 = CallFunc_Map_Keys_Keys_2;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_2 = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_WaitGameplayTagsRemove_ReturnValue = CallFunc_WaitGameplayTagsRemove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_WaitGameplayTagsAdd_ReturnValue = CallFunc_WaitGameplayTagsAdd_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_WaitGameplayTagsAdd_ReturnValue_1 = CallFunc_WaitGameplayTagsAdd_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


