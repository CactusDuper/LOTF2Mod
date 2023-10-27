#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ItemInfoMagicSmall.W_ItemInfoMagicSmall_C
// (None)

class UClass* UW_ItemInfoMagicSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ItemInfoMagicSmall_C");

	return Clss;
}


// W_ItemInfoMagicSmall_C W_ItemInfoMagicSmall.Default__W_ItemInfoMagicSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ItemInfoMagicSmall_C* UW_ItemInfoMagicSmall_C::GetDefaultObj()
{
	static class UW_ItemInfoMagicSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ItemInfoMagicSmall_C*>(UW_ItemInfoMagicSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


