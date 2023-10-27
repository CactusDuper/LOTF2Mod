#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait.SAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait_C
// (None)

class UClass* USAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait_C");

	return Clss;
}


// SAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait_C SAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait.Default__SAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait_C* USAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait_C::GetDefaultObj()
{
	static class USAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait_C*>(USAA_SPL_Rhogar_CurseOfAdyr_Explosion_Wait_C::StaticClass()->DefaultObject);

	return Default;
}

}


