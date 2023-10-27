#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SaveGame_CharName_Style.SaveGame_CharName_Style_C
// (None)

class UClass* USaveGame_CharName_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveGame_CharName_Style_C");

	return Clss;
}


// SaveGame_CharName_Style_C SaveGame_CharName_Style.Default__SaveGame_CharName_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USaveGame_CharName_Style_C* USaveGame_CharName_Style_C::GetDefaultObj()
{
	static class USaveGame_CharName_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveGame_CharName_Style_C*>(USaveGame_CharName_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


