#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_Player_Flail2H_Movest.DA_Player_Flail2H_Movest_C
// (None)

class UClass* UDA_Player_Flail2H_Movest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_Player_Flail2H_Movest_C");

	return Clss;
}


// DA_Player_Flail2H_Movest_C DA_Player_Flail2H_Movest.Default__DA_Player_Flail2H_Movest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_Player_Flail2H_Movest_C* UDA_Player_Flail2H_Movest_C::GetDefaultObj()
{
	static class UDA_Player_Flail2H_Movest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_Player_Flail2H_Movest_C*>(UDA_Player_Flail2H_Movest_C::StaticClass()->DefaultObject);

	return Default;
}

}


