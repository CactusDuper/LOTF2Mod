#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_UmbralRealm.GE_UmbralRealm_C
// (None)

class UClass* UGE_UmbralRealm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_UmbralRealm_C");

	return Clss;
}


// GE_UmbralRealm_C GE_UmbralRealm.Default__GE_UmbralRealm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_UmbralRealm_C* UGE_UmbralRealm_C::GetDefaultObj()
{
	static class UGE_UmbralRealm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_UmbralRealm_C*>(UGE_UmbralRealm_C::StaticClass()->DefaultObject);

	return Default;
}

}


