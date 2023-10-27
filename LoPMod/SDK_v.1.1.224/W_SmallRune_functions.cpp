#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_SmallRune.W_SmallRune_C
// (None)

class UClass* UW_SmallRune_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_SmallRune_C");

	return Clss;
}


// W_SmallRune_C W_SmallRune.Default__W_SmallRune_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_SmallRune_C* UW_SmallRune_C::GetDefaultObj()
{
	static class UW_SmallRune_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_SmallRune_C*>(UW_SmallRune_C::StaticClass()->DefaultObject);

	return Default;
}

}


