#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class CustomizableObjectPopulation.CustomizableObjectPopulation
class UCustomizableObjectPopulation : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FClassWeightPair>              ClassWeights;                                      // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCustomizableObjectPopulationGenerator* Generator;                                         // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCustomizableObjectPopulation* GetDefaultObj();

	bool RegeneratePopulation(int32 Seed, TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate);
	int32 GeneratePopulation(TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate);
};

// 0x68 (0x90 - 0x28)
// Class CustomizableObjectPopulation.CustomizableObjectPopulationClass
class UCustomizableObjectPopulationClass : public UObject
{
public:
	class FString                                Name;                                              // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizableObject*                   CustomizableObject;                                // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        WhiteList;                                         // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        BlackList;                                         // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectPopulationCharacteristic> Characteristics;                                   // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomizableObjectPopulationClass* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class CustomizableObjectPopulation.CustomizableObjectPopulationGenerator
class UCustomizableObjectPopulationGenerator : public UObject
{
public:
	TArray<class UCustomizableObject*>           PopulationObjects;                                 // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BBC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomizableObjectPopulationGenerator* GetDefaultObj();

};

}


