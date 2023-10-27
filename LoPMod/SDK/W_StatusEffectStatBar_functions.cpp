#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_StatusEffectStatBar.W_StatusEffectStatBar_C
// (None)

class UClass* UW_StatusEffectStatBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_StatusEffectStatBar_C");

	return Clss;
}


// W_StatusEffectStatBar_C W_StatusEffectStatBar.Default__W_StatusEffectStatBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_StatusEffectStatBar_C* UW_StatusEffectStatBar_C::GetDefaultObj()
{
	static class UW_StatusEffectStatBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_StatusEffectStatBar_C*>(UW_StatusEffectStatBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


