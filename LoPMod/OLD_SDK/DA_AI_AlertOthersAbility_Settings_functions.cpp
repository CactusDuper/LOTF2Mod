#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_AI_AlertOthersAbility_Settings.DA_AI_AlertOthersAbility_Settings_C
// (None)

class UClass* UDA_AI_AlertOthersAbility_Settings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_AI_AlertOthersAbility_Settings_C");

	return Clss;
}


// DA_AI_AlertOthersAbility_Settings_C DA_AI_AlertOthersAbility_Settings.Default__DA_AI_AlertOthersAbility_Settings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_AI_AlertOthersAbility_Settings_C* UDA_AI_AlertOthersAbility_Settings_C::GetDefaultObj()
{
	static class UDA_AI_AlertOthersAbility_Settings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_AI_AlertOthersAbility_Settings_C*>(UDA_AI_AlertOthersAbility_Settings_C::StaticClass()->DefaultObject);

	return Default;
}

}


