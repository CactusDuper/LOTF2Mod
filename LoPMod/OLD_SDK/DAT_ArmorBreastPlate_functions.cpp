#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_ArmorBreastPlate.DAT_ArmorBreastPlate_C
// (None)

class UClass* UDAT_ArmorBreastPlate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_ArmorBreastPlate_C");

	return Clss;
}


// DAT_ArmorBreastPlate_C DAT_ArmorBreastPlate.Default__DAT_ArmorBreastPlate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_ArmorBreastPlate_C* UDAT_ArmorBreastPlate_C::GetDefaultObj()
{
	static class UDAT_ArmorBreastPlate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_ArmorBreastPlate_C*>(UDAT_ArmorBreastPlate_C::StaticClass()->DefaultObject);

	return Default;
}

}


