#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GrantPreventDeath_OnForcedToUmbral.GE_GrantPreventDeath_OnForcedToUmbral_C
// (None)

class UClass* UGE_GrantPreventDeath_OnForcedToUmbral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GrantPreventDeath_OnForcedToUmbral_C");

	return Clss;
}


// GE_GrantPreventDeath_OnForcedToUmbral_C GE_GrantPreventDeath_OnForcedToUmbral.Default__GE_GrantPreventDeath_OnForcedToUmbral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GrantPreventDeath_OnForcedToUmbral_C* UGE_GrantPreventDeath_OnForcedToUmbral_C::GetDefaultObj()
{
	static class UGE_GrantPreventDeath_OnForcedToUmbral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GrantPreventDeath_OnForcedToUmbral_C*>(UGE_GrantPreventDeath_OnForcedToUmbral_C::StaticClass()->DefaultObject);

	return Default;
}

}

