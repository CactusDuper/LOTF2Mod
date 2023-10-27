#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_MainPlayer_Animations.DA_MainPlayer_Animations_C
// (None)

class UClass* UDA_MainPlayer_Animations_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_MainPlayer_Animations_C");

	return Clss;
}


// DA_MainPlayer_Animations_C DA_MainPlayer_Animations.Default__DA_MainPlayer_Animations_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_MainPlayer_Animations_C* UDA_MainPlayer_Animations_C::GetDefaultObj()
{
	static class UDA_MainPlayer_Animations_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_MainPlayer_Animations_C*>(UDA_MainPlayer_Animations_C::StaticClass()->DefaultObject);

	return Default;
}

}


