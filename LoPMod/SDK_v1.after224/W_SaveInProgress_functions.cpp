#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SaveInProgress.W_SaveInProgress_C
// (None)

class UClass* UW_SaveInProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SaveInProgress_C");

	return Clss;
}


// W_SaveInProgress_C W_SaveInProgress.Default__W_SaveInProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SaveInProgress_C* UW_SaveInProgress_C::GetDefaultObj()
{
	static class UW_SaveInProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SaveInProgress_C*>(UW_SaveInProgress_C::StaticClass()->DefaultObject);

	return Default;
}

}


