#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MAG_SPL_Rhogar_HoundCommand.MAG_SPL_Rhogar_HoundCommand_C
// (None)

class UClass* UMAG_SPL_Rhogar_HoundCommand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MAG_SPL_Rhogar_HoundCommand_C");

	return Clss;
}


// MAG_SPL_Rhogar_HoundCommand_C MAG_SPL_Rhogar_HoundCommand.Default__MAG_SPL_Rhogar_HoundCommand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMAG_SPL_Rhogar_HoundCommand_C* UMAG_SPL_Rhogar_HoundCommand_C::GetDefaultObj()
{
	static class UMAG_SPL_Rhogar_HoundCommand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMAG_SPL_Rhogar_HoundCommand_C*>(UMAG_SPL_Rhogar_HoundCommand_C::StaticClass()->DefaultObject);

	return Default;
}

}


