#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_RuneSlot.W_RuneSlot_C
// (None)

class UClass* UW_RuneSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_RuneSlot_C");

	return Clss;
}


// W_RuneSlot_C W_RuneSlot.Default__W_RuneSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_RuneSlot_C* UW_RuneSlot_C::GetDefaultObj()
{
	static class UW_RuneSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_RuneSlot_C*>(UW_RuneSlot_C::StaticClass()->DefaultObject);

	return Default;
}

}


