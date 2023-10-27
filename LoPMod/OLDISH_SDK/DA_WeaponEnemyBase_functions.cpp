#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_WeaponEnemyBase.DA_WeaponEnemyBase_C
// (None)

class UClass* UDA_WeaponEnemyBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_WeaponEnemyBase_C");

	return Clss;
}


// DA_WeaponEnemyBase_C DA_WeaponEnemyBase.Default__DA_WeaponEnemyBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_WeaponEnemyBase_C* UDA_WeaponEnemyBase_C::GetDefaultObj()
{
	static class UDA_WeaponEnemyBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_WeaponEnemyBase_C*>(UDA_WeaponEnemyBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


