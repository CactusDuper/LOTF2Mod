#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_Player_DualWieldHeavy_Moveset_Short.DA_Player_DualWieldHeavy_Moveset_Short_C
// (None)

class UClass* UDA_Player_DualWieldHeavy_Moveset_Short_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_Player_DualWieldHeavy_Moveset_Short_C");

	return Clss;
}


// DA_Player_DualWieldHeavy_Moveset_Short_C DA_Player_DualWieldHeavy_Moveset_Short.Default__DA_Player_DualWieldHeavy_Moveset_Short_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_Player_DualWieldHeavy_Moveset_Short_C* UDA_Player_DualWieldHeavy_Moveset_Short_C::GetDefaultObj()
{
	static class UDA_Player_DualWieldHeavy_Moveset_Short_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_Player_DualWieldHeavy_Moveset_Short_C*>(UDA_Player_DualWieldHeavy_Moveset_Short_C::StaticClass()->DefaultObject);

	return Default;
}

}


