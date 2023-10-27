#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SaveGame_LocationName_Style.SaveGame_LocationName_Style_C
// (None)

class UClass* USaveGame_LocationName_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveGame_LocationName_Style_C");

	return Clss;
}


// SaveGame_LocationName_Style_C SaveGame_LocationName_Style.Default__SaveGame_LocationName_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USaveGame_LocationName_Style_C* USaveGame_LocationName_Style_C::GetDefaultObj()
{
	static class USaveGame_LocationName_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveGame_LocationName_Style_C*>(USaveGame_LocationName_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


