#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Enemy_AutoHyperArmor_LowPoise.GA_Enemy_AutoHyperArmor_LowPoise_C
// (None)

class UClass* UGA_Enemy_AutoHyperArmor_LowPoise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Enemy_AutoHyperArmor_LowPoise_C");

	return Clss;
}


// GA_Enemy_AutoHyperArmor_LowPoise_C GA_Enemy_AutoHyperArmor_LowPoise.Default__GA_Enemy_AutoHyperArmor_LowPoise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Enemy_AutoHyperArmor_LowPoise_C* UGA_Enemy_AutoHyperArmor_LowPoise_C::GetDefaultObj()
{
	static class UGA_Enemy_AutoHyperArmor_LowPoise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Enemy_AutoHyperArmor_LowPoise_C*>(UGA_Enemy_AutoHyperArmor_LowPoise_C::StaticClass()->DefaultObject);

	return Default;
}

}


