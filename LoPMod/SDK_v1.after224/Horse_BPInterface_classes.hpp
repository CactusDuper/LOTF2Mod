#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Horse_BPInterface.Horse_BPInterface_C
class IHorse_BPInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHorse_BPInterface_C* GetDefaultObj();

	void GetRider(class AActor** Rider);
	void SetRider(class AActor* Rider);
};

}


