#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance.GE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance_C
// (None)

class UClass* UGE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance_C");

	return Clss;
}


// GE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance_C GE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance.Default__GE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance_C* UGE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance_C::GetDefaultObj()
{
	static class UGE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance_C*>(UGE_Enemy_NPC_Andreas_RemoveIncreasedDeflectChance_C::StaticClass()->DefaultObject);

	return Default;
}

}


