#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemInfoThrowablesSmall.W_ItemInfoThrowablesSmall_C
// (None)

class UClass* UW_ItemInfoThrowablesSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemInfoThrowablesSmall_C");

	return Clss;
}


// W_ItemInfoThrowablesSmall_C W_ItemInfoThrowablesSmall.Default__W_ItemInfoThrowablesSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemInfoThrowablesSmall_C* UW_ItemInfoThrowablesSmall_C::GetDefaultObj()
{
	static class UW_ItemInfoThrowablesSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemInfoThrowablesSmall_C*>(UW_ItemInfoThrowablesSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


