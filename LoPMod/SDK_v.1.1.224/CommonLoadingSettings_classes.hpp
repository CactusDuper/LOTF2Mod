#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x190 - 0x38)
// Class CommonLoadingSettings.CommonLoadingScreenSettings
class UCommonLoadingScreenSettings : public UDeveloperSettings
{
public:
	struct FSoftClassPath                        LoadingScreenWidget;                               // 0x38(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoadingScreenZOrder;                               // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplashScreenType                 SplashScreenType;                                  // 0x5C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceTickLoadingScreenEvenInEditor;               // 0x5D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA5[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShowLoadingScreenAdditionalSecs;                   // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShowSplashScreenAdditionalSecs;                    // 0x64(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoadingScreenHeartbeatHangDuration;                // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LogLoadingScreenHeartbeatInterval;                 // 0x6C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        BlockedMapNames;                                   // 0x70(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       SplashScreenImage;                                 // 0x80(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretch                          SplashScreenStretch;                               // 0xA0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretchDirection                 SplashScreenStretchDirection;                      // 0xA1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SplashScreenLoadingText;                           // 0xA8(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        SplashScreenLoadingFont;                           // 0xC0(0x58)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLogLoadingScreenReasonEveryFrame;                 // 0x118(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceLoadingScreenVisible;                        // 0x119(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLoadingScreenAdditionalSecsEvenInEditor;      // 0x11A(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAB[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLoadingBarStageInfo                  LoadingBarStageSettings[0x5];                      // 0x11C(0x50)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AutoAdvanceLoadingProgressTimer;                   // 0x16C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHexLoadingScreenStreamingSettings    StreamingSettingsWhileShowingLoadingScreen;        // 0x170(0x20)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonLoadingScreenSettings* GetDefaultObj();

};

}


