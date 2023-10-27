#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameSettings.GameResponsivePanel
// (None)

class UClass* UGameResponsivePanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameResponsivePanel");

	return Clss;
}


// GameResponsivePanel GameSettings.Default__GameResponsivePanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameResponsivePanel* UGameResponsivePanel::GetDefaultObj()
{
	static class UGameResponsivePanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameResponsivePanel*>(UGameResponsivePanel::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameResponsivePanel.AddChildToGameResponsivePanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameResponsivePanelSlot*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameResponsivePanelSlot* UGameResponsivePanel::AddChildToGameResponsivePanel(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameResponsivePanel", "AddChildToGameResponsivePanel");

	Params::UGameResponsivePanel_AddChildToGameResponsivePanel_Params Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameSettings.GameResponsivePanelSlot
// (None)

class UClass* UGameResponsivePanelSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameResponsivePanelSlot");

	return Clss;
}


// GameResponsivePanelSlot GameSettings.Default__GameResponsivePanelSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameResponsivePanelSlot* UGameResponsivePanelSlot::GetDefaultObj()
{
	static class UGameResponsivePanelSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameResponsivePanelSlot*>(UGameResponsivePanelSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSetting
// (None)

class UClass* UGameSetting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSetting");

	return Clss;
}


// GameSetting GameSettings.Default__GameSetting
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSetting* UGameSetting::GetDefaultObj()
{
	static class UGameSetting* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSetting*>(UGameSetting::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSetting.GetWarningRichText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UGameSetting::GetWarningRichText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSetting", "GetWarningRichText");

	Params::UGameSetting_GetWarningRichText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSetting.GetTags
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameSetting::GetTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSetting", "GetTags");

	Params::UGameSetting_GetTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSetting.GetDynamicDetails
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UGameSetting::GetDynamicDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSetting", "GetDynamicDetails");

	Params::UGameSetting_GetDynamicDetails_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSetting.GetDisplayNameVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UGameSetting::GetDisplayNameVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSetting", "GetDisplayNameVisibility");

	Params::UGameSetting_GetDisplayNameVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSetting.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UGameSetting::GetDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSetting", "GetDisplayName");

	Params::UGameSetting_GetDisplayName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSetting.GetDevName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UGameSetting::GetDevName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSetting", "GetDevName");

	Params::UGameSetting_GetDevName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSetting.GetDescriptionRichText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UGameSetting::GetDescriptionRichText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSetting", "GetDescriptionRichText");

	Params::UGameSetting_GetDescriptionRichText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameSettings.GameSettingAction
// (None)

class UClass* UGameSettingAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingAction");

	return Clss;
}


// GameSettingAction GameSettings.Default__GameSettingAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingAction* UGameSettingAction::GetDefaultObj()
{
	static class UGameSettingAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingAction*>(UGameSettingAction::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingCollection
// (None)

class UClass* UGameSettingCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingCollection");

	return Clss;
}


// GameSettingCollection GameSettings.Default__GameSettingCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingCollection* UGameSettingCollection::GetDefaultObj()
{
	static class UGameSettingCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingCollection*>(UGameSettingCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingCollectionPage
// (None)

class UClass* UGameSettingCollectionPage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingCollectionPage");

	return Clss;
}


// GameSettingCollectionPage GameSettings.Default__GameSettingCollectionPage
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingCollectionPage* UGameSettingCollectionPage::GetDefaultObj()
{
	static class UGameSettingCollectionPage* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingCollectionPage*>(UGameSettingCollectionPage::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingDetailExtension
// (None)

class UClass* UGameSettingDetailExtension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingDetailExtension");

	return Clss;
}


// GameSettingDetailExtension GameSettings.Default__GameSettingDetailExtension
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingDetailExtension* UGameSettingDetailExtension::GetDefaultObj()
{
	static class UGameSettingDetailExtension* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingDetailExtension*>(UGameSettingDetailExtension::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSettingDetailExtension.OnSettingValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGameSetting*                InSetting                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameSettingDetailExtension::OnSettingValueChanged(class UGameSetting* InSetting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingDetailExtension", "OnSettingValueChanged");

	Params::UGameSettingDetailExtension_OnSettingValueChanged_Params Parms{};

	Parms.InSetting = InSetting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameSettings.GameSettingDetailExtension.OnSettingAssigned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGameSetting*                InSetting                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameSettingDetailExtension::OnSettingAssigned(class UGameSetting* InSetting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingDetailExtension", "OnSettingAssigned");

	Params::UGameSettingDetailExtension_OnSettingAssigned_Params Parms{};

	Parms.InSetting = InSetting;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GameSettings.GameSettingDetailView
// (None)

class UClass* UGameSettingDetailView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingDetailView");

	return Clss;
}


// GameSettingDetailView GameSettings.Default__GameSettingDetailView
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingDetailView* UGameSettingDetailView::GetDefaultObj()
{
	static class UGameSettingDetailView* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingDetailView*>(UGameSettingDetailView::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingListEntryBase
// (None)

class UClass* UGameSettingListEntryBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingListEntryBase");

	return Clss;
}


// GameSettingListEntryBase GameSettings.Default__GameSettingListEntryBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingListEntryBase* UGameSettingListEntryBase::GetDefaultObj()
{
	static class UGameSettingListEntryBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingListEntryBase*>(UGameSettingListEntryBase::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSettingListEntryBase.GetPrimaryGamepadFocusWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UGameSettingListEntryBase::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingListEntryBase", "GetPrimaryGamepadFocusWidget");

	Params::UGameSettingListEntryBase_GetPrimaryGamepadFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class GameSettings.GameSettingListEntry_Setting
// (None)

class UClass* UGameSettingListEntry_Setting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingListEntry_Setting");

	return Clss;
}


// GameSettingListEntry_Setting GameSettings.Default__GameSettingListEntry_Setting
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingListEntry_Setting* UGameSettingListEntry_Setting::GetDefaultObj()
{
	static class UGameSettingListEntry_Setting* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingListEntry_Setting*>(UGameSettingListEntry_Setting::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingListEntrySetting_Discrete
// (None)

class UClass* UGameSettingListEntrySetting_Discrete::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingListEntrySetting_Discrete");

	return Clss;
}


// GameSettingListEntrySetting_Discrete GameSettings.Default__GameSettingListEntrySetting_Discrete
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingListEntrySetting_Discrete* UGameSettingListEntrySetting_Discrete::GetDefaultObj()
{
	static class UGameSettingListEntrySetting_Discrete* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingListEntrySetting_Discrete*>(UGameSettingListEntrySetting_Discrete::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingListEntrySetting_Scalar
// (None)

class UClass* UGameSettingListEntrySetting_Scalar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingListEntrySetting_Scalar");

	return Clss;
}


// GameSettingListEntrySetting_Scalar GameSettings.Default__GameSettingListEntrySetting_Scalar
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingListEntrySetting_Scalar* UGameSettingListEntrySetting_Scalar::GetDefaultObj()
{
	static class UGameSettingListEntrySetting_Scalar* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingListEntrySetting_Scalar*>(UGameSettingListEntrySetting_Scalar::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSettingListEntrySetting_Scalar.OnValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameSettingListEntrySetting_Scalar::OnValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingListEntrySetting_Scalar", "OnValueChanged");

	Params::UGameSettingListEntrySetting_Scalar_OnValueChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameSettings.GameSettingListEntrySetting_Scalar.OnDefaultValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameSettingListEntrySetting_Scalar::OnDefaultValueChanged(float DefaultValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingListEntrySetting_Scalar", "OnDefaultValueChanged");

	Params::UGameSettingListEntrySetting_Scalar_OnDefaultValueChanged_Params Parms{};

	Parms.DefaultValue = DefaultValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameSettings.GameSettingListEntrySetting_Scalar.HandleSliderValueChanged
// (Final, Native, Protected)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameSettingListEntrySetting_Scalar::HandleSliderValueChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingListEntrySetting_Scalar", "HandleSliderValueChanged");

	Params::UGameSettingListEntrySetting_Scalar_HandleSliderValueChanged_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameSettings.GameSettingListEntrySetting_Scalar.HandleSliderCaptureEnded
// (Final, Native, Protected)
// Parameters:

void UGameSettingListEntrySetting_Scalar::HandleSliderCaptureEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingListEntrySetting_Scalar", "HandleSliderCaptureEnded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameSettings.GameSettingListEntrySetting_Action
// (None)

class UClass* UGameSettingListEntrySetting_Action::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingListEntrySetting_Action");

	return Clss;
}


// GameSettingListEntrySetting_Action GameSettings.Default__GameSettingListEntrySetting_Action
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingListEntrySetting_Action* UGameSettingListEntrySetting_Action::GetDefaultObj()
{
	static class UGameSettingListEntrySetting_Action* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingListEntrySetting_Action*>(UGameSettingListEntrySetting_Action::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSettingListEntrySetting_Action.OnSettingAssigned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGameSettingListEntrySetting_Action::OnSettingAssigned(class FText& ActionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingListEntrySetting_Action", "OnSettingAssigned");

	Params::UGameSettingListEntrySetting_Action_OnSettingAssigned_Params Parms{};

	Parms.ActionText = ActionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GameSettings.GameSettingListEntrySetting_Navigation
// (None)

class UClass* UGameSettingListEntrySetting_Navigation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingListEntrySetting_Navigation");

	return Clss;
}


// GameSettingListEntrySetting_Navigation GameSettings.Default__GameSettingListEntrySetting_Navigation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingListEntrySetting_Navigation* UGameSettingListEntrySetting_Navigation::GetDefaultObj()
{
	static class UGameSettingListEntrySetting_Navigation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingListEntrySetting_Navigation*>(UGameSettingListEntrySetting_Navigation::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSettingListEntrySetting_Navigation.OnSettingAssigned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGameSettingListEntrySetting_Navigation::OnSettingAssigned(class FText& ActionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingListEntrySetting_Navigation", "OnSettingAssigned");

	Params::UGameSettingListEntrySetting_Navigation_OnSettingAssigned_Params Parms{};

	Parms.ActionText = ActionText;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GameSettings.GameSettingListView
// (None)

class UClass* UGameSettingListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingListView");

	return Clss;
}


// GameSettingListView GameSettings.Default__GameSettingListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingListView* UGameSettingListView::GetDefaultObj()
{
	static class UGameSettingListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingListView*>(UGameSettingListView::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSettingListView.SetScrollbarThickness
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   NewScrollbarThickness                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameSettingListView::SetScrollbarThickness(struct FVector2D& NewScrollbarThickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingListView", "SetScrollbarThickness");

	Params::UGameSettingListView_SetScrollbarThickness_Params Parms{};

	Parms.NewScrollbarThickness = NewScrollbarThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameSettings.GameSettingListView.SetScrollbarPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMargin                     NewScrollbarPadding                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGameSettingListView::SetScrollbarPadding(struct FMargin& NewScrollbarPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingListView", "SetScrollbarPadding");

	Params::UGameSettingListView_SetScrollbarPadding_Params Parms{};

	Parms.NewScrollbarPadding = NewScrollbarPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameSettings.GameSettingListView.GetWidgetFromItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UGameSettingListView::GetWidgetFromItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingListView", "GetWidgetFromItem");

	Params::UGameSettingListView_GetWidgetFromItem_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameSettings.GameSettingPanel
// (None)

class UClass* UGameSettingPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingPanel");

	return Clss;
}


// GameSettingPanel GameSettings.Default__GameSettingPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingPanel* UGameSettingPanel::GetDefaultObj()
{
	static class UGameSettingPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingPanel*>(UGameSettingPanel::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingPressAnyKey
// (None)

class UClass* UGameSettingPressAnyKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingPressAnyKey");

	return Clss;
}


// GameSettingPressAnyKey GameSettings.Default__GameSettingPressAnyKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingPressAnyKey* UGameSettingPressAnyKey::GetDefaultObj()
{
	static class UGameSettingPressAnyKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingPressAnyKey*>(UGameSettingPressAnyKey::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingRegistry
// (None)

class UClass* UGameSettingRegistry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingRegistry");

	return Clss;
}


// GameSettingRegistry GameSettings.Default__GameSettingRegistry
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingRegistry* UGameSettingRegistry::GetDefaultObj()
{
	static class UGameSettingRegistry* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingRegistry*>(UGameSettingRegistry::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingRotator
// (None)

class UClass* UGameSettingRotator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingRotator");

	return Clss;
}


// GameSettingRotator GameSettings.Default__GameSettingRotator
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingRotator* UGameSettingRotator::GetDefaultObj()
{
	static class UGameSettingRotator* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingRotator*>(UGameSettingRotator::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSettingRotator.BP_OnDefaultOptionSpecified
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              DefaultOptionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameSettingRotator::BP_OnDefaultOptionSpecified(int32 DefaultOptionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingRotator", "BP_OnDefaultOptionSpecified");

	Params::UGameSettingRotator_BP_OnDefaultOptionSpecified_Params Parms{};

	Parms.DefaultOptionIndex = DefaultOptionIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GameSettings.GameSettingScreen
// (None)

class UClass* UGameSettingScreen::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingScreen");

	return Clss;
}


// GameSettingScreen GameSettings.Default__GameSettingScreen
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingScreen* UGameSettingScreen::GetDefaultObj()
{
	static class UGameSettingScreen* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingScreen*>(UGameSettingScreen::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSettingScreen.OnSettingsDirtyStateChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSettingsDirty                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameSettingScreen::OnSettingsDirtyStateChanged(bool bSettingsDirty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingScreen", "OnSettingsDirtyStateChanged");

	Params::UGameSettingScreen_OnSettingsDirtyStateChanged_Params Parms{};

	Parms.bSettingsDirty = bSettingsDirty;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameSettings.GameSettingScreen.NavigateToSettings
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                SettingDevNames                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UGameSettingScreen::NavigateToSettings(TArray<class FName>& SettingDevNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingScreen", "NavigateToSettings");

	Params::UGameSettingScreen_NavigateToSettings_Params Parms{};

	Parms.SettingDevNames = SettingDevNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameSettings.GameSettingScreen.NavigateToSetting
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        SettingDevName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameSettingScreen::NavigateToSetting(class FName SettingDevName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingScreen", "NavigateToSetting");

	Params::UGameSettingScreen_NavigateToSetting_Params Parms{};

	Parms.SettingDevName = SettingDevName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GameSettings.GameSettingScreen.HaveSettingsBeenChanged
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameSettingScreen::HaveSettingsBeenChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingScreen", "HaveSettingsBeenChanged");

	Params::UGameSettingScreen_HaveSettingsBeenChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSettingScreen.GetSettingCollection
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SettingDevName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HasAnySettings                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSettingCollection*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameSettingCollection* UGameSettingScreen::GetSettingCollection(class FName SettingDevName, bool* HasAnySettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingScreen", "GetSettingCollection");

	Params::UGameSettingScreen_GetSettingCollection_Params Parms{};

	Parms.SettingDevName = SettingDevName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (HasAnySettings != nullptr)
		*HasAnySettings = Parms.HasAnySettings;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSettingScreen.CancelChanges
// (Native, Protected, BlueprintCallable)
// Parameters:

void UGameSettingScreen::CancelChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingScreen", "CancelChanges");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GameSettings.GameSettingScreen.AttemptToPopNavigation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameSettingScreen::AttemptToPopNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingScreen", "AttemptToPopNavigation");

	Params::UGameSettingScreen_AttemptToPopNavigation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSettingScreen.ApplyChanges
// (Native, Protected, BlueprintCallable)
// Parameters:

void UGameSettingScreen::ApplyChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingScreen", "ApplyChanges");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameSettings.GameSettingValue
// (None)

class UClass* UGameSettingValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingValue");

	return Clss;
}


// GameSettingValue GameSettings.Default__GameSettingValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingValue* UGameSettingValue::GetDefaultObj()
{
	static class UGameSettingValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingValue*>(UGameSettingValue::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingValueDiscrete
// (None)

class UClass* UGameSettingValueDiscrete::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingValueDiscrete");

	return Clss;
}


// GameSettingValueDiscrete GameSettings.Default__GameSettingValueDiscrete
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingValueDiscrete* UGameSettingValueDiscrete::GetDefaultObj()
{
	static class UGameSettingValueDiscrete* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingValueDiscrete*>(UGameSettingValueDiscrete::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSettingValueDiscrete.GetDiscreteOptions
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FText>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FText> UGameSettingValueDiscrete::GetDiscreteOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingValueDiscrete", "GetDiscreteOptions");

	Params::UGameSettingValueDiscrete_GetDiscreteOptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSettingValueDiscrete.GetDiscreteOptionIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGameSettingValueDiscrete::GetDiscreteOptionIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingValueDiscrete", "GetDiscreteOptionIndex");

	Params::UGameSettingValueDiscrete_GetDiscreteOptionIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameSettings.GameSettingValueDiscrete.GetDiscreteOptionDefaultIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGameSettingValueDiscrete::GetDiscreteOptionDefaultIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingValueDiscrete", "GetDiscreteOptionDefaultIndex");

	Params::UGameSettingValueDiscrete_GetDiscreteOptionDefaultIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GameSettings.GameSettingValueDiscreteDynamic
// (None)

class UClass* UGameSettingValueDiscreteDynamic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingValueDiscreteDynamic");

	return Clss;
}


// GameSettingValueDiscreteDynamic GameSettings.Default__GameSettingValueDiscreteDynamic
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingValueDiscreteDynamic* UGameSettingValueDiscreteDynamic::GetDefaultObj()
{
	static class UGameSettingValueDiscreteDynamic* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingValueDiscreteDynamic*>(UGameSettingValueDiscreteDynamic::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingValueDiscreteDynamic_Bool
// (None)

class UClass* UGameSettingValueDiscreteDynamic_Bool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingValueDiscreteDynamic_Bool");

	return Clss;
}


// GameSettingValueDiscreteDynamic_Bool GameSettings.Default__GameSettingValueDiscreteDynamic_Bool
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingValueDiscreteDynamic_Bool* UGameSettingValueDiscreteDynamic_Bool::GetDefaultObj()
{
	static class UGameSettingValueDiscreteDynamic_Bool* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingValueDiscreteDynamic_Bool*>(UGameSettingValueDiscreteDynamic_Bool::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingValueDiscreteDynamic_Number
// (None)

class UClass* UGameSettingValueDiscreteDynamic_Number::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingValueDiscreteDynamic_Number");

	return Clss;
}


// GameSettingValueDiscreteDynamic_Number GameSettings.Default__GameSettingValueDiscreteDynamic_Number
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingValueDiscreteDynamic_Number* UGameSettingValueDiscreteDynamic_Number::GetDefaultObj()
{
	static class UGameSettingValueDiscreteDynamic_Number* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingValueDiscreteDynamic_Number*>(UGameSettingValueDiscreteDynamic_Number::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingValueDiscreteDynamic_Enum
// (None)

class UClass* UGameSettingValueDiscreteDynamic_Enum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingValueDiscreteDynamic_Enum");

	return Clss;
}


// GameSettingValueDiscreteDynamic_Enum GameSettings.Default__GameSettingValueDiscreteDynamic_Enum
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingValueDiscreteDynamic_Enum* UGameSettingValueDiscreteDynamic_Enum::GetDefaultObj()
{
	static class UGameSettingValueDiscreteDynamic_Enum* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingValueDiscreteDynamic_Enum*>(UGameSettingValueDiscreteDynamic_Enum::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingValueDiscreteDynamic_Color
// (None)

class UClass* UGameSettingValueDiscreteDynamic_Color::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingValueDiscreteDynamic_Color");

	return Clss;
}


// GameSettingValueDiscreteDynamic_Color GameSettings.Default__GameSettingValueDiscreteDynamic_Color
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingValueDiscreteDynamic_Color* UGameSettingValueDiscreteDynamic_Color::GetDefaultObj()
{
	static class UGameSettingValueDiscreteDynamic_Color* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingValueDiscreteDynamic_Color*>(UGameSettingValueDiscreteDynamic_Color::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingValueDiscreteDynamic_Vector2D
// (None)

class UClass* UGameSettingValueDiscreteDynamic_Vector2D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingValueDiscreteDynamic_Vector2D");

	return Clss;
}


// GameSettingValueDiscreteDynamic_Vector2D GameSettings.Default__GameSettingValueDiscreteDynamic_Vector2D
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingValueDiscreteDynamic_Vector2D* UGameSettingValueDiscreteDynamic_Vector2D::GetDefaultObj()
{
	static class UGameSettingValueDiscreteDynamic_Vector2D* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingValueDiscreteDynamic_Vector2D*>(UGameSettingValueDiscreteDynamic_Vector2D::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingValueScalar
// (None)

class UClass* UGameSettingValueScalar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingValueScalar");

	return Clss;
}


// GameSettingValueScalar GameSettings.Default__GameSettingValueScalar
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingValueScalar* UGameSettingValueScalar::GetDefaultObj()
{
	static class UGameSettingValueScalar* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingValueScalar*>(UGameSettingValueScalar::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingValueScalarDynamic
// (None)

class UClass* UGameSettingValueScalarDynamic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingValueScalarDynamic");

	return Clss;
}


// GameSettingValueScalarDynamic GameSettings.Default__GameSettingValueScalarDynamic
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingValueScalarDynamic* UGameSettingValueScalarDynamic::GetDefaultObj()
{
	static class UGameSettingValueScalarDynamic* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingValueScalarDynamic*>(UGameSettingValueScalarDynamic::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingVisualData
// (None)

class UClass* UGameSettingVisualData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingVisualData");

	return Clss;
}


// GameSettingVisualData GameSettings.Default__GameSettingVisualData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameSettingVisualData* UGameSettingVisualData::GetDefaultObj()
{
	static class UGameSettingVisualData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameSettingVisualData*>(UGameSettingVisualData::StaticClass()->DefaultObject);

	return Default;
}


// Class GameSettings.GameSettingActionInterface
// (None)

class UClass* IGameSettingActionInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameSettingActionInterface");

	return Clss;
}


// GameSettingActionInterface GameSettings.Default__GameSettingActionInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameSettingActionInterface* IGameSettingActionInterface::GetDefaultObj()
{
	static class IGameSettingActionInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameSettingActionInterface*>(IGameSettingActionInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function GameSettings.GameSettingActionInterface.ExecuteActionForSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameSetting*                InSetting                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGameSettingActionInterface::ExecuteActionForSetting(const struct FGameplayTag& ActionTag, class UGameSetting* InSetting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameSettingActionInterface", "ExecuteActionForSetting");

	Params::IGameSettingActionInterface_ExecuteActionForSetting_Params Parms{};

	Parms.ActionTag = ActionTag;
	Parms.InSetting = InSetting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


