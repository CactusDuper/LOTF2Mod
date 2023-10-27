#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ingame_UsableItem_Amount_Style.Ingame_UsableItem_Amount_Style_C
// (None)

class UClass* UIngame_UsableItem_Amount_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ingame_UsableItem_Amount_Style_C");

	return Clss;
}


// Ingame_UsableItem_Amount_Style_C Ingame_UsableItem_Amount_Style.Default__Ingame_UsableItem_Amount_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIngame_UsableItem_Amount_Style_C* UIngame_UsableItem_Amount_Style_C::GetDefaultObj()
{
	static class UIngame_UsableItem_Amount_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIngame_UsableItem_Amount_Style_C*>(UIngame_UsableItem_Amount_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


