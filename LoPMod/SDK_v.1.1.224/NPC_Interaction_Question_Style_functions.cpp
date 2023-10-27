#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Interaction_Question_Style.NPC_Interaction_Question_Style_C
// (None)

class UClass* UNPC_Interaction_Question_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Interaction_Question_Style_C");

	return Clss;
}


// NPC_Interaction_Question_Style_C NPC_Interaction_Question_Style.Default__NPC_Interaction_Question_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNPC_Interaction_Question_Style_C* UNPC_Interaction_Question_Style_C::GetDefaultObj()
{
	static class UNPC_Interaction_Question_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNPC_Interaction_Question_Style_C*>(UNPC_Interaction_Question_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


