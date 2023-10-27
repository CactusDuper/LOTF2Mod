#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_Player_DualWieldHeavy_Moveset_2.DA_Player_DualWieldHeavy_Moveset_2_C
// (None)

class UClass* UDA_Player_DualWieldHeavy_Moveset_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_Player_DualWieldHeavy_Moveset_2_C");

	return Clss;
}


// DA_Player_DualWieldHeavy_Moveset_2_C DA_Player_DualWieldHeavy_Moveset_2.Default__DA_Player_DualWieldHeavy_Moveset_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_Player_DualWieldHeavy_Moveset_2_C* UDA_Player_DualWieldHeavy_Moveset_2_C::GetDefaultObj()
{
	static class UDA_Player_DualWieldHeavy_Moveset_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_Player_DualWieldHeavy_Moveset_2_C*>(UDA_Player_DualWieldHeavy_Moveset_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


