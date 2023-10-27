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

// 0x60 (0x60 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.MirrorRotationToOtherPose
struct URMAMirrorAnimationMirrorTable_MirrorRotationToOtherPose_Params
{
public:
	struct FQuat4f                               SourceRotation;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat4f                               SourceRefRotation;                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat4f                               TargetRefRotation;                                 // 0x20(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRMAMirrorAnimationDoubleBoneConfig   BoneConfig;                                        // 0x30(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EB[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat4f                               ReturnValue;                                       // 0x50(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.MirrorRotation
struct URMAMirrorAnimationMirrorTable_MirrorRotation_Params
{
public:
	struct FQuat4f                               Rotation;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat4f                               RefRotation;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRMAMirrorAnimationSingleBoneConfig   BoneConfig;                                        // 0x20(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat4f                               ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.MirrorLocationToOtherPose
struct URMAMirrorAnimationMirrorTable_MirrorLocationToOtherPose_Params
{
public:
	struct FVector                               SourceLocation;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceRefLocation;                                 // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat4f                               SourceRefRotation;                                 // 0x30(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetRefLocation;                                 // 0x40(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat4f                               TargetRefRotation;                                 // 0x60(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRMAMirrorAnimationDoubleBoneConfig   BoneConfig;                                        // 0x70(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x88(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.MirrorLocation
struct URMAMirrorAnimationMirrorTable_MirrorLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RefLocation;                                       // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat4f                               RefRotation;                                       // 0x30(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRMAMirrorAnimationSingleBoneConfig   BoneConfig;                                        // 0x40(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x50(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.MirrorAnimations
struct URMAMirrorAnimationMirrorTable_MirrorAnimations_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.GetFileVersion
struct URMAMirrorAnimationMirrorTable_GetFileVersion_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.GetAnimSelection
struct URMAMirrorAnimationMirrorTable_GetAnimSelection_Params
{
public:
	TArray<class UAnimSequence*>                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationMirrorTable.GenerateBoneConfig
struct URMAMirrorAnimationMirrorTable_GenerateBoneConfig_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.SyncBrowserToObjects
struct URMAMirrorAnimationFunctionLibrary_SyncBrowserToObjects_Params
{
public:
	TArray<class FString>                        AssetPaths;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.SetUserPreference
struct URMAMirrorAnimationFunctionLibrary_SetUserPreference_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NewValue;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1615[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.SaveLoadedAsset
struct URMAMirrorAnimationFunctionLibrary_SaveLoadedAsset_Params
{
public:
	class UObject*                               AssetToSave;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1618[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.GetVersion
struct URMAMirrorAnimationFunctionLibrary_GetVersion_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.GetUserPreference
struct URMAMirrorAnimationFunctionLibrary_GetUserPreference_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Successful;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary.GetPathNameForLoadedAsset
struct URMAMirrorAnimationFunctionLibrary_GetPathNameForLoadedAsset_Params
{
public:
	class UObject*                               LoadedAsset;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


