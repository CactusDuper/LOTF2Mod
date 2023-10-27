#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_HeavyFirstCharge.AN_HeavyFirstCharge_C
// (None)

class UClass* UAN_HeavyFirstCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_HeavyFirstCharge_C");

	return Clss;
}


// AN_HeavyFirstCharge_C AN_HeavyFirstCharge.Default__AN_HeavyFirstCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_HeavyFirstCharge_C* UAN_HeavyFirstCharge_C::GetDefaultObj()
{
	static class UAN_HeavyFirstCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_HeavyFirstCharge_C*>(UAN_HeavyFirstCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


