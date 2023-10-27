#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x320 - 0x2B0)
// Class MRMesh.MockDataMeshTrackerComponent
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnMeshTrackerUpdated;                              // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         ScanWorld;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequestNormals;                                    // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequestVertexConfidence;                           // 0x2C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshTrackerVertexColorMode       VertexColorMode;                                   // 0x2C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FColor>                        BlockVertexColors;                                 // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          VertexColorFromConfidenceZero;                     // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          VertexColorFromConfidenceOne;                      // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateInterval;                                    // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMRMeshComponent*                      MRMesh;                                            // 0x300(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMockDataMeshTrackerComponent* GetDefaultObj();

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 Index, TArray<struct FVector>& Vertices, TArray<int32>& Triangles, TArray<struct FVector>& Normals, TArray<float>& Confidence);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

// 0x208 (0x230 - 0x28)
// Class MRMesh.MRMeshBodyHolder
class UMRMeshBodyHolder : public UObject
{
public:
	uint8                                        Pad_2B4E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            BodySetup;                                         // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyInstance                         BodyInstance;                                      // 0x38(0x190)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4F[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMRMeshBodyHolder* GetDefaultObj();

};

// 0x88 (0x5D0 - 0x548)
// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_2B52[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x550(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    WireframeMaterial;                                 // 0x558(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCreateMeshProxySections;                          // 0x560(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUpdateNavMeshOnMeshUpdate;                        // 0x561(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2B53[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bNeverCreateCollisionMesh;                         // 0x563(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2B54[0x44];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMRMeshBodyHolder*>             BodyHolders;                                       // 0x5A8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2B55[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMRMeshComponent* GetDefaultObj();

	void SetWireframeMaterial(class UMaterialInterface* InMaterial);
	void SetWireframeColor(struct FLinearColor& InColor);
	void SetUseWireframe(bool bUseWireframe);
	void SetEnableMeshOcclusion(bool bEnable);
	void RequestNavMeshUpdate();
	bool IsConnected();
	struct FLinearColor GetWireframeColor();
	bool GetUseWireframe();
	bool GetEnableMeshOcclusion();
	void ForceNavMeshUpdate();
	void Clear();
};

// 0x0 (0x28 - 0x28)
// Class MRMesh.MeshReconstructorBase
class UMeshReconstructorBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMeshReconstructorBase* GetDefaultObj();

	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent* Mesh);
};

}


