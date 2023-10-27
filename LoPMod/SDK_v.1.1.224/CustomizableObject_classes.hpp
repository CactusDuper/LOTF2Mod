#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CustomizableObject.CustomizableInstanceLODManagementBase
class UCustomizableInstanceLODManagementBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCustomizableInstanceLODManagementBase* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class CustomizableObject.CustomizableInstanceLODManagement
class UCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{
public:
	uint8                                        Pad_10CC[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomizableInstanceLODManagement* GetDefaultObj();

};

// 0x2D8 (0x300 - 0x28)
// Class CustomizableObject.CustomizableInstancePrivateData
class UCustomizableInstancePrivateData : public UObject
{
public:
	uint8                                        Pad_10D4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGeneratedMaterial>            GeneratedMaterials;                                // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGeneratedMesh>                GeneratedMeshes;                                   // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGeneratedTexture>             GeneratedTextures;                                 // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D8[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FParameterDecorations>         ParameterDecorations;                              // 0xB0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D9[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, TWeakObjectPtr<class UTexture2D>> TextureReuseCache;                                 // 0xD0(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DA[0xF0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            ReferencedMaterials;                               // 0x210(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DB[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPhysicsAsset*>                 PhysicsAssetsToMerge;                              // 0x2C0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPhysicsAsset*>                 ClothingPhysicsAssets;                             // 0x2E0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DD[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomizableInstancePrivateData* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class CustomizableObject.MutableMaskOutCache
class UMutableMaskOutCache : public UObject
{
public:
	TMap<class FString, class FString>           Materials;                                         // 0x28(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, struct FMaskOutTexture>  Textures;                                          // 0x78(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMutableMaskOutCache* GetDefaultObj();

};

// 0x328 (0x350 - 0x28)
// Class CustomizableObject.CustomizableObject
class UCustomizableObject : public UObject
{
public:
	class USkeletalMesh*                         ReferenceSkeletalMesh;                             // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           ReferenceStaticMesh;                               // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> ReferencedMaterials;                               // 0x38(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class USkeleton>>      ReferencedSkeletons;                               // 0x48(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FMutableModelImageProperties>  ImageProperties;                                   // 0x58(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FMorphTargetInfo>              ContributingMorphTargetsInfo;                      // 0x68(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FMorphTargetVertexData>        MorphTargetReconstructionData;                     // 0x78(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectClothConfigData> ClothSharedConfigsData;                            // 0x88(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectClothingAssetData> ContributingClothingAssetsData;                    // 0x98(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectMeshToMeshVertData> ClothMeshToMeshVertData;                           // 0xA8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableGenerateClothingDataConfig> GenerateClothingDataConfig;                        // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMutableModelParameterProperties> ParameterProperties;                               // 0xC8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_112F[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FParameterUIData> ParameterUIDataMap;                                // 0x128(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, struct FParameterUIData> StateUIDataMap;                                    // 0x178(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, TSoftObjectPtr<class UPhysicsAsset>> PhysicsAssetsMap;                                  // 0x1C8(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMutableMaskOutCache>   MaskOutCache;                                      // 0x218(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint64, struct FMutableStreamableBlock> HashToStreamableBlock;                             // 0x248(0x50)(NativeAccessSpecifierPublic)
	TArray<class FString>                        CustomizableObjectClassTags;                       // 0x298(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        PopulationClassTags;                               // 0x2A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FParameterTags>   CustomizableObjectParametersTags;                  // 0x2B8(0x50)(NativeAccessSpecifierPublic)
	class UMutableMaskOutCache*                  MaskOutCache_HardRef;                              // 0x308(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 Identifier;                                        // 0x310(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_113C[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomizableObject* GetDefaultObj();

	void UnloadMaskOutCache();
	void LoadMaskOutCache();
	bool IsCompiled();
	struct FParameterUIData GetStateUIMetadataFromIndex(int32 StateIndex);
	struct FParameterUIData GetStateUIMetadata(const class FString& StateName);
	class FString GetStateParameterName(const class FString& StateName, int32 ParameterIndex);
	int32 GetStateParameterCount(const class FString& StateName);
	class FString GetStateName(int32 StateIndex);
	int32 GetStateCount();
	struct FParameterUIData GetParameterUIMetadataFromIndex(int32 ParamIndex);
	struct FParameterUIData GetParameterUIMetadata(const class FString& ParamName);
	enum class EMutableParameterType GetParameterTypeByName(const class FString& Name);
	enum class EMutableParameterType GetParameterType(int32 ParamIndex);
	class FString GetParameterName(int32 ParamIndex);
	int32 GetParameterDescriptionCount(const class FString& ParamName);
	int32 GetParameterCount();
	int32 GetIntParameterNumOptions(int32 ParamIndex);
	class FString GetIntParameterAvailableOption(int32 ParamIndex, int32 K);
	int32 FindParameter(const class FString& Name);
	class UCustomizableObjectInstance* CreateInstance();
};

// 0x1A0 (0x1C8 - 0x28)
// Class CustomizableObject.CustomizableObjectInstance
class UCustomizableObjectInstance : public UObject
{
public:
	class UCustomizableObject*                   CustomizableObject;                                // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x30(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                    // 0x38(0x10)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                     // 0x48(0x10)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                   // 0x58(0x10)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;                                 // 0x68(0x10)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                  // 0x78(0x10)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                               // 0x88(0x10)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bBuildParameterDecorations;                        // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1227[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            UpdatedDelegate;                                   // 0xA0(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1229[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SkeletalMeshStatus;                                // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122B[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomizableInstancePrivateData*      PrivateData;                                       // 0x1B8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_122C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomizableObjectInstance* GetDefaultObj();

