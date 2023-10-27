#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DynamicHitstopEnemy.GE_DynamicHitstopEnemy_C
// (None)

class UClass* UGE_DynamicHitstopEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DynamicHitstopEnemy_C");

	return Clss;
}


// GE_DynamicHitstopEnemy_C GE_DynamicHitstopEnemy.Default__GE_DynamicHitstopEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DynamicHitstopEnemy_C* UGE_DynamicHitstopEnemy_C::GetDefaultObj()
{
	static class UGE_DynamicHitstopEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DynamicHitstopEnemy_C*>(UGE_DynamicHitstopEnemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


