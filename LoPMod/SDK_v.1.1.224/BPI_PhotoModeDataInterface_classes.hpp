#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_PhotoModeDataInterface.BPI_PhotoModeDataInterface_C
class IBPI_PhotoModeDataInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_PhotoModeDataInterface_C* GetDefaultObj();

	void TabToOpen(int32 TabIndex, class UWBP_CommonButtonTab_C* CommonButtonPressed);
	void SendPhotoData(const struct FSPhotosData& PhotoData);
};

}


