#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FireGiant_DamageConnector.GE_FireGiant_DamageConnector_C
// (None)

class UClass* UGE_FireGiant_DamageConnector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FireGiant_DamageConnector_C");

	return Clss;
}


// GE_FireGiant_DamageConnector_C GE_FireGiant_DamageConnector.Default__GE_FireGiant_DamageConnector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FireGiant_DamageConnector_C* UGE_FireGiant_DamageConnector_C::GetDefaultObj()
{
	static class UGE_FireGiant_DamageConnector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FireGiant_DamageConnector_C*>(UGE_FireGiant_DamageConnector_C::StaticClass()->DefaultObject);

	return Default;
}

}


