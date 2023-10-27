#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AfterDeathWishAttributeSetup.GE_AfterDeathWishAttributeSetup_C
// (None)

class UClass* UGE_AfterDeathWishAttributeSetup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AfterDeathWishAttributeSetup_C");

	return Clss;
}


// GE_AfterDeathWishAttributeSetup_C GE_AfterDeathWishAttributeSetup.Default__GE_AfterDeathWishAttributeSetup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AfterDeathWishAttributeSetup_C* UGE_AfterDeathWishAttributeSetup_C::GetDefaultObj()
{
	static class UGE_AfterDeathWishAttributeSetup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AfterDeathWishAttributeSetup_C*>(UGE_AfterDeathWishAttributeSetup_C::StaticClass()->DefaultObject);

	return Default;
}

}


