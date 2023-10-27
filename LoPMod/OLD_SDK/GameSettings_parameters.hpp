#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function GameSettings.GameResponsivePanel.AddChildToGameResponsivePanel
struct UGameResponsivePanel_AddChildToGameResponsivePanel_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameResponsivePanelSlot*              ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameSettings.GameSetting.GetWarningRichText
struct UGameSetting_GetWarningRichText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GameSettings.GameSetting.GetTags
struct UGameSetting_GetTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameSettings.GameSetting.GetDynamicDetails
struct UGameSetting_GetDynamicDetails_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameSettings.GameSetting.GetDisplayNameVisibility
struct UGameSetting_GetDisplayNameVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameSettings.GameSetting.GetDisplayName
struct UGameSetting_GetDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameSettings.GameSetting.GetDevName
struct UGameSetting_GetDevName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameSettings.GameSetting.GetDescriptionRichText
struct UGameSetting_GetDescriptionRichText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameSettings.GameSettingDetailExtension.OnSettingValueChanged
struct UGameSettingDetailExtension_OnSettingValueChanged_Params
{
public:
	class UGameSetting*                          InSetting;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameSettings.GameSettingDetailExtension.OnSettingAssigned
struct UGameSettingDetailExtension_OnSettingAssigned_Params
{
public:
	class UGameSetting*                          InSetting;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameSettings.GameSettingListEntryBase.GetPrimaryGamepadFocusWidget
struct UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameSettings.GameSettingListEntrySetting_Scalar.OnValueChanged
struct UGameSettingListEntrySetting_Scalar_OnValueChanged_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameSettings.GameSettingListEntrySetting_Scalar.OnDefaultValueChanged
struct UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Params
{
public:
	float                                        DefaultValue;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameSettings.GameSettingListEntrySetting_Scalar.HandleSliderValueChanged
struct UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameSettings.GameSettingListEntrySetting_Action.OnSettingAssigned
struct UGameSettingListEntrySetting_Action_OnSettingAssigned_Params
{
public:
	class FText                                  ActionText;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameSettings.GameSettingListEntrySetting_Navigation.OnSettingAssigned
struct UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Params
{
public:
	class FText                                  ActionText;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameSettings.GameSettingListView.SetScrollbarThickness
struct UGameSettingListView_SetScrollbarThickness_Params
{
public:
	struct FVector2D                             NewScrollbarThickness;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameSettings.GameSettingListView.SetScrollbarPadding
struct UGameSettingListView_SetScrollbarPadding_Params
{
public:
	struct FMargin                               NewScrollbarPadding;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameSettings.GameSettingListView.GetWidgetFromItem
struct UGameSettingListView_GetWidgetFromItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameSettings.GameSettingRotator.BP_OnDefaultOptionSpecified
struct UGameSettingRotator_BP_OnDefaultOptionSpecified_Params
{
public:
	int32                                        DefaultOptionIndex;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameSettings.GameSettingScreen.OnSettingsDirtyStateChanged
struct UGameSettingScreen_OnSettingsDirtyStateChanged_Params
{
public:
	bool                                         bSettingsDirty;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameSettings.GameSettingScreen.NavigateToSettings
struct UGameSettingScreen_NavigateToSettings_Params
{
public:
	TArray<class FName>                          SettingDevNames;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameSettings.GameSettingScreen.NavigateToSetting
struct UGameSettingScreen_NavigateToSetting_Params
{
public:
	class FName                                  SettingDevName;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameSettings.GameSettingScreen.HaveSettingsBeenChanged
struct UGameSettingScreen_HaveSettingsBeenChanged_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameSettings.GameSettingScreen.GetSettingCollection
struct UGameSettingScreen_GetSettingCollection_Params
{
public:
	class FName                                  SettingDevName;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasAnySettings;                                    // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameSettingCollection*                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GameSettings.GameSettingScreen.AttemptToPopNavigation
struct UGameSettingScreen_AttemptToPopNavigation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameSettings.GameSettingValueDiscrete.GetDiscreteOptions
struct UGameSettingValueDiscrete_GetDiscreteOptions_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameSettings.GameSettingValueDiscrete.GetDiscreteOptionIndex
struct UGameSettingValueDiscrete_GetDiscreteOptionIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GameSettings.GameSettingValueDiscrete.GetDiscreteOptionDefaultIndex
struct UGameSettingValueDiscrete_GetDiscreteOptionDefaultIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameSettings.GameSettingActionInterface.ExecuteActionForSetting
struct IGameSettingActionInterface_ExecuteActionForSetting_Params
{
public:
	struct FGameplayTag                          ActionTag;                                         // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameSetting*                          InSetting;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


