#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemInfoQuestSmall.W_ItemInfoQuestSmall_C
// (None)

class UClass* UW_ItemInfoQuestSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemInfoQuestSmall_C");

	return Clss;
}


// W_ItemInfoQuestSmall_C W_ItemInfoQuestSmall.Default__W_ItemInfoQuestSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemInfoQuestSmall_C* UW_ItemInfoQuestSmall_C::GetDefaultObj()
{
	static class UW_ItemInfoQuestSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemInfoQuestSmall_C*>(UW_ItemInfoQuestSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


