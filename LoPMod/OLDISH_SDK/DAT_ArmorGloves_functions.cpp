#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_ArmorGloves.DAT_ArmorGloves_C
// (None)

class UClass* UDAT_ArmorGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_ArmorGloves_C");

	return Clss;
}


// DAT_ArmorGloves_C DAT_ArmorGloves.Default__DAT_ArmorGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_ArmorGloves_C* UDAT_ArmorGloves_C::GetDefaultObj()
{
	static class UDAT_ArmorGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_ArmorGloves_C*>(UDAT_ArmorGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


