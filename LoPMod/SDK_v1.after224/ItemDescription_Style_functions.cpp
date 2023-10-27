#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemDescription_Style.ItemDescription_Style_C
// (None)

class UClass* UItemDescription_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemDescription_Style_C");

	return Clss;
}


// ItemDescription_Style_C ItemDescription_Style.Default__ItemDescription_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemDescription_Style_C* UItemDescription_Style_C::GetDefaultObj()
{
	static class UItemDescription_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemDescription_Style_C*>(UItemDescription_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


