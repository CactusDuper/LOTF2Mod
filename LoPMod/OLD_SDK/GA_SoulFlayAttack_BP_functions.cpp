#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SoulFlayAttack_BP.GA_SoulFlayAttack_BP_C
// (None)

class UClass* UGA_SoulFlayAttack_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SoulFlayAttack_BP_C");

	return Clss;
}


// GA_SoulFlayAttack_BP_C GA_SoulFlayAttack_BP.Default__GA_SoulFlayAttack_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SoulFlayAttack_BP_C* UGA_SoulFlayAttack_BP_C::GetDefaultObj()
{
	static class UGA_SoulFlayAttack_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SoulFlayAttack_BP_C*>(UGA_SoulFlayAttack_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


