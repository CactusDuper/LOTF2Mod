#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FirstDeath_ImmuneToHealthDamage.GE_FirstDeath_ImmuneToHealthDamage_C
// (None)

class UClass* UGE_FirstDeath_ImmuneToHealthDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FirstDeath_ImmuneToHealthDamage_C");

	return Clss;
}


// GE_FirstDeath_ImmuneToHealthDamage_C GE_FirstDeath_ImmuneToHealthDamage.Default__GE_FirstDeath_ImmuneToHealthDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FirstDeath_ImmuneToHealthDamage_C* UGE_FirstDeath_ImmuneToHealthDamage_C::GetDefaultObj()
{
	static class UGE_FirstDeath_ImmuneToHealthDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FirstDeath_ImmuneToHealthDamage_C*>(UGE_FirstDeath_ImmuneToHealthDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


