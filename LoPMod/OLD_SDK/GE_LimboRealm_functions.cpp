#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_LimboRealm.GE_LimboRealm_C
// (None)

class UClass* UGE_LimboRealm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_LimboRealm_C");

	return Clss;
}


// GE_LimboRealm_C GE_LimboRealm.Default__GE_LimboRealm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_LimboRealm_C* UGE_LimboRealm_C::GetDefaultObj()
{
	static class UGE_LimboRealm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_LimboRealm_C*>(UGE_LimboRealm_C::StaticClass()->DefaultObject);

	return Default;
}

}


