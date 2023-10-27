#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FallDamage_BP.GE_FallDamage_BP_C
// (None)

class UClass* UGE_FallDamage_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FallDamage_BP_C");

	return Clss;
}


// GE_FallDamage_BP_C GE_FallDamage_BP.Default__GE_FallDamage_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FallDamage_BP_C* UGE_FallDamage_BP_C::GetDefaultObj()
{
	static class UGE_FallDamage_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FallDamage_BP_C*>(UGE_FallDamage_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


