#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Umbries_GrabToUmbral_DarkDamage.GE_Umbries_GrabToUmbral_DarkDamage_C
// (None)

class UClass* UGE_Umbries_GrabToUmbral_DarkDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Umbries_GrabToUmbral_DarkDamage_C");

	return Clss;
}


// GE_Umbries_GrabToUmbral_DarkDamage_C GE_Umbries_GrabToUmbral_DarkDamage.Default__GE_Umbries_GrabToUmbral_DarkDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Umbries_GrabToUmbral_DarkDamage_C* UGE_Umbries_GrabToUmbral_DarkDamage_C::GetDefaultObj()
{
	static class UGE_Umbries_GrabToUmbral_DarkDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Umbries_GrabToUmbral_DarkDamage_C*>(UGE_Umbries_GrabToUmbral_DarkDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


