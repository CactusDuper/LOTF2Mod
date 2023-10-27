#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RecoverMojoPerfectDodgeInstant.GE_RecoverMojoPerfectDodgeInstant_C
// (None)

class UClass* UGE_RecoverMojoPerfectDodgeInstant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RecoverMojoPerfectDodgeInstant_C");

	return Clss;
}


// GE_RecoverMojoPerfectDodgeInstant_C GE_RecoverMojoPerfectDodgeInstant.Default__GE_RecoverMojoPerfectDodgeInstant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RecoverMojoPerfectDodgeInstant_C* UGE_RecoverMojoPerfectDodgeInstant_C::GetDefaultObj()
{
	static class UGE_RecoverMojoPerfectDodgeInstant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RecoverMojoPerfectDodgeInstant_C*>(UGE_RecoverMojoPerfectDodgeInstant_C::StaticClass()->DefaultObject);

	return Default;
}

}


