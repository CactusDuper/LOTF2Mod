#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemInfoUsableSmall.W_ItemInfoUsableSmall_C
// (None)

class UClass* UW_ItemInfoUsableSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemInfoUsableSmall_C");

	return Clss;
}


// W_ItemInfoUsableSmall_C W_ItemInfoUsableSmall.Default__W_ItemInfoUsableSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemInfoUsableSmall_C* UW_ItemInfoUsableSmall_C::GetDefaultObj()
{
	static class UW_ItemInfoUsableSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemInfoUsableSmall_C*>(UW_ItemInfoUsableSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


