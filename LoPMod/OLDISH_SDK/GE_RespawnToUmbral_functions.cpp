#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RespawnToUmbral.GE_RespawnToUmbral_C
// (None)

class UClass* UGE_RespawnToUmbral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RespawnToUmbral_C");

	return Clss;
}


// GE_RespawnToUmbral_C GE_RespawnToUmbral.Default__GE_RespawnToUmbral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RespawnToUmbral_C* UGE_RespawnToUmbral_C::GetDefaultObj()
{
	static class UGE_RespawnToUmbral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RespawnToUmbral_C*>(UGE_RespawnToUmbral_C::StaticClass()->DefaultObject);

	return Default;
}

}


