#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_WitherReaction_BP.GA_WitherReaction_BP_C
// (None)

class UClass* UGA_WitherReaction_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_WitherReaction_BP_C");

	return Clss;
}


// GA_WitherReaction_BP_C GA_WitherReaction_BP.Default__GA_WitherReaction_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_WitherReaction_BP_C* UGA_WitherReaction_BP_C::GetDefaultObj()
{
	static class UGA_WitherReaction_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_WitherReaction_BP_C*>(UGA_WitherReaction_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_WitherReaction_BP.GA_WitherReaction_BP_C.OnWitherChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             WitherLevelProgress                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WitherLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumLevels_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRtpcOnActor_val_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRtpcOnActor_val_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRtpcOnActor_val_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRtpcOnActor_val_ImplicitCast_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WitherReaction_BP_C::OnWitherChange(double WitherLevelProgress, int32 WitherLevel, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, int32 CallFunc_GetNumLevels_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_3, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4, bool CallFunc_NotEqual_IntInt_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_4, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetRtpcOnActor_val_ImplicitCast, float CallFunc_SetRtpcOnActor_val_ImplicitCast_1, float CallFunc_SetRtpcOnActor_val_ImplicitCast_2, float CallFunc_SetRtpcOnActor_val_ImplicitCast_3, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_WitherReaction_BP_C", "OnWitherChange");

	Params::UGA_WitherReaction_BP_C_OnWitherChange_Params Parms{};

	Parms.WitherLevelProgress = WitherLevelProgress;
	Parms.WitherLevel = WitherLevel;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetNumLevels_ReturnValue = CallFunc_GetNumLevels_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_3 = CallFunc_GetWorldSubsystem_ReturnValue_3;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_4;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_4 = CallFunc_GetWorldSubsystem_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetRtpcOnActor_val_ImplicitCast = CallFunc_SetRtpcOnActor_val_ImplicitCast;
	Parms.CallFunc_SetRtpcOnActor_val_ImplicitCast_1 = CallFunc_SetRtpcOnActor_val_ImplicitCast_1;
	Parms.CallFunc_SetRtpcOnActor_val_ImplicitCast_2 = CallFunc_SetRtpcOnActor_val_ImplicitCast_2;
	Parms.CallFunc_SetRtpcOnActor_val_ImplicitCast_3 = CallFunc_SetRtpcOnActor_val_ImplicitCast_3;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_WitherReaction_BP.GA_WitherReaction_BP_C.OnWitherEndBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_WitherReaction_BP_C::OnWitherEndBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_WitherReaction_BP_C", "OnWitherEndBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_WitherReaction_BP.GA_WitherReaction_BP_C.OnWitherStartBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_WitherReaction_BP_C::OnWitherStartBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_WitherReaction_BP_C", "OnWitherStartBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_WitherReaction_BP.GA_WitherReaction_BP_C.OnWitherInhibitedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_WitherReaction_BP_C::OnWitherInhibitedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_WitherReaction_BP_C", "OnWitherInhibitedBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_WitherReaction_BP.GA_WitherReaction_BP_C.OnWitherChangeBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              WitherProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WitherLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WitherReaction_BP_C::OnWitherChangeBP(float WitherProgress, int32 WitherLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_WitherReaction_BP_C", "OnWitherChangeBP");

	Params::UGA_WitherReaction_BP_C_OnWitherChangeBP_Params Parms{};

	Parms.WitherProgress = WitherProgress;
	Parms.WitherLevel = WitherLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_WitherReaction_BP.GA_WitherReaction_BP_C.OnWitherUninhibitedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              WitherProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WitherLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WitherReaction_BP_C::OnWitherUninhibitedBP(float WitherProgress, int32 WitherLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_WitherReaction_BP_C", "OnWitherUninhibitedBP");

	Params::UGA_WitherReaction_BP_C_OnWitherUninhibitedBP_Params Parms{};

	Parms.WitherProgress = WitherProgress;
	Parms.WitherLevel = WitherLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_WitherReaction_BP.GA_WitherReaction_BP_C.OnPreCharacterSpawnBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_WitherReaction_BP_C::OnPreCharacterSpawnBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_WitherReaction_BP_C", "OnPreCharacterSpawnBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_WitherReaction_BP.GA_WitherReaction_BP_C.ExecuteUbergraph_GA_WitherReaction_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_witherProgress_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_witherLevel_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_witherProgress                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_witherLevel                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnWitherChange_WitherLevelProgress_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnWitherChange_WitherLevelProgress_ImplicitCast_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WitherReaction_BP_C::ExecuteUbergraph_GA_WitherReaction_BP(int32 EntryPoint, float K2Node_Event_witherProgress_1, int32 K2Node_Event_witherLevel_1, float K2Node_Event_witherProgress, int32 K2Node_Event_witherLevel, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, double CallFunc_OnWitherChange_WitherLevelProgress_ImplicitCast, double CallFunc_OnWitherChange_WitherLevelProgress_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_WitherReaction_BP_C", "ExecuteUbergraph_GA_WitherReaction_BP");

	Params::UGA_WitherReaction_BP_C_ExecuteUbergraph_GA_WitherReaction_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_witherProgress_1 = K2Node_Event_witherProgress_1;
	Parms.K2Node_Event_witherLevel_1 = K2Node_Event_witherLevel_1;
	Parms.K2Node_Event_witherProgress = K2Node_Event_witherProgress;
	Parms.K2Node_Event_witherLevel = K2Node_Event_witherLevel;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_OnWitherChange_WitherLevelProgress_ImplicitCast = CallFunc_OnWitherChange_WitherLevelProgress_ImplicitCast;
	Parms.CallFunc_OnWitherChange_WitherLevelProgress_ImplicitCast_1 = CallFunc_OnWitherChange_WitherLevelProgress_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


