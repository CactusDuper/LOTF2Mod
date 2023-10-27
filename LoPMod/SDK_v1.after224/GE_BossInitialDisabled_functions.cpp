#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BossInitialDisabled.GE_BossInitialDisabled_C
// (None)

class UClass* UGE_BossInitialDisabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BossInitialDisabled_C");

	return Clss;
}


// GE_BossInitialDisabled_C GE_BossInitialDisabled.Default__GE_BossInitialDisabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BossInitialDisabled_C* UGE_BossInitialDisabled_C::GetDefaultObj()
{
	static class UGE_BossInitialDisabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BossInitialDisabled_C*>(UGE_BossInitialDisabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


