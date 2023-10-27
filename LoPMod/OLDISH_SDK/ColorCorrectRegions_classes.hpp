#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3B8 (0x658 - 0x2A0)
// Class ColorCorrectRegions.ColorCorrectRegion
class AColorCorrectRegion : public AActor
{
public:
	enum class EColorCorrectRegionsType          Type;                                              // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority;                                          // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Inner;                                             // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Outer;                                             // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Falloff;                                           // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Invert;                                            // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EColorCorrectRegionTemperatureType TemperatureType;                                   // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temperature;                                       // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tint;                                              // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCA[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColorGradingSettings                 ColorGradingSettings;                              // 0x2D0(0x290)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePerActorCC;                                 // 0x561(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EColorCorrectRegionStencilType    PerActorColorCorrection;                           // 0x562(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCB[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<TSoftObjectPtr<class AActor>>           AffectedActors;                                    // 0x568(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCC[0xA0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AColorCorrectRegion* GetDefaultObj();

};

// 0x18 (0x670 - 0x658)
// Class ColorCorrectRegions.ColorCorrectionRegion
class AColorCorrectionRegion : public AColorCorrectRegion
{
public:
	TArray<class UStaticMeshComponent*>          MeshComponents;                                    // 0x658(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCD[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AColorCorrectionRegion* GetDefaultObj();

};

// 0x70 (0xA0 - 0x30)
// Class ColorCorrectRegions.ColorCorrectRegionsSubsystem
class UColorCorrectRegionsSubsystem : public UWorldSubsystem
{
public:
	uint8                                        Pad_FCF[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UColorCorrectRegionsSubsystem* GetDefaultObj();

	void RefreshStenciIdAssignmentForAllCCR();
};

// 0xD8 (0x730 - 0x658)
// Class ColorCorrectRegions.ColorCorrectionWindow
class AColorCorrectionWindow : public AColorCorrectRegion
{
public:
	uint8                                        Pad_FDF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMeshComponent*>          MeshComponents;                                    // 0x660(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	enum class EColorCorrectWindowType           WindowType;                                        // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDisplayClusterPositionalParams       PositionalParams;                                  // 0x678(0x48)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            Origin;                                            // 0x6C0(0x60)(Edit, BlueprintVisible, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE2[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AColorCorrectionWindow* GetDefaultObj();

	void SetYaw(double InValue);
	void SetSpin(double InValue);
	void SetScale(struct FVector2D& InScale);
	void SetRadialOffset(double InValue);
	void SetPositionalParams(struct FDisplayClusterPositionalParams& InParams);
	void SetPitch(double InValue);
	void SetOrigin(struct FTransform& InOrigin);
	void SetLongitude(double InValue);
	void SetLatitude(double InValue);
	void SetDistanceFromCenter(double InValue);
	double GetYaw();
	double GetSpin();
	struct FVector2D GetScale();
	double GetRadialOffset();
	struct FDisplayClusterPositionalParams GetPositionalParams();
	double GetPitch();
	struct FTransform GetOrigin();
	double GetLongitude();
	double GetLatitude();
	double GetDistanceFromCenter();
};

// 0x0 (0x730 - 0x730)
// Class ColorCorrectRegions.ColorCorrectWindow
class AColorCorrectWindow : public AColorCorrectionWindow
{
public:

	static class UClass* StaticClass();
	static class AColorCorrectWindow* GetDefaultObj();

};

}


