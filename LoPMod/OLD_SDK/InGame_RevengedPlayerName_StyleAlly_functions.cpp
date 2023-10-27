#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InGame_RevengedPlayerName_StyleAlly.InGame_RevengedPlayerName_StyleAlly_C
// (None)

class UClass* UInGame_RevengedPlayerName_StyleAlly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InGame_RevengedPlayerName_StyleAlly_C");

	return Clss;
}


// InGame_RevengedPlayerName_StyleAlly_C InGame_RevengedPlayerName_StyleAlly.Default__InGame_RevengedPlayerName_StyleAlly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInGame_RevengedPlayerName_StyleAlly_C* UInGame_RevengedPlayerName_StyleAlly_C::GetDefaultObj()
{
	static class UInGame_RevengedPlayerName_StyleAlly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInGame_RevengedPlayerName_StyleAlly_C*>(UInGame_RevengedPlayerName_StyleAlly_C::StaticClass()->DefaultObject);

	return Default;
}

}


