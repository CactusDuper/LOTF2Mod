#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_Description_Scroll.Item_Description_Scroll_C
// (None)

class UClass* UItem_Description_Scroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_Description_Scroll_C");

	return Clss;
}


// Item_Description_Scroll_C Item_Description_Scroll.Default__Item_Description_Scroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_Description_Scroll_C* UItem_Description_Scroll_C::GetDefaultObj()
{
	static class UItem_Description_Scroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_Description_Scroll_C*>(UItem_Description_Scroll_C::StaticClass()->DefaultObject);

	return Default;
}

}


