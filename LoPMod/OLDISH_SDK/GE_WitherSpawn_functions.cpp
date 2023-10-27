#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_WitherSpawn.GE_WitherSpawn_C
// (None)

class UClass* UGE_WitherSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_WitherSpawn_C");

	return Clss;
}


// GE_WitherSpawn_C GE_WitherSpawn.Default__GE_WitherSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_WitherSpawn_C* UGE_WitherSpawn_C::GetDefaultObj()
{
	static class UGE_WitherSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_WitherSpawn_C*>(UGE_WitherSpawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


