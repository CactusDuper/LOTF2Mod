#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3B8 (0x3B8 - 0x0)
// ScriptStruct GameSettings.GameSettingFilterState
struct FGameSettingFilterState
{
public:
	bool                                         bIncludeDisabled;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeHidden;                                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeResetable;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeNestedPages;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5C[0x394];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameSetting*>                  SettingRootList;                                   // 0x398(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UGameSetting*>                  SettingAllowList;                                  // 0x3A8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameSettings.GameSettingClassExtensions
struct FGameSettingClassExtensions
{
public:
	TArray<TSoftClassPtr<class UGameSettingDetailExtension>> Extensions;                                        // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameSettings.GameSettingNameExtensions
struct FGameSettingNameExtensions
{
public:
	bool                                         bIncludeClassDefaultExtensions;                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UGameSettingDetailExtension>> Extensions;                                        // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

}


