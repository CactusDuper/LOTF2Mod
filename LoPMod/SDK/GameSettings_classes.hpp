#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x180 - 0x168)
// Class GameSettings.GameResponsivePanel
class UGameResponsivePanel : public UPanelWidget
{
public:
	bool                                         bCanStackVertically;                               // 0x168(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EE[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameResponsivePanel* GetDefaultObj();

	class UGameResponsivePanelSlot* AddChildToGameResponsivePanel(class UWidget* Content);
};

// 0x8 (0x40 - 0x38)
// Class GameSettings.GameResponsivePanelSlot
class UGameResponsivePanelSlot : public UPanelSlot
{
public:
	uint8                                        Pad_16F0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameResponsivePanelSlot* GetDefaultObj();

};

// 0x128 (0x150 - 0x28)
// Class GameSettings.GameSetting
class UGameSetting : public UObject
{
public:
	uint8                                        Pad_16F4[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          LocalPlayer;                                       // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameSetting*                          SettingParent;                                     // 0x60(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameSettingRegistry*                  OwningRegistry;                                    // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16F5[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameSetting* GetDefaultObj();

	class FText GetWarningRichText();
	struct FGameplayTagContainer GetTags();
	class FText GetDynamicDetails();
	enum class ESlateVisibility GetDisplayNameVisibility();
	class FText GetDisplayName();
	class FName GetDevName();
	class FText GetDescriptionRichText();
};

// 0x50 (0x1A0 - 0x150)
// Class GameSettings.GameSettingAction
class UGameSettingAction : public UGameSetting
{
public:
	uint8                                        Pad_16F6[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameSettingAction* GetDefaultObj();

};

// 0x10 (0x160 - 0x150)
// Class GameSettings.GameSettingCollection
class UGameSettingCollection : public UGameSetting
{
public:
	TArray<class UGameSetting*>                  Settings;                                          // 0x150(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameSettingCollection* GetDefaultObj();

};

// 0x30 (0x190 - 0x160)
// Class GameSettings.GameSettingCollectionPage
class UGameSettingCollectionPage : public UGameSettingCollection
{
public:
	uint8                                        Pad_16F7[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameSettingCollectionPage* GetDefaultObj();

};

// 0x8 (0x280 - 0x278)
// Class GameSettings.GameSettingDetailExtension
class UGameSettingDetailExtension : public UUserWidget
{
public:
	class UGameSetting*                          Setting;                                           // 0x278(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameSettingDetailExtension* GetDefaultObj();

	void OnSettingValueChanged(class UGameSetting* InSetting);
	void OnSettingAssigned(class UGameSetting* InSetting);
};

// 0xD8 (0x350 - 0x278)
// Class GameSettings.GameSettingDetailView
class UGameSettingDetailView : public UUserWidget
{
public:
	class UGameSettingVisualData*                VisualData;                                        // 0x278(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUserWidgetPool                       ExtensionWidgetPool;                               // 0x280(0x88)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UGameSetting*                          CurrentSetting;                                    // 0x308(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16F8[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonRichTextBlock*                  RichText_SettingName;                              // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_Description;                              // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_DynamicDetails;                           // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_WarningDetails;                           // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_DisabledDetails;                          // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerticalBox*                          Box_DetailsExtension;                              // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameSettingDetailView* GetDefaultObj();

};

// 0x38 (0x2D8 - 0x2A0)
// Class GameSettings.GameSettingListEntryBase
class UGameSettingListEntryBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_16F9[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameSetting*                          Setting;                                           // 0x2B0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16FA[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           Background;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameSettingListEntryBase* GetDefaultObj();

	class UWidget* GetPrimaryGamepadFocusWidget();
};

// 0x8 (0x2E0 - 0x2D8)
// Class GameSettings.GameSettingListEntry_Setting
class UGameSettingListEntry_Setting : public UGameSettingListEntryBase
{
public:
	class UCommonTextBlock*                      Text_SettingName;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameSettingListEntry_Setting* GetDefaultObj();

};

// 0x28 (0x308 - 0x2E0)
// Class GameSettings.GameSettingListEntrySetting_Discrete
class UGameSettingListEntrySetting_Discrete : public UGameSettingListEntry_Setting
{
public:
	class UGameSettingValueDiscrete*             DiscreteSetting;                                   // 0x2E0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          Panel_Value;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSettingRotator*                   Rotator_SettingValue;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Decrease;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonBase*                     Button_Increase;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameSettingListEntrySetting_Discrete* GetDefaultObj();

};

// 0x20 (0x300 - 0x2E0)
// Class GameSettings.GameSettingListEntrySetting_Scalar
class UGameSettingListEntrySetting_Scalar : public UGameSettingListEntry_Setting
{
public:
	class UGameSettingValueScalar*               ScalarSetting;                                     // 0x2E0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          Panel_Value;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnalogSlider*                         Slider_SettingValue;                               // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_SettingValue;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameSettingListEntrySetting_Scalar* GetDefaultObj();

