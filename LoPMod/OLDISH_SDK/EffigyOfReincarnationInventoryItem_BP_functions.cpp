#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EffigyOfReincarnationInventoryItem_BP.EffigyOfReincarnationInventoryItem_BP_C
// (None)

class UClass* UEffigyOfReincarnationInventoryItem_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffigyOfReincarnationInventoryItem_BP_C");

	return Clss;
}


// EffigyOfReincarnationInventoryItem_BP_C EffigyOfReincarnationInventoryItem_BP.Default__EffigyOfReincarnationInventoryItem_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffigyOfReincarnationInventoryItem_BP_C* UEffigyOfReincarnationInventoryItem_BP_C::GetDefaultObj()
{
	static class UEffigyOfReincarnationInventoryItem_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffigyOfReincarnationInventoryItem_BP_C*>(UEffigyOfReincarnationInventoryItem_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


