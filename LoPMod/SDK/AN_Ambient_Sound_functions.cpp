#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Ambient_Sound.AN_Ambient_Sound_C
// (Actor)

class UClass* AAN_Ambient_Sound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Ambient_Sound_C");

	return Clss;
}


// AN_Ambient_Sound_C AN_Ambient_Sound.Default__AN_Ambient_Sound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAN_Ambient_Sound_C* AAN_Ambient_Sound_C::GetDefaultObj()
{
	static class AAN_Ambient_Sound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAN_Ambient_Sound_C*>(AAN_Ambient_Sound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.isDebugNecessary
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowDebug                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowDebugLocal                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformUserName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAN_AudioAmbientVisualization_StructCallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::IsDebugNecessary(bool* ShowDebug, bool ShowDebugLocal, const class FString& CallFunc_GetPlatformUserName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FAN_AudioAmbientVisualization_Struct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsEditor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "isDebugNecessary");

	Params::AAN_Ambient_Sound_C_IsDebugNecessary_Params Parms{};

	Parms.ShowDebugLocal = ShowDebugLocal;
	Parms.CallFunc_GetPlatformUserName_ReturnValue = CallFunc_GetPlatformUserName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsEditor_ReturnValue = CallFunc_IsEditor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShowDebug != nullptr)
		*ShowDebug = Parms.ShowDebug;

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.CreateDebugObjects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHitSphereComponent*         CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_2                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_3                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHitSphereComponent*         CallFunc_AddComponent_ReturnValue_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHitSphereComponent*         CallFunc_AddComponent_ReturnValue_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::CreateDebugObjects(const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue_1, const struct FTransform& Temp_struct_Variable_2, const struct FTransform& Temp_struct_Variable_3, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue_2, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "CreateDebugObjects");

	Params::AAN_Ambient_Sound_C_CreateDebugObjects_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_AddComponent_ReturnValue_2 = CallFunc_AddComponent_ReturnValue_2;
	Parms.CallFunc_AddComponent_ReturnValue_3 = CallFunc_AddComponent_ReturnValue_3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.isAKEventValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAKValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::IsAKEventValid(bool* IsAKValid, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "isAKEventValid");

	Params::AAN_Ambient_Sound_C_IsAKEventValid_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAKValid != nullptr)
		*IsAKValid = Parms.IsAKValid;

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.SetDebugSpheresRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::SetDebugSpheresRadius(float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_1, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "SetDebugSpheresRadius");

	Params::AAN_Ambient_Sound_C_SetDebugSpheresRadius_Params Parms{};

	Parms.CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast = CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast;
	Parms.CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_1 = CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_1;
	Parms.CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_2 = CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.DestroyDebugObjects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAN_Ambient_Sound_C::DestroyDebugObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "DestroyDebugObjects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.Set Occlusion Refresh Interval
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              K2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::Set_Occlusion_Refresh_Interval(float K2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "Set Occlusion Refresh Interval");

	Params::AAN_Ambient_Sound_C_Set_Occlusion_Refresh_Interval_Params Parms{};

	Parms.K2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast = K2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.Interact
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>        Tags                                                             (Parm, OutParm)

