#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CharredSpirit_EngulfedFire.GE_CharredSpirit_EngulfedFire_C
// (None)

class UClass* UGE_CharredSpirit_EngulfedFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CharredSpirit_EngulfedFire_C");

	return Clss;
}


// GE_CharredSpirit_EngulfedFire_C GE_CharredSpirit_EngulfedFire.Default__GE_CharredSpirit_EngulfedFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CharredSpirit_EngulfedFire_C* UGE_CharredSpirit_EngulfedFire_C::GetDefaultObj()
{
	static class UGE_CharredSpirit_EngulfedFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CharredSpirit_EngulfedFire_C*>(UGE_CharredSpirit_EngulfedFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


