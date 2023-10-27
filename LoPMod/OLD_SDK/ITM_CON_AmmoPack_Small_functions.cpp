#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_CON_AmmoPack_Small.ITM_CON_AmmoPack_Small_C
// (None)

class UClass* UITM_CON_AmmoPack_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_CON_AmmoPack_Small_C");

	return Clss;
}


// ITM_CON_AmmoPack_Small_C ITM_CON_AmmoPack_Small.Default__ITM_CON_AmmoPack_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_CON_AmmoPack_Small_C* UITM_CON_AmmoPack_Small_C::GetDefaultObj()
{
	static class UITM_CON_AmmoPack_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_CON_AmmoPack_Small_C*>(UITM_CON_AmmoPack_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


