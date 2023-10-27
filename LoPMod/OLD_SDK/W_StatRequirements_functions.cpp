#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_StatRequirements.W_StatRequirements_C
// (None)

class UClass* UW_StatRequirements_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_StatRequirements_C");

	return Clss;
}


// W_StatRequirements_C W_StatRequirements.Default__W_StatRequirements_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_StatRequirements_C* UW_StatRequirements_C::GetDefaultObj()
{
	static class UW_StatRequirements_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_StatRequirements_C*>(UW_StatRequirements_C::StaticClass()->DefaultObject);

	return Default;
}

}


