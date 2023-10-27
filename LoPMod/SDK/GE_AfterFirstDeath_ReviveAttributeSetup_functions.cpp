#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AfterFirstDeath_ReviveAttributeSetup.GE_AfterFirstDeath_ReviveAttributeSetup_C
// (None)

class UClass* UGE_AfterFirstDeath_ReviveAttributeSetup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AfterFirstDeath_ReviveAttributeSetup_C");

	return Clss;
}


// GE_AfterFirstDeath_ReviveAttributeSetup_C GE_AfterFirstDeath_ReviveAttributeSetup.Default__GE_AfterFirstDeath_ReviveAttributeSetup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AfterFirstDeath_ReviveAttributeSetup_C* UGE_AfterFirstDeath_ReviveAttributeSetup_C::GetDefaultObj()
{
	static class UGE_AfterFirstDeath_ReviveAttributeSetup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AfterFirstDeath_ReviveAttributeSetup_C*>(UGE_AfterFirstDeath_ReviveAttributeSetup_C::StaticClass()->DefaultObject);

	return Default;
}

}


