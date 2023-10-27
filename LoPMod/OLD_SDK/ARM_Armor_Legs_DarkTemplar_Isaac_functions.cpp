#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARM_Armor_Legs_DarkTemplar_Isaac.ARM_Armor_Legs_DarkTemplar_Isaac_C
// (None)

class UClass* UARM_Armor_Legs_DarkTemplar_Isaac_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARM_Armor_Legs_DarkTemplar_Isaac_C");

	return Clss;
}


// ARM_Armor_Legs_DarkTemplar_Isaac_C ARM_Armor_Legs_DarkTemplar_Isaac.Default__ARM_Armor_Legs_DarkTemplar_Isaac_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARM_Armor_Legs_DarkTemplar_Isaac_C* UARM_Armor_Legs_DarkTemplar_Isaac_C::GetDefaultObj()
{
	static class UARM_Armor_Legs_DarkTemplar_Isaac_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARM_Armor_Legs_DarkTemplar_Isaac_C*>(UARM_Armor_Legs_DarkTemplar_Isaac_C::StaticClass()->DefaultObject);

	return Default;
}

}


