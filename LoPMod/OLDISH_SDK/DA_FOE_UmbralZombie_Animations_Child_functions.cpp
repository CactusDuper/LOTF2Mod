#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_FOE_UmbralZombie_Animations_Child.DA_FOE_UmbralZombie_Animations_Child_C
// (None)

class UClass* UDA_FOE_UmbralZombie_Animations_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_FOE_UmbralZombie_Animations_Child_C");

	return Clss;
}


// DA_FOE_UmbralZombie_Animations_Child_C DA_FOE_UmbralZombie_Animations_Child.Default__DA_FOE_UmbralZombie_Animations_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_FOE_UmbralZombie_Animations_Child_C* UDA_FOE_UmbralZombie_Animations_Child_C::GetDefaultObj()
{
	static class UDA_FOE_UmbralZombie_Animations_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_FOE_UmbralZombie_Animations_Child_C*>(UDA_FOE_UmbralZombie_Animations_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


