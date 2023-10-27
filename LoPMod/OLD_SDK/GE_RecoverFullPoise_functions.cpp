#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RecoverFullPoise.GE_RecoverFullPoise_C
// (None)

class UClass* UGE_RecoverFullPoise_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RecoverFullPoise_C");

	return Clss;
}


// GE_RecoverFullPoise_C GE_RecoverFullPoise.Default__GE_RecoverFullPoise_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RecoverFullPoise_C* UGE_RecoverFullPoise_C::GetDefaultObj()
{
	static class UGE_RecoverFullPoise_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RecoverFullPoise_C*>(UGE_RecoverFullPoise_C::StaticClass()->DefaultObject);

	return Default;
}

}


