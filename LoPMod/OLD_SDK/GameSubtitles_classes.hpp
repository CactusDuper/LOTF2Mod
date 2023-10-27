#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class GameSubtitles.MediaSubtitlesPlayer
class UMediaSubtitlesPlayer : public UObject
{
public:
	uint8                                        Pad_1AD4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlays*                             SourceSubtitles;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD5[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMediaSubtitlesPlayer* GetDefaultObj();

	void Stop();
	void SetSubtitles(class UOverlays* Subtitles);
	void Play();
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
};

// 0x450 (0x5A0 - 0x150)
// Class GameSubtitles.SubtitleDisplay
class USubtitleDisplay : public UWidget
{
public:
	struct FSubtitleFormat                       Format;                                            // 0x150(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USubtitleDisplayOptions*               Options;                                           // 0x158(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WrapTextAt;                                        // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreviewMode;                                      // 0x164(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PreviewText;                                       // 0x168(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       GeneratedStyle;                                    // 0x180(0x340)(Transient, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           GeneratedBackgroundBorder;                         // 0x4C0(0xD0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AD8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubtitleDisplay* GetDefaultObj();

	bool HasSubtitles();
};

// 0x180 (0x1B0 - 0x30)
// Class GameSubtitles.SubtitleDisplayOptions
class USubtitleDisplayOptions : public UDataAsset
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x30(0x58)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisplayTextSizes[0x5];                             // 0x88(0x14)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DisplayTextColors[0x2];                            // 0x9C(0x20)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayBorderSize[0x3];                            // 0xBC(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayBackgroundOpacity[0x5];                     // 0xC8(0x14)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundBrush;                                   // 0xE0(0xD0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubtitleDisplayOptions* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class GameSubtitles.SubtitleDisplaySubsystem
class USubtitleDisplaySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1ADA[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubtitleFormat                       SubtitleFormat;                                    // 0x48(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ADB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubtitleDisplaySubsystem* GetDefaultObj();

};

}