	void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);
	void SetVectorParameterSelectedOption(const class FString& VectorParamName, const struct FLinearColor& VectorValue);
	void SetRandomValues();
	void SetProjectorValue(const class FString& ProjectorParamName, struct FVector& Pos, struct FVector& Direction, struct FVector& Up, struct FVector& Scale, float Angle, int32 RangeIndex);
	void SetIntParameterSelectedOption(const class FString& ParamName, const class FString& SelectedOptionName, int32 RangeIndex);
	void SetFloatParameterSelectedOption(const class FString& FloatParamName, float FloatValue, int32 RangeIndex);
	void SetCurrentState(const class FString& StateName);
	void SetColorParameterSelectedOption(const class FString& ColorParamName, const struct FLinearColor& ColorValue);
	void SetBoolParameterSelectedOption(const class FString& BoolParamName, bool BoolValue);
	int32 RemoveValueFromProjectorRange(const class FString& ParamName);
	int32 RemoveValueFromIntRange(const class FString& ParamName);
	int32 RemoveValueFromFloatRange(const class FString& ParamName);
	bool IsParamMultidimensional(const class FString& ParamName);
	bool IsParameterRelevant(const class FString& ParamName);
	void GetProjectorValue(const class FString& ProjectorParamName, struct FVector* Pos, struct FVector* Direction, struct FVector* Up, struct FVector* Scale, float* Angle, enum class ECustomizableObjectProjectorType* Type, int32 RangeIndex);
	struct FVector GetProjectorUp(const class FString& ParamName, int32 RangeIndex);
	struct FVector GetProjectorScale(const class FString& ParamName, int32 RangeIndex);
	struct FVector GetProjectorPosition(const class FString& ParamName, int32 RangeIndex);
	enum class ECustomizableObjectProjectorType GetProjectorParameterType(const class FString& ParamName, int32 RangeIndex);
	struct FVector GetProjectorDirection(const class FString& ParamName, int32 RangeIndex);
	float GetProjectorAngle(const class FString& ParamName, int32 RangeIndex);
	class UTexture2D* GetParameterDescription(const class FString& ParamName, int32 DescIndex);
	class FString GetIntParameterSelectedOption(const class FString& ParamName, int32 RangeIndex);
	float GetFloatParameterSelectedOption(const class FString& FloatParamName, int32 RangeIndex);
	class FString GetCurrentState();
	struct FLinearColor GetColorParameterSelectedOption(const class FString& ColorParamName);
	bool GetBoolParameterSelectedOption(const class FString& BoolParamName);
	int32 FindVectorParameterNameIndex(const class FString& ParamName);
	int32 FindProjectorParameterNameIndex(const class FString& ParamName);
	int32 FindIntParameterNameIndex(const class FString& ParamName);
	int32 FindFloatParameterNameIndex(const class FString& ParamName);
	int32 FindBoolParameterNameIndex(const class FString& ParamName);
	int32 CurrentParamRange(const class FString& ParamName);
	class UCustomizableObjectInstance* CloneStatic(class UObject* Outer);
	class UCustomizableObjectInstance* Clone();
	int32 AddValueToProjectorRange(const class FString& ParamName);
	int32 AddValueToIntRange(const class FString& ParamName);
	int32 AddValueToFloatRange(const class FString& ParamName);
};

// 0x0 (0x28 - 0x28)
// Class CustomizableObject.MutableTextureMipDataProviderFactory
class UMutableTextureMipDataProviderFactory : public UTextureMipDataProviderFactory
{
public:

	static class UClass* StaticClass();
	static class UMutableTextureMipDataProviderFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CustomizableObject.CustomizableSystemImageProvider
class UCustomizableSystemImageProvider : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCustomizableSystemImageProvider* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class CustomizableObject.CustomizableObjectImageProviderArray
class UCustomizableObjectImageProviderArray : public UCustomizableSystemImageProvider
{
public:
	TArray<class UTexture2D*>                    Textures;                                          // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_123E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomizableObjectImageProviderArray* GetDefaultObj();

};

// 0x148 (0x170 - 0x28)
// Class CustomizableObject.CustomizableObjectSystem
class UCustomizableObjectSystem : public UObject
{
public:
	TArray<struct FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh;                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UCustomizableObjectImageProviderArray* PreviewExternalImageProvider;                      // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1250[0x100];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture2D*>                    ProtectedCachedTextures;                           // 0x140(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1251[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement;                      // 0x160(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement;                      // 0x168(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCustomizableObjectSystem* GetDefaultObj();

	void SetReleaseMutableTexturesImmediately(bool bReleaseTextures);
	int32 GetTotalInstances();
	int32 GetTextureMemoryUsed();
	class FString GetPluginVersion();
	int32 GetNumPendingInstances();
	int32 GetNumInstances();
	class UCustomizableObjectSystem* GetInstance();
	int32 GetAverageBuildTime();
	bool AreEnginePatchesPresent();
};

// 0x20 (0x2D0 - 0x2B0)
// Class CustomizableObject.CustomizableSkeletalComponent
class UCustomizableSkeletalComponent : public USceneComponent
{
public:
	uint8                                        Pad_1254[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkippedLastRenderTime;                             // 0x2B4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizableObjectInstance*           CustomizableObjectInstance;                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1256[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomizableSkeletalComponent* GetDefaultObj();

	void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);
};

// 0x8 (0x328 - 0x320)
// Class CustomizableObject.CustomizableSkeletalMeshActor
class ACustomizableSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	class UCustomizableSkeletalComponent*        CustomizableSkeletalComponent;                     // 0x320(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ACustomizableSkeletalMeshActor* GetDefaultObj();

};

}


