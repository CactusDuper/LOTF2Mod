#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AddHealthProvisionalDamage.GE_AddHealthProvisionalDamage_C
// (None)

class UClass* UGE_AddHealthProvisionalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AddHealthProvisionalDamage_C");

	return Clss;
}


// GE_AddHealthProvisionalDamage_C GE_AddHealthProvisionalDamage.Default__GE_AddHealthProvisionalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AddHealthProvisionalDamage_C* UGE_AddHealthProvisionalDamage_C::GetDefaultObj()
{
	static class UGE_AddHealthProvisionalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AddHealthProvisionalDamage_C*>(UGE_AddHealthProvisionalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


