#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CommonLoadingScreen.LoadingProcessInterface
class ILoadingProcessInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILoadingProcessInterface* GetDefaultObj();

	bool K2_ShouldShowLoadingScreen(class FString* OutDebugReason);
};

// 0x18 (0x40 - 0x28)
// Class CommonLoadingScreen.LoadingProcessTask
class ULoadingProcessTask : public UObject
{
public:
	uint8                                        Pad_1727[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoadingProcessTask* GetDefaultObj();

	void Unregister();
	void SetShowLoadingScreenReason(const class FString& InDebugReason);
	class ULoadingProcessTask* CreateLoadingScreenProcessTask(class UObject* WorldContextObject, const class FString& ShowLoadingScreenReason);
};

// 0x168 (0x198 - 0x30)
// Class CommonLoadingScreen.LoadingScreenManager
class ULoadingScreenManager : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1728[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnShowLoadingScreenAdditionalSecsTriggered;        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreLoadMapTriggered;                             // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostLoadMapTriggered;                            // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSeamlessTravelStart;                             // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadingScreenConsumedKeyEvent;                   // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadingBarStageChanged;                          // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadingBarEnabledChanged;                        // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1729[0xF0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoadingScreenManager* GetDefaultObj();

	void SetLoadingBarEnabled(bool Enabled);
	void RemoveLoadingScreenWatcher(class UObject* Object);
	void K2_SetLoadingScreenCustomText(class UWorld* WorldContextObject, const class FString& NewText);
	class FString GetLoadingScreenCustomText();
	enum class ELoadingBarStage GetLoadingBarStage();
	float GetLoadingBarProgress();
	bool GetLoadingBarEnabled();
	class FString GetDebugReasonForShowingOrHidingLoadingScreen();
	class FString GetCurrentLoadingMap();
	void AddLoadingScreenWatcher(class UObject* Object);
};

}


