#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EffigyOfReincarnationOnAddedToTheInventory.GE_EffigyOfReincarnationOnAddedToTheInventory_C
// (None)

class UClass* UGE_EffigyOfReincarnationOnAddedToTheInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EffigyOfReincarnationOnAddedToTheInventory_C");

	return Clss;
}


// GE_EffigyOfReincarnationOnAddedToTheInventory_C GE_EffigyOfReincarnationOnAddedToTheInventory.Default__GE_EffigyOfReincarnationOnAddedToTheInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EffigyOfReincarnationOnAddedToTheInventory_C* UGE_EffigyOfReincarnationOnAddedToTheInventory_C::GetDefaultObj()
{
	static class UGE_EffigyOfReincarnationOnAddedToTheInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EffigyOfReincarnationOnAddedToTheInventory_C*>(UGE_EffigyOfReincarnationOnAddedToTheInventory_C::StaticClass()->DefaultObject);

	return Default;
}

}


