#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_EnvInteraction.W_EnvInteraction_C
// (None)

class UClass* UW_EnvInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_EnvInteraction_C");

	return Clss;
}


// W_EnvInteraction_C W_EnvInteraction.Default__W_EnvInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_EnvInteraction_C* UW_EnvInteraction_C::GetDefaultObj()
{
	static class UW_EnvInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_EnvInteraction_C*>(UW_EnvInteraction_C::StaticClass()->DefaultObject);

	return Default;
}

}


