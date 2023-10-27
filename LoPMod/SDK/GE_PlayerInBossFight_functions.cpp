#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PlayerInBossFight.GE_PlayerInBossFight_C
// (None)

class UClass* UGE_PlayerInBossFight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PlayerInBossFight_C");

	return Clss;
}


// GE_PlayerInBossFight_C GE_PlayerInBossFight.Default__GE_PlayerInBossFight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PlayerInBossFight_C* UGE_PlayerInBossFight_C::GetDefaultObj()
{
	static class UGE_PlayerInBossFight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PlayerInBossFight_C*>(UGE_PlayerInBossFight_C::StaticClass()->DefaultObject);

	return Default;
}

}


