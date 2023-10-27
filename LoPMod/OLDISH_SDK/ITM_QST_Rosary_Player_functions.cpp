#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_QST_Rosary_Player.ITM_QST_Rosary_Player_C
// (None)

class UClass* UITM_QST_Rosary_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_QST_Rosary_Player_C");

	return Clss;
}


// ITM_QST_Rosary_Player_C ITM_QST_Rosary_Player.Default__ITM_QST_Rosary_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_QST_Rosary_Player_C* UITM_QST_Rosary_Player_C::GetDefaultObj()
{
	static class UITM_QST_Rosary_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_QST_Rosary_Player_C*>(UITM_QST_Rosary_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


