#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Item_BorderStyle.Item_BorderStyle_C
// (None)

class UClass* UItem_BorderStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Item_BorderStyle_C");

	return Clss;
}


// Item_BorderStyle_C Item_BorderStyle.Default__Item_BorderStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItem_BorderStyle_C* UItem_BorderStyle_C::GetDefaultObj()
{
	static class UItem_BorderStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItem_BorderStyle_C*>(UItem_BorderStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


