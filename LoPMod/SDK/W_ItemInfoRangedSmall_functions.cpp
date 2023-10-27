#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemInfoRangedSmall.W_ItemInfoRangedSmall_C
// (None)

class UClass* UW_ItemInfoRangedSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemInfoRangedSmall_C");

	return Clss;
}


// W_ItemInfoRangedSmall_C W_ItemInfoRangedSmall.Default__W_ItemInfoRangedSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemInfoRangedSmall_C* UW_ItemInfoRangedSmall_C::GetDefaultObj()
{
	static class UW_ItemInfoRangedSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemInfoRangedSmall_C*>(UW_ItemInfoRangedSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


