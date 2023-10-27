#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhotoModeComponent.BP_PhotoModeComponent_C
// (None)

class UClass* UBP_PhotoModeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhotoModeComponent_C");

	return Clss;
}


// BP_PhotoModeComponent_C BP_PhotoModeComponent.Default__BP_PhotoModeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PhotoModeComponent_C* UBP_PhotoModeComponent_C::GetDefaultObj()
{
	static class UBP_PhotoModeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PhotoModeComponent_C*>(UBP_PhotoModeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.GetPhotoModeSettings
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPhotoModeSettings          ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FPhotoModeSettings          CallFunc_GetDefaultPhotoModeSettings_Settings                    (None)

struct FPhotoModeSettings UBP_PhotoModeComponent_C::GetPhotoModeSettings(const struct FPhotoModeSettings& CallFunc_GetDefaultPhotoModeSettings_Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "GetPhotoModeSettings");

	Params::UBP_PhotoModeComponent_C_GetPhotoModeSettings_Params Parms{};

	Parms.CallFunc_GetDefaultPhotoModeSettings_Settings = CallFunc_GetDefaultPhotoModeSettings_Settings;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.SetScreenshotPath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Directory_Path_Correction_Corrected_Path                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_NormalizeScreenshotPath_Normalized_Path                 (ZeroConstructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::SetScreenshotPath(const class FString& CallFunc_Directory_Path_Correction_Corrected_Path, const class FString& CallFunc_NormalizeScreenshotPath_Normalized_Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "SetScreenshotPath");

	Params::UBP_PhotoModeComponent_C_SetScreenshotPath_Params Parms{};

	Parms.CallFunc_Directory_Path_Correction_Corrected_Path = CallFunc_Directory_Path_Correction_Corrected_Path;
	Parms.CallFunc_NormalizeScreenshotPath_Normalized_Path = CallFunc_NormalizeScreenshotPath_Normalized_Path;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.GetDefaultPhotoModeSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPhotoModeSettings          Settings                                                         (Parm, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhotoModeSettings          K2Node_MakeStruct_PhotoModeSettings                              (None)
// struct FPhotoModeSettings          K2Node_MakeStruct_PhotoModeSettings_1                            (None)

void UBP_PhotoModeComponent_C::GetDefaultPhotoModeSettings(struct FPhotoModeSettings* Settings, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, float CallFunc_GetValue_ReturnValue_3, float CallFunc_GetValue_ReturnValue_4, float CallFunc_GetValue_ReturnValue_5, float CallFunc_GetValue_ReturnValue_6, float CallFunc_GetValue_ReturnValue_7, float CallFunc_GetValue_ReturnValue_8, float CallFunc_GetValue_ReturnValue_9, float CallFunc_GetValue_ReturnValue_10, bool CallFunc_IsChecked_ReturnValue, float CallFunc_GetValue_ReturnValue_11, float CallFunc_GetValue_ReturnValue_12, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FPhotoModeSettings& K2Node_MakeStruct_PhotoModeSettings, const struct FPhotoModeSettings& K2Node_MakeStruct_PhotoModeSettings_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "GetDefaultPhotoModeSettings");

	Params::UBP_PhotoModeComponent_C_GetDefaultPhotoModeSettings_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_GetValue_ReturnValue_2 = CallFunc_GetValue_ReturnValue_2;
	Parms.CallFunc_GetValue_ReturnValue_3 = CallFunc_GetValue_ReturnValue_3;
	Parms.CallFunc_GetValue_ReturnValue_4 = CallFunc_GetValue_ReturnValue_4;
	Parms.CallFunc_GetValue_ReturnValue_5 = CallFunc_GetValue_ReturnValue_5;
	Parms.CallFunc_GetValue_ReturnValue_6 = CallFunc_GetValue_ReturnValue_6;
	Parms.CallFunc_GetValue_ReturnValue_7 = CallFunc_GetValue_ReturnValue_7;
	Parms.CallFunc_GetValue_ReturnValue_8 = CallFunc_GetValue_ReturnValue_8;
	Parms.CallFunc_GetValue_ReturnValue_9 = CallFunc_GetValue_ReturnValue_9;
	Parms.CallFunc_GetValue_ReturnValue_10 = CallFunc_GetValue_ReturnValue_10;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_11 = CallFunc_GetValue_ReturnValue_11;
	Parms.CallFunc_GetValue_ReturnValue_12 = CallFunc_GetValue_ReturnValue_12;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_PhotoModeSettings = K2Node_MakeStruct_PhotoModeSettings;
	Parms.K2Node_MakeStruct_PhotoModeSettings_1 = K2Node_MakeStruct_PhotoModeSettings_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Settings != nullptr)
		*Settings = std::move(Parms.Settings);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.PauseWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::PauseWorld(class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetIsStateLoaded_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "PauseWorld");

	Params::UBP_PhotoModeComponent_C_PauseWorld_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue = CallFunc_GetIsStateLoaded_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.Unpause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::Unpause(bool CallFunc_SetGamePaused_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "Unpause");

	Params::UBP_PhotoModeComponent_C_Unpause_Params Parms{};

	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast = CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.Pause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentTimeDilation_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::Pause(float CallFunc_GetGlobalTimeDilation_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, bool CallFunc_SetGamePaused_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetGlobalTimeDilation_ReturnValue_2, double K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "Pause");

	Params::UBP_PhotoModeComponent_C_Pause_Params Parms{};

	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue = CallFunc_GetGlobalTimeDilation_ReturnValue;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue_1 = CallFunc_GetGlobalTimeDilation_ReturnValue_1;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue_2 = CallFunc_GetGlobalTimeDilation_ReturnValue_2;
	Parms.K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast = K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast;
	Parms.K2Node_VariableSet_CurrentTimeDilation_ImplicitCast = K2Node_VariableSet_CurrentTimeDilation_ImplicitCast;
	Parms.K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1 = K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1;
	Parms.CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast = CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.UpdateOutputFolder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Custom_Path                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Directory_Path_Correction_Corrected_Path                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_NormalizeScreenshotPath_Normalized_Path                 (ZeroConstructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::UpdateOutputFolder(const class FString& Custom_Path, const class FString& CallFunc_Directory_Path_Correction_Corrected_Path, const class FString& CallFunc_NormalizeScreenshotPath_Normalized_Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "UpdateOutputFolder");

	Params::UBP_PhotoModeComponent_C_UpdateOutputFolder_Params Parms{};

	Parms.Custom_Path = Custom_Path;
	Parms.CallFunc_Directory_Path_Correction_Corrected_Path = CallFunc_Directory_Path_Correction_Corrected_Path;
	Parms.CallFunc_NormalizeScreenshotPath_Normalized_Path = CallFunc_NormalizeScreenshotPath_Normalized_Path;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.GetCameraLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     CameraLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::GetCameraLocation(struct FVector* CameraLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "GetCameraLocation");

	Params::UBP_PhotoModeComponent_C_GetCameraLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CameraLocation != nullptr)
		*CameraLocation = std::move(Parms.CameraLocation);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.GetPostProcessVolume
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APostProcessVolume*          PostProcessVolume                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APostProcessVolume*          HigherPostProcessVolume                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             GreatestPriority                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APostProcessVolume*          K2Node_DynamicCast_AsPost_Process_Volume                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::GetPostProcessVolume(bool* IsValid, class APostProcessVolume** PostProcessVolume, class APostProcessVolume* HigherPostProcessVolume, double GreatestPriority, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class APostProcessVolume* K2Node_DynamicCast_AsPost_Process_Volume, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "GetPostProcessVolume");

	Params::UBP_PhotoModeComponent_C_GetPostProcessVolume_Params Parms{};

	Parms.HigherPostProcessVolume = HigherPostProcessVolume;
	Parms.GreatestPriority = GreatestPriority;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPost_Process_Volume = K2Node_DynamicCast_AsPost_Process_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (PostProcessVolume != nullptr)
		*PostProcessVolume = Parms.PostProcessVolume;

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.UnpausedGameAxisMovementControl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             AxisValueIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AxisValueOut                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::UnpausedGameAxisMovementControl(double AxisValueIn, double* AxisValueOut, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "UnpausedGameAxisMovementControl");

	Params::UBP_PhotoModeComponent_C_UnpausedGameAxisMovementControl_Params Parms{};

	Parms.AxisValueIn = AxisValueIn;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AxisValueOut != nullptr)
		*AxisValueOut = Parms.AxisValueOut;

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.Initialization
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  PlayerReference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CameraComponentReference                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::Initialization(class ACharacter* PlayerReference, class UCameraComponent* CameraComponentReference, class APlayerController*& PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "Initialization");

	Params::UBP_PhotoModeComponent_C_Initialization_Params Parms{};

	Parms.PlayerReference = PlayerReference;
	Parms.CameraComponentReference = CameraComponentReference;
	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.ToggleWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::ToggleWidget(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "ToggleWidget");

	Params::UBP_PhotoModeComponent_C_ToggleWidget_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.ToggleGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PhotoModeComponent_C::ToggleGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "ToggleGrid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.ResetPhotoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PhotoModeComponent_C::ResetPhotoMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "ResetPhotoMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.ExecuteUbergraph_BP_PhotoModeComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatableWidget*    CallFunc_PushContentToLayer_ForPlayerController_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_PhotoModeWidget_C*      K2Node_DynamicCast_AsWBP_Photo_Mode_Widget                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APostProcessVolume*          K2Node_DynamicCast_AsPost_Process_Volume                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_X                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_Z                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector4_W                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSPostProcessPressets       K2Node_MakeStruct_SPostProcessPressets                           (HasGetValueTypeHash)
// class ACharacter*                  K2Node_CustomEvent_PlayerReference                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            K2Node_CustomEvent_CameraComponentReference                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class USceneStateSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStateLoaded_ReturnValue_1                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentTimeDilation_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DefaultFOV_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MakeStruct_Temperature_16_BF1E5824433833CC4EF4309B3DA68CC9_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::ExecuteUbergraph_BP_PhotoModeComponent(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetIsStateLoaded_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCommonActivatableWidget* CallFunc_PushContentToLayer_ForPlayerController_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class UWBP_PhotoModeWidget_C* K2Node_DynamicCast_AsWBP_Photo_Mode_Widget, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGlobalTimeDilation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class APostProcessVolume* K2Node_DynamicCast_AsPost_Process_Volume, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetGamePaused_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_CustomEvent_Active, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, const struct FSPostProcessPressets& K2Node_MakeStruct_SPostProcessPressets, class ACharacter* K2Node_CustomEvent_PlayerReference, class UCameraComponent* K2Node_CustomEvent_CameraComponentReference, class APlayerController* K2Node_CustomEvent_PlayerController, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_GetIsStateLoaded_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetGlobalTimeDilation_ReturnValue_2, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast, double K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast, double K2Node_VariableSet_DefaultFOV_ImplicitCast, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast, double K2Node_MakeStruct_Temperature_16_BF1E5824433833CC4EF4309B3DA68CC9_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_1, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "ExecuteUbergraph_BP_PhotoModeComponent");

	Params::UBP_PhotoModeComponent_C_ExecuteUbergraph_BP_PhotoModeComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue = CallFunc_GetIsStateLoaded_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PushContentToLayer_ForPlayerController_ReturnValue = CallFunc_PushContentToLayer_ForPlayerController_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Photo_Mode_Widget = K2Node_DynamicCast_AsWBP_Photo_Mode_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue = CallFunc_GetGlobalTimeDilation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue_1 = CallFunc_GetGlobalTimeDilation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPost_Process_Volume = K2Node_DynamicCast_AsPost_Process_Volume;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BreakVector4_X = CallFunc_BreakVector4_X;
	Parms.CallFunc_BreakVector4_Y = CallFunc_BreakVector4_Y;
	Parms.CallFunc_BreakVector4_Z = CallFunc_BreakVector4_Z;
	Parms.CallFunc_BreakVector4_W = CallFunc_BreakVector4_W;
	Parms.K2Node_MakeStruct_SPostProcessPressets = K2Node_MakeStruct_SPostProcessPressets;
	Parms.K2Node_CustomEvent_PlayerReference = K2Node_CustomEvent_PlayerReference;
	Parms.K2Node_CustomEvent_CameraComponentReference = K2Node_CustomEvent_CameraComponentReference;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetIsStateLoaded_ReturnValue_1 = CallFunc_GetIsStateLoaded_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue_2 = CallFunc_GetGlobalTimeDilation_ReturnValue_2;
	Parms.K2Node_VariableSet_CurrentTimeDilation_ImplicitCast = K2Node_VariableSet_CurrentTimeDilation_ImplicitCast;
	Parms.K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast = K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast;
	Parms.K2Node_VariableSet_DefaultFOV_ImplicitCast = K2Node_VariableSet_DefaultFOV_ImplicitCast;
	Parms.CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast = CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast;
	Parms.K2Node_MakeStruct_Temperature_16_BF1E5824433833CC4EF4309B3DA68CC9_ImplicitCast = K2Node_MakeStruct_Temperature_16_BF1E5824433833CC4EF4309B3DA68CC9_ImplicitCast;
	Parms.CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast = CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast;
	Parms.CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_1 = CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_1;
	Parms.K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1 = K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.PhotoModeClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_PhotoModeComponent_C::PhotoModeClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "PhotoModeClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PhotoModeComponent.BP_PhotoModeComponent_C.PhotoModeOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CurrentTimeDilation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PhotoModeComponent_C::PhotoModeOpened__DelegateSignature(double CurrentTimeDilation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PhotoModeComponent_C", "PhotoModeOpened__DelegateSignature");

	Params::UBP_PhotoModeComponent_C_PhotoModeOpened__DelegateSignature_Params Parms{};

	Parms.CurrentTimeDilation = CurrentTimeDilation;

	UObject::ProcessEvent(Func, &Parms);

}

}


