#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_Projectile_AbbessA_RollingArrowWave_Short_Parent.SAA_Projectile_AbbessA_RollingArrowWave_Short_Parent_C
// (None)

class UClass* USAA_Projectile_AbbessA_RollingArrowWave_Short_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_Projectile_AbbessA_RollingArrowWave_Short_Parent_C");

	return Clss;
}


// SAA_Projectile_AbbessA_RollingArrowWave_Short_Parent_C SAA_Projectile_AbbessA_RollingArrowWave_Short_Parent.Default__SAA_Projectile_AbbessA_RollingArrowWave_Short_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_Projectile_AbbessA_RollingArrowWave_Short_Parent_C* USAA_Projectile_AbbessA_RollingArrowWave_Short_Parent_C::GetDefaultObj()
{
	static class USAA_Projectile_AbbessA_RollingArrowWave_Short_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_Projectile_AbbessA_RollingArrowWave_Short_Parent_C*>(USAA_Projectile_AbbessA_RollingArrowWave_Short_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}


