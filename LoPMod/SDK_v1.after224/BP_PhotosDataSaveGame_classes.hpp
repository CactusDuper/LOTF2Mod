#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass BP_PhotosDataSaveGame.BP_PhotosDataSaveGame_C
class UBP_PhotosDataSaveGame_C : public USaveGame
{
public:
	TArray<struct FSPhotosData>                  PhotosData;                                        // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_PhotosDataSaveGame_C* GetDefaultObj();

};

}


