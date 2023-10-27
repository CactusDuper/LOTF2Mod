#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_Enemy_Pilgrim_Animations.DA_Enemy_Pilgrim_Animations_C
// (None)

class UClass* UDA_Enemy_Pilgrim_Animations_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_Enemy_Pilgrim_Animations_C");

	return Clss;
}


// DA_Enemy_Pilgrim_Animations_C DA_Enemy_Pilgrim_Animations.Default__DA_Enemy_Pilgrim_Animations_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_Enemy_Pilgrim_Animations_C* UDA_Enemy_Pilgrim_Animations_C::GetDefaultObj()
{
	static class UDA_Enemy_Pilgrim_Animations_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_Enemy_Pilgrim_Animations_C*>(UDA_Enemy_Pilgrim_Animations_C::StaticClass()->DefaultObject);

	return Default;
}

}


