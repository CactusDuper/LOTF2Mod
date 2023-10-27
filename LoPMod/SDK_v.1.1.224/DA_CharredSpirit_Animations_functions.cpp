#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_CharredSpirit_Animations.DA_CharredSpirit_Animations_C
// (None)

class UClass* UDA_CharredSpirit_Animations_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_CharredSpirit_Animations_C");

	return Clss;
}


// DA_CharredSpirit_Animations_C DA_CharredSpirit_Animations.Default__DA_CharredSpirit_Animations_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_CharredSpirit_Animations_C* UDA_CharredSpirit_Animations_C::GetDefaultObj()
{
	static class UDA_CharredSpirit_Animations_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_CharredSpirit_Animations_C*>(UDA_CharredSpirit_Animations_C::StaticClass()->DefaultObject);

	return Default;
}

}


