#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_EnemyStatue.GE_EnemyStatue_C
// (None)

class UClass* UGE_EnemyStatue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_EnemyStatue_C");

	return Clss;
}


// GE_EnemyStatue_C GE_EnemyStatue.Default__GE_EnemyStatue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_EnemyStatue_C* UGE_EnemyStatue_C::GetDefaultObj()
{
	static class UGE_EnemyStatue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_EnemyStatue_C*>(UGE_EnemyStatue_C::StaticClass()->DefaultObject);

	return Default;
}

}


