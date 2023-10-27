#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AbilityBlockParryWindow.GE_AbilityBlockParryWindow_C
// (None)

class UClass* UGE_AbilityBlockParryWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AbilityBlockParryWindow_C");

	return Clss;
}


// GE_AbilityBlockParryWindow_C GE_AbilityBlockParryWindow.Default__GE_AbilityBlockParryWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AbilityBlockParryWindow_C* UGE_AbilityBlockParryWindow_C::GetDefaultObj()
{
	static class UGE_AbilityBlockParryWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AbilityBlockParryWindow_C*>(UGE_AbilityBlockParryWindow_C::StaticClass()->DefaultObject);

	return Default;
}

}


