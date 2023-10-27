#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InGame_BossName_Style.InGame_BossName_Style_C
// (None)

class UClass* UInGame_BossName_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InGame_BossName_Style_C");

	return Clss;
}


// InGame_BossName_Style_C InGame_BossName_Style.Default__InGame_BossName_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInGame_BossName_Style_C* UInGame_BossName_Style_C::GetDefaultObj()
{
	static class UInGame_BossName_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInGame_BossName_Style_C*>(UInGame_BossName_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


