#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Interactible_Object.BPI_Interactible_Object_C
class IBPI_Interactible_Object_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Interactible_Object_C* GetDefaultObj();

	void BPI_Close_Portculis();
	void BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer);
};

}


