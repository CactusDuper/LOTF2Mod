#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Game_Intro_01b.BP_Game_Intro_01b_C
// (Actor)

class UClass* ABP_Game_Intro_01b_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Game_Intro_01b_C");

	return Clss;
}


// BP_Game_Intro_01b_C BP_Game_Intro_01b.Default__BP_Game_Intro_01b_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Game_Intro_01b_C* ABP_Game_Intro_01b_C::GetDefaultObj()
{
	static class ABP_Game_Intro_01b_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Game_Intro_01b_C*>(ABP_Game_Intro_01b_C::StaticClass()->DefaultObject);

	return Default;
}

}