void AAN_Ambient_Sound_C::Interact(TArray<struct FGameplayTag>* Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "Interact");

	Params::AAN_Ambient_Sound_C_Interact_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Tags != nullptr)
		*Tags = std::move(Parms.Tags);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.Show Debug Script
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMCAKWorldLocation_MCAkWorldLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMCAKWorldLocation_ValidLocation                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::Show_Debug_Script(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FVector& CallFunc_GetMCAKWorldLocation_MCAkWorldLocation, bool CallFunc_GetMCAKWorldLocation_ValidLocation, double CallFunc_Vector_Distance_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "Show Debug Script");

	Params::AAN_Ambient_Sound_C_Show_Debug_Script_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetMCAKWorldLocation_MCAkWorldLocation = CallFunc_GetMCAKWorldLocation_MCAkWorldLocation;
	Parms.CallFunc_GetMCAKWorldLocation_ValidLocation = CallFunc_GetMCAKWorldLocation_ValidLocation;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.SetExitedIni
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::SetExitedIni(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "SetExitedIni");

	Params::AAN_Ambient_Sound_C_SetExitedIni_Params Parms{};

	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.SetAKWorldLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::SetAKWorldLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "SetAKWorldLocation");

	Params::AAN_Ambient_Sound_C_SetAKWorldLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.SetVisibilityDebugObjects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAN_Ambient_Sound_C::SetVisibilityDebugObjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "SetVisibilityDebugObjects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.Show Debug Objects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAN_Ambient_Sound_C::Show_Debug_Objects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "Show Debug Objects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.Set Sphere Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetMaxAttenuationRadius_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxAttenuationRadius_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGameObjectRadius_in_innerRadius_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGameObjectRadius_in_outerRadius_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_OuterSpreadSphereRadius_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::Set_Sphere_Radius(float CallFunc_GetMaxAttenuationRadius_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_GetMaxAttenuationRadius_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float CallFunc_SetGameObjectRadius_in_innerRadius_ImplicitCast, float CallFunc_SetGameObjectRadius_in_outerRadius_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_OuterSpreadSphereRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "Set Sphere Radius");

	Params::AAN_Ambient_Sound_C_Set_Sphere_Radius_Params Parms{};

	Parms.CallFunc_GetMaxAttenuationRadius_ReturnValue = CallFunc_GetMaxAttenuationRadius_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetMaxAttenuationRadius_ReturnValue_1 = CallFunc_GetMaxAttenuationRadius_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SetGameObjectRadius_in_innerRadius_ImplicitCast = CallFunc_SetGameObjectRadius_in_innerRadius_ImplicitCast;
	Parms.CallFunc_SetGameObjectRadius_in_outerRadius_ImplicitCast = CallFunc_SetGameObjectRadius_in_outerRadius_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast = CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_VariableSet_OuterSpreadSphereRadius_ImplicitCast = K2Node_VariableSet_OuterSpreadSphereRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_isDebugNecessary_ShowDebug                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isAKEventValid_isAKValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::UserConstructionScript(bool CallFunc_isDebugNecessary_ShowDebug, bool CallFunc_isAKEventValid_isAKValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "UserConstructionScript");

	Params::AAN_Ambient_Sound_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_isDebugNecessary_ShowDebug = CallFunc_isDebugNecessary_ShowDebug;
	Parms.CallFunc_isAKEventValid_isAKValid = CallFunc_isAKEventValid_isAKValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAN_Ambient_Sound_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "ReceiveTick");

	Params::AAN_Ambient_Sound_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.BndEvt__AN_Ambient_Sound_ExternalSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AAN_Ambient_Sound_C::BndEvt__AN_Ambient_Sound_ExternalSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "BndEvt__AN_Ambient_Sound_ExternalSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AAN_Ambient_Sound_C_BndEvt__AN_Ambient_Sound_ExternalSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.BndEvt__AN_Ambient_Sound_ExternalSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::BndEvt__AN_Ambient_Sound_ExternalSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "BndEvt__AN_Ambient_Sound_ExternalSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::AAN_Ambient_Sound_C_BndEvt__AN_Ambient_Sound_ExternalSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.StopSoundReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAN_Ambient_Sound_C::StopSoundReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "StopSoundReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.StartSoundReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAN_Ambient_Sound_C::StartSoundReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "StartSoundReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.StartPlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAN_Ambient_Sound_C::StartPlaySound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "StartPlaySound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.StopPlaySound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAN_Ambient_Sound_C::StopPlaySound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "StopPlaySound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.TriggerNotExited
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAN_Ambient_Sound_C::TriggerNotExited()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "TriggerNotExited");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.TriggerExited
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAN_Ambient_Sound_C::TriggerExited()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "TriggerExited");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldResetReason       ResetReason                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::CustomEvent(enum class EWorldResetReason ResetReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "CustomEvent");

	Params::AAN_Ambient_Sound_C_CustomEvent_Params Parms{};

	Parms.ResetReason = ResetReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "ReceiveEndPlay");

	Params::AAN_Ambient_Sound_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AN_Ambient_Sound.AN_Ambient_Sound_C.ExecuteUbergraph_AN_Ambient_Sound
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayer_isLocalPlayer                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayer_isLocalPlayer_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnathemaGameSystems*        CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpawnDirector*              CallFunc_GetSpawnDirector_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAssociatedAkEventAsync_PlayingID                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isDebugNecessary_ShowDebug                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLOTF2GameMode_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2GameMode*              CallFunc_GetLOTF2GameMode_GameMode                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWorldResetReason       K2Node_CustomEvent_resetReason                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMCAKComponent_validAkComp                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_GetMCAKComponent_PlayerAkComp                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMCAKWorldLocation_MCAkWorldLocation                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMCAKWorldLocation_ValidLocation                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAN_Ambient_Sound_C::ExecuteUbergraph_AN_Ambient_Sound(int32 EntryPoint, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsLocalPlayer_isLocalPlayer, bool CallFunc_IsLocalPlayer_isLocalPlayer_1, class UAnathemaGameSystems* CallFunc_GetWorldSubsystem_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, class USpawnDirector* CallFunc_GetSpawnDirector_ReturnValue, int32 CallFunc_PostAssociatedAkEventAsync_PlayingID, bool CallFunc_isDebugNecessary_ShowDebug, bool CallFunc_GetLOTF2GameMode_IsValid, class ALOTF2GameMode* CallFunc_GetLOTF2GameMode_GameMode, enum class EWorldResetReason K2Node_CustomEvent_resetReason, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_GetMCAKComponent_validAkComp, class UAkComponent* CallFunc_GetMCAKComponent_PlayerAkComp, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetMCAKWorldLocation_MCAkWorldLocation, bool CallFunc_GetMCAKWorldLocation_ValidLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Ambient_Sound_C", "ExecuteUbergraph_AN_Ambient_Sound");

	Params::AAN_Ambient_Sound_C_ExecuteUbergraph_AN_Ambient_Sound_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_IsLocalPlayer_isLocalPlayer = CallFunc_IsLocalPlayer_isLocalPlayer;
	Parms.CallFunc_IsLocalPlayer_isLocalPlayer_1 = CallFunc_IsLocalPlayer_isLocalPlayer_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_GetSpawnDirector_ReturnValue = CallFunc_GetSpawnDirector_ReturnValue;
	Parms.CallFunc_PostAssociatedAkEventAsync_PlayingID = CallFunc_PostAssociatedAkEventAsync_PlayingID;
	Parms.CallFunc_isDebugNecessary_ShowDebug = CallFunc_isDebugNecessary_ShowDebug;
	Parms.CallFunc_GetLOTF2GameMode_IsValid = CallFunc_GetLOTF2GameMode_IsValid;
	Parms.CallFunc_GetLOTF2GameMode_GameMode = CallFunc_GetLOTF2GameMode_GameMode;
	Parms.K2Node_CustomEvent_resetReason = K2Node_CustomEvent_resetReason;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetMCAKComponent_validAkComp = CallFunc_GetMCAKComponent_validAkComp;
	Parms.CallFunc_GetMCAKComponent_PlayerAkComp = CallFunc_GetMCAKComponent_PlayerAkComp;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetMCAKWorldLocation_MCAkWorldLocation = CallFunc_GetMCAKWorldLocation_MCAkWorldLocation;
	Parms.CallFunc_GetMCAKWorldLocation_ValidLocation = CallFunc_GetMCAKWorldLocation_ValidLocation;

	UObject::ProcessEvent(Func, &Parms);

}

}


