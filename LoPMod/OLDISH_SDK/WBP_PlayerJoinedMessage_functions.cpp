#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerJoinedMessage.WBP_PlayerJoinedMessage_C
// (None)

class UClass* UWBP_PlayerJoinedMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerJoinedMessage_C");

	return Clss;
}


// WBP_PlayerJoinedMessage_C WBP_PlayerJoinedMessage.Default__WBP_PlayerJoinedMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerJoinedMessage_C* UWBP_PlayerJoinedMessage_C::GetDefaultObj()
{
	static class UWBP_PlayerJoinedMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerJoinedMessage_C*>(UWBP_PlayerJoinedMessage_C::StaticClass()->DefaultObject);

	return Default;
}

}


