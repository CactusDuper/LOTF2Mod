#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERMAMirrorAnimationAxis : uint8
{
	AxisX                          = 0,
	AxisY                          = 1,
	AxisZ                          = 2,
	ERMAMirrorAnimationAxis_MAX    = 3,
};

enum class ERMAMirrorAnimationAxisWithNull : uint8
{
	AxisNull                       = 0,
	AxisX                          = 1,
	AxisY                          = 2,
	AxisZ                          = 3,
	ERMAMirrorAnimationAxisWithNull_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x30 - 0x10)
// ScriptStruct RMAMirrorAnimation.RMAMirrorAnimationAnimNodeMirrorAnimation
struct FRMAMirrorAnimationAnimNodeMirrorAnimation : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URMAMirrorAnimationMirrorTable*        MirrorTable;                                       // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RMAMirrorAnimation.RMAMirrorAnimationBoneKeyword
struct FRMAMirrorAnimationBoneKeyword
{
public:
	class FString                                KeywordA;                                          // 0x0(0x10)(Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeywordB;                                          // 0x10(0x10)(Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct RMAMirrorAnimation.RMAMirrorAnimationSingleBoneConfig
struct FRMAMirrorAnimationSingleBoneConfig
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERMAMirrorAnimationAxis           MirrorAxis;                                        // 0x8(0x1)(Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A18[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct RMAMirrorAnimation.RMAMirrorAnimationDoubleBoneConfig
struct FRMAMirrorAnimationDoubleBoneConfig
{
public:
	class FName                                  BoneAName;                                         // 0x0(0x8)(Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneBName;                                         // 0x8(0x8)(Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERMAMirrorAnimationAxisWithNull   LocationMirrorAxis;                                // 0x10(0x1)(Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERMAMirrorAnimationAxisWithNull   RotationMirrorAxis;                                // 0x11(0x1)(Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1B[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


