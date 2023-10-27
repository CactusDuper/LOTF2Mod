#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class RMAMirrorAnimation.RMAMirrorAnimationMirrorTable
class URMAMirrorAnimationMirrorTable : public UObject
{
public:
	class USkeleton*                             Skeleton;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRMAMirrorAnimationBoneKeyword> BoneKeyword;                                       // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRMAMirrorAnimationSingleBoneConfig> SingleBoneConfig;                                  // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRMAMirrorAnimationDoubleBoneConfig> DoubleBoneConfig;                                  // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERMAMirrorAnimationAxis           ComponentRightAxis;                                // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERMAMirrorAnimationAxisWithNull   LocationMirrorAxis;                                // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERMAMirrorAnimationAxisWithNull   RotationMirrorAxis;                                // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MirrorLocationData;                                // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FileVersion;                                       // 0x64(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1603[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URMAMirrorAnimationMirrorTable* GetDefaultObj();

	struct FQuat4f MirrorRotationToOtherPose(struct FQuat4f& SourceRotation, struct FQuat4f& SourceRefRotation, struct FQuat4f& TargetRefRotation, struct FRMAMirrorAnimationDoubleBoneConfig& BoneConfig);
	struct FQuat4f MirrorRotation(struct FQuat4f& Rotation, struct FQuat4f& RefRotation, struct FRMAMirrorAnimationSingleBoneConfig& BoneConfig);
	struct FVector MirrorLocationToOtherPose(struct FVector& SourceLocation, struct FVector& SourceRefLocation, struct FQuat4f& SourceRefRotation, struct FVector& TargetRefLocation, struct FQuat4f& TargetRefRotation, struct FRMAMirrorAnimationDoubleBoneConfig& BoneConfig);
	struct FVector MirrorLocation(struct FVector& Location, struct FVector& RefLocation, struct FQuat4f& RefRotation, struct FRMAMirrorAnimationSingleBoneConfig& BoneConfig);
	bool MirrorAnimations();
	class FName GetFileVersion();
	TArray<class UAnimSequence*> GetAnimSelection();
	bool GenerateBoneConfig();
};

// 0x0 (0x28 - 0x28)
// Class RMAMirrorAnimation.RMAMirrorAnimationFunctionLibrary
class URMAMirrorAnimationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URMAMirrorAnimationFunctionLibrary* GetDefaultObj();

	void SyncBrowserToObjects(TArray<class FString>& AssetPaths);
	bool SetUserPreference(const class FString& Key, const class FString& NewValue);
	bool SaveLoadedAsset(class UObject* AssetToSave);
	class FName GetVersion();
	class FString GetUserPreference(const class FString& Key, bool* Successful);
	class FString GetPathNameForLoadedAsset(class UObject* LoadedAsset);
};

}


