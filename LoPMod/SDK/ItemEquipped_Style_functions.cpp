#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemEquipped_Style.ItemEquipped_Style_C
// (None)

class UClass* UItemEquipped_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemEquipped_Style_C");

	return Clss;
}


// ItemEquipped_Style_C ItemEquipped_Style.Default__ItemEquipped_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemEquipped_Style_C* UItemEquipped_Style_C::GetDefaultObj()
{
	static class UItemEquipped_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemEquipped_Style_C*>(UItemEquipped_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


