#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_Accessories.DAT_Accessories_C
// (None)

class UClass* UDAT_Accessories_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_Accessories_C");

	return Clss;
}


// DAT_Accessories_C DAT_Accessories.Default__DAT_Accessories_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_Accessories_C* UDAT_Accessories_C::GetDefaultObj()
{
	static class UDAT_Accessories_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_Accessories_C*>(UDAT_Accessories_C::StaticClass()->DefaultObject);

	return Default;
}

}


