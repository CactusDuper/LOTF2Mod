#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Traps.BPI_Traps_C
class IBPI_Traps_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Traps_C* GetDefaultObj();

	void BPI_Trap_Activate(class AActor* ActivatingEntity);
};

}


