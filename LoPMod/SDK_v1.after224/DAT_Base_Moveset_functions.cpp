#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DAT_Base_Moveset.DAT_Base_Moveset_C
// (None)

class UClass* UDAT_Base_Moveset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DAT_Base_Moveset_C");

	return Clss;
}


// DAT_Base_Moveset_C DAT_Base_Moveset.Default__DAT_Base_Moveset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDAT_Base_Moveset_C* UDAT_Base_Moveset_C::GetDefaultObj()
{
	static class UDAT_Base_Moveset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDAT_Base_Moveset_C*>(UDAT_Base_Moveset_C::StaticClass()->DefaultObject);

	return Default;
}

}


