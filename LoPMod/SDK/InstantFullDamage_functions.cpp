#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InstantFullDamage.InstantFullDamage_C
// (None)

class UClass* UInstantFullDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstantFullDamage_C");

	return Clss;
}


// InstantFullDamage_C InstantFullDamage.Default__InstantFullDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstantFullDamage_C* UInstantFullDamage_C::GetDefaultObj()
{
	static class UInstantFullDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstantFullDamage_C*>(UInstantFullDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


