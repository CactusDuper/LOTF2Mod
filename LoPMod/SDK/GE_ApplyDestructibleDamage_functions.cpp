#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplyDestructibleDamage.GE_ApplyDestructibleDamage_C
// (None)

class UClass* UGE_ApplyDestructibleDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplyDestructibleDamage_C");

	return Clss;
}


// GE_ApplyDestructibleDamage_C GE_ApplyDestructibleDamage.Default__GE_ApplyDestructibleDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplyDestructibleDamage_C* UGE_ApplyDestructibleDamage_C::GetDefaultObj()
{
	static class UGE_ApplyDestructibleDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplyDestructibleDamage_C*>(UGE_ApplyDestructibleDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