	void OnValueChanged(float Value);
	void OnDefaultValueChanged(float DefaultValue);
	void HandleSliderValueChanged(float Value);
	void HandleSliderCaptureEnded();
};

// 0x10 (0x2F0 - 0x2E0)
// Class GameSettings.GameSettingListEntrySetting_Action
class UGameSettingListEntrySetting_Action : public UGameSettingListEntry_Setting
{
public:
	class UGameSettingAction*                    ActionSetting;                                     // 0x2E0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Action;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameSettingListEntrySetting_Action* GetDefaultObj();

	void OnSettingAssigned(class FText& ActionText);
};

// 0x10 (0x2F0 - 0x2E0)
// Class GameSettings.GameSettingListEntrySetting_Navigation
class UGameSettingListEntrySetting_Navigation : public UGameSettingListEntry_Setting
{
public:
	class UGameSettingCollectionPage*            CollectionSetting;                                 // 0x2E0(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_Navigate;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameSettingListEntrySetting_Navigation* GetDefaultObj();

	void OnSettingAssigned(class FText& ActionText);
};

// 0x90 (0xCB0 - 0xC20)
// Class GameSettings.GameSettingListView
class UGameSettingListView : public UListView
{
public:
	class UGameSettingVisualData*                VisualData;                                        // 0xC20(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               ScrollbarPadding;                                  // 0xC28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             ScrollbarThickness;                                // 0xC38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1705[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameSettingListView* GetDefaultObj();

	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness);
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding);
	class UUserWidget* GetWidgetFromItem(class UObject* Item);
};

// 0x448 (0x6E8 - 0x2A0)
// Class GameSettings.GameSettingPanel
class UGameSettingPanel : public UCommonUserWidget
{
public:
	uint8                                        Pad_1706[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameSettingRegistry*                  Registry;                                          // 0x2B8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UGameSetting*>                  VisibleSettings;                                   // 0x2C0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UGameSetting*                          LastHoveredOrSelectedSetting;                      // 0x2D0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameSettingFilterState               FilterState;                                       // 0x2D8(0x3B8)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FGameSettingFilterState>       FilterNavigationStack;                             // 0x690(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1707[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameSettingListView*                  ListView_Settings;                                 // 0x6B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSettingDetailView*                Details_Settings;                                  // 0x6B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         Container_Warning;                                 // 0x6C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnExecuteNamedAction;                           // 0x6C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1708[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameSettingPanel* GetDefaultObj();

};

// 0x48 (0x410 - 0x3C8)
// Class GameSettings.GameSettingPressAnyKey
class UGameSettingPressAnyKey : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1709[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameSettingPressAnyKey* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class GameSettings.GameSettingRegistry
class UGameSettingRegistry : public UObject
{
public:
	uint8                                        Pad_170A[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameSetting*>                  TopLevelSettings;                                  // 0x88(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameSetting*>                  RegisteredSettings;                                // 0x98(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class ULocalPlayer*                          OwningLocalPlayer;                                 // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameSettingRegistry* GetDefaultObj();

};

// 0x0 (0x1550 - 0x1550)
// Class GameSettings.GameSettingRotator
class UGameSettingRotator : public UCommonRotator
{
public:

	static class UClass* StaticClass();
	static class UGameSettingRotator* GetDefaultObj();

	void BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex);
};

// 0x80 (0x448 - 0x3C8)
// Class GameSettings.GameSettingScreen
class UGameSettingScreen : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_170C[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameSettingPanel*                     Settings_Panel;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGameSettingRegistry*                  Registry;                                          // 0x440(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameSettingScreen* GetDefaultObj();

	void OnSettingsDirtyStateChanged(bool bSettingsDirty);
	void NavigateToSettings(TArray<class FName>& SettingDevNames);
	void NavigateToSetting(class FName SettingDevName);
	bool HaveSettingsBeenChanged();
	class UGameSettingCollection* GetSettingCollection(class FName SettingDevName, bool* HasAnySettings);
	void CancelChanges();
	bool AttemptToPopNavigation();
	void ApplyChanges();
};

// 0x0 (0x150 - 0x150)
// Class GameSettings.GameSettingValue
class UGameSettingValue : public UGameSetting
{
public:

	static class UClass* StaticClass();
	static class UGameSettingValue* GetDefaultObj();

};

// 0x0 (0x150 - 0x150)
// Class GameSettings.GameSettingValueDiscrete
class UGameSettingValueDiscrete : public UGameSettingValue
{
public:

	static class UClass* StaticClass();
	static class UGameSettingValueDiscrete* GetDefaultObj();

	TArray<class FText> GetDiscreteOptions();
	int32 GetDiscreteOptionIndex();
	int32 GetDiscreteOptionDefaultIndex();
};

// 0x68 (0x1B8 - 0x150)
// Class GameSettings.GameSettingValueDiscreteDynamic
class UGameSettingValueDiscreteDynamic : public UGameSettingValueDiscrete
{
public:
	uint8                                        Pad_170D[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameSettingValueDiscreteDynamic* GetDefaultObj();

};

// 0x0 (0x1B8 - 0x1B8)
// Class GameSettings.GameSettingValueDiscreteDynamic_Bool
class UGameSettingValueDiscreteDynamic_Bool : public UGameSettingValueDiscreteDynamic
{
public:

	static class UClass* StaticClass();
	static class UGameSettingValueDiscreteDynamic_Bool* GetDefaultObj();

};

// 0x0 (0x1B8 - 0x1B8)
// Class GameSettings.GameSettingValueDiscreteDynamic_Number
class UGameSettingValueDiscreteDynamic_Number : public UGameSettingValueDiscreteDynamic
{
public:

	static class UClass* StaticClass();
	static class UGameSettingValueDiscreteDynamic_Number* GetDefaultObj();

};

// 0x0 (0x1B8 - 0x1B8)
// Class GameSettings.GameSettingValueDiscreteDynamic_Enum
class UGameSettingValueDiscreteDynamic_Enum : public UGameSettingValueDiscreteDynamic
{
public:

	static class UClass* StaticClass();
	static class UGameSettingValueDiscreteDynamic_Enum* GetDefaultObj();

};

// 0x0 (0x1B8 - 0x1B8)
// Class GameSettings.GameSettingValueDiscreteDynamic_Color
class UGameSettingValueDiscreteDynamic_Color : public UGameSettingValueDiscreteDynamic
{
public:

	static class UClass* StaticClass();
	static class UGameSettingValueDiscreteDynamic_Color* GetDefaultObj();

};

// 0x0 (0x1B8 - 0x1B8)
// Class GameSettings.GameSettingValueDiscreteDynamic_Vector2D
class UGameSettingValueDiscreteDynamic_Vector2D : public UGameSettingValueDiscreteDynamic
{
public:

	static class UClass* StaticClass();
	static class UGameSettingValueDiscreteDynamic_Vector2D* GetDefaultObj();

};

// 0x0 (0x150 - 0x150)
// Class GameSettings.GameSettingValueScalar
class UGameSettingValueScalar : public UGameSettingValue
{
public:

	static class UClass* StaticClass();
	static class UGameSettingValueScalar* GetDefaultObj();

};

// 0xC0 (0x210 - 0x150)
// Class GameSettings.GameSettingValueScalarDynamic
class UGameSettingValueScalarDynamic : public UGameSettingValueScalar
{
public:
	uint8                                        Pad_170E[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameSettingValueScalarDynamic* GetDefaultObj();

};

// 0x140 (0x170 - 0x30)
// Class GameSettings.GameSettingVisualData
class UGameSettingVisualData : public UDataAsset
{
public:
	TMap<TSubclassOf<class UGameSetting>, TSubclassOf<class UGameSettingListEntryBase>> EntryWidgetForClass;                               // 0x30(0x50)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<class FName, TSubclassOf<class UGameSettingListEntryBase>> EntryWidgetForName;                                // 0x80(0x50)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<TSubclassOf<class UGameSetting>, struct FGameSettingClassExtensions> ExtensionsForClasses;                              // 0xD0(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FGameSettingNameExtensions> ExtensionsForName;                                 // 0x120(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameSettingVisualData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameSettings.GameSettingActionInterface
class IGameSettingActionInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameSettingActionInterface* GetDefaultObj();

	bool ExecuteActionForSetting(const struct FGameplayTag& ActionTag, class UGameSetting* InSetting);
};

}


