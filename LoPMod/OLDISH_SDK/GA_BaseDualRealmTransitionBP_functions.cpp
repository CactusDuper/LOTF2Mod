#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_BaseDualRealmTransitionBP.GA_BaseDualRealmTransitionBP_C
// (None)

class UClass* UGA_BaseDualRealmTransitionBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_BaseDualRealmTransitionBP_C");

	return Clss;
}


// GA_BaseDualRealmTransitionBP_C GA_BaseDualRealmTransitionBP.Default__GA_BaseDualRealmTransitionBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_BaseDualRealmTransitionBP_C* UGA_BaseDualRealmTransitionBP_C::GetDefaultObj()
{
	static class UGA_BaseDualRealmTransitionBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_BaseDualRealmTransitionBP_C*>(UGA_BaseDualRealmTransitionBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


