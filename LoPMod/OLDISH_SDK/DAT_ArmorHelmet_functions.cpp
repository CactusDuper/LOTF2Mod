#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_ArmorHelmet.DAT_ArmorHelmet_C
// (None)

class UClass* UDAT_ArmorHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_ArmorHelmet_C");

	return Clss;
}


// DAT_ArmorHelmet_C DAT_ArmorHelmet.Default__DAT_ArmorHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_ArmorHelmet_C* UDAT_ArmorHelmet_C::GetDefaultObj()
{
	static class UDAT_ArmorHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_ArmorHelmet_C*>(UDAT_ArmorHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


