#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_RespawnToUmbral.GA_RespawnToUmbral_C
// (None)

class UClass* UGA_RespawnToUmbral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_RespawnToUmbral_C");

	return Clss;
}


// GA_RespawnToUmbral_C GA_RespawnToUmbral.Default__GA_RespawnToUmbral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_RespawnToUmbral_C* UGA_RespawnToUmbral_C::GetDefaultObj()
{
	static class UGA_RespawnToUmbral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_RespawnToUmbral_C*>(UGA_RespawnToUmbral_C::StaticClass()->DefaultObject);

	return Default;
}

}


