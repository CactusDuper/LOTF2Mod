#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CharredSpirit_EmberFire.GE_CharredSpirit_EmberFire_C
// (None)

class UClass* UGE_CharredSpirit_EmberFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CharredSpirit_EmberFire_C");

	return Clss;
}


// GE_CharredSpirit_EmberFire_C GE_CharredSpirit_EmberFire.Default__GE_CharredSpirit_EmberFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CharredSpirit_EmberFire_C* UGE_CharredSpirit_EmberFire_C::GetDefaultObj()
{
	static class UGE_CharredSpirit_EmberFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CharredSpirit_EmberFire_C*>(UGE_CharredSpirit_EmberFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


