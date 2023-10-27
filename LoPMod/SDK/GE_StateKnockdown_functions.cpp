#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StateKnockdown.GE_StateKnockdown_C
// (None)

class UClass* UGE_StateKnockdown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StateKnockdown_C");

	return Clss;
}


// GE_StateKnockdown_C GE_StateKnockdown.Default__GE_StateKnockdown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StateKnockdown_C* UGE_StateKnockdown_C::GetDefaultObj()
{
	static class UGE_StateKnockdown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StateKnockdown_C*>(UGE_StateKnockdown_C::StaticClass()->DefaultObject);

	return Default;
}

}


