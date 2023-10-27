#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_DeepSparrow_CrashToGround_ToUmbral.SAA_DeepSparrow_CrashToGround_ToUmbral_C
// (None)

class UClass* USAA_DeepSparrow_CrashToGround_ToUmbral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_DeepSparrow_CrashToGround_ToUmbral_C");

	return Clss;
}


// SAA_DeepSparrow_CrashToGround_ToUmbral_C SAA_DeepSparrow_CrashToGround_ToUmbral.Default__SAA_DeepSparrow_CrashToGround_ToUmbral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_DeepSparrow_CrashToGround_ToUmbral_C* USAA_DeepSparrow_CrashToGround_ToUmbral_C::GetDefaultObj()
{
	static class USAA_DeepSparrow_CrashToGround_ToUmbral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_DeepSparrow_CrashToGround_ToUmbral_C*>(USAA_DeepSparrow_CrashToGround_ToUmbral_C::StaticClass()->DefaultObject);

	return Default;
}

}


