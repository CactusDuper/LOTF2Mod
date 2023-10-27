#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_MothInteractions.BPI_MothInteractions_C
class IBPI_MothInteractions_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_MothInteractions_C* GetDefaultObj();

	void BPI_ResumeMothActor();
	void BPI_MothActorRegister(class AActor* MothActor);
	void BPI_KillMothAtractor();
	void BPI_PauseMothActor();
};

}


