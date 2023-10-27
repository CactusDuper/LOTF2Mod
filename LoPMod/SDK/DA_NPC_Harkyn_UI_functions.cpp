#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_NPC_Harkyn_UI.DA_NPC_Harkyn_UI_C
// (None)

class UClass* UDA_NPC_Harkyn_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_NPC_Harkyn_UI_C");

	return Clss;
}


// DA_NPC_Harkyn_UI_C DA_NPC_Harkyn_UI.Default__DA_NPC_Harkyn_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_NPC_Harkyn_UI_C* UDA_NPC_Harkyn_UI_C::GetDefaultObj()
{
	static class UDA_NPC_Harkyn_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_NPC_Harkyn_UI_C*>(UDA_NPC_Harkyn_UI_C::StaticClass()->DefaultObject);

	return Default;
}

}


