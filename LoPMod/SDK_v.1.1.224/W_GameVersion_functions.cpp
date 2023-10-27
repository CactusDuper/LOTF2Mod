#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_GameVersion.W_GameVersion_C
// (None)

class UClass* UW_GameVersion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_GameVersion_C");

	return Clss;
}


// W_GameVersion_C W_GameVersion.Default__W_GameVersion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_GameVersion_C* UW_GameVersion_C::GetDefaultObj()
{
	static class UW_GameVersion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_GameVersion_C*>(UW_GameVersion_C::StaticClass()->DefaultObject);

	return Default;
}

}


