#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_NavBox_Option.W_NavBox_Option_C
// (None)

class UClass* UW_NavBox_Option_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_NavBox_Option_C");

	return Clss;
}


// W_NavBox_Option_C W_NavBox_Option.Default__W_NavBox_Option_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_NavBox_Option_C* UW_NavBox_Option_C::GetDefaultObj()
{
	static class UW_NavBox_Option_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_NavBox_Option_C*>(UW_NavBox_Option_C::StaticClass()->DefaultObject);

	return Default;
}

}


