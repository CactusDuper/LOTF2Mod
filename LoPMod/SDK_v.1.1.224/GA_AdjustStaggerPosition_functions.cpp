#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AdjustStaggerPosition.GA_AdjustStaggerPosition_C
// (None)

class UClass* UGA_AdjustStaggerPosition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AdjustStaggerPosition_C");

	return Clss;
}


// GA_AdjustStaggerPosition_C GA_AdjustStaggerPosition.Default__GA_AdjustStaggerPosition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AdjustStaggerPosition_C* UGA_AdjustStaggerPosition_C::GetDefaultObj()
{
	static class UGA_AdjustStaggerPosition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AdjustStaggerPosition_C*>(UGA_AdjustStaggerPosition_C::StaticClass()->DefaultObject);

	return Default;
}

}


