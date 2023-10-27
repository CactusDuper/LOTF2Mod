#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_ArmorBoots.DAT_ArmorBoots_C
// (None)

class UClass* UDAT_ArmorBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_ArmorBoots_C");

	return Clss;
}


// DAT_ArmorBoots_C DAT_ArmorBoots.Default__DAT_ArmorBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_ArmorBoots_C* UDAT_ArmorBoots_C::GetDefaultObj()
{
	static class UDAT_ArmorBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_ArmorBoots_C*>(UDAT_ArmorBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


