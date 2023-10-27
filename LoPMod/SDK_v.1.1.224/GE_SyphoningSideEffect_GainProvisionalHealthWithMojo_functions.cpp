#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SyphoningSideEffect_GainProvisionalHealthWithMojo.GE_SyphoningSideEffect_GainProvisionalHealthWithMojo_C
// (None)

class UClass* UGE_SyphoningSideEffect_GainProvisionalHealthWithMojo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SyphoningSideEffect_GainProvisionalHealthWithMojo_C");

	return Clss;
}


// GE_SyphoningSideEffect_GainProvisionalHealthWithMojo_C GE_SyphoningSideEffect_GainProvisionalHealthWithMojo.Default__GE_SyphoningSideEffect_GainProvisionalHealthWithMojo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SyphoningSideEffect_GainProvisionalHealthWithMojo_C* UGE_SyphoningSideEffect_GainProvisionalHealthWithMojo_C::GetDefaultObj()
{
	static class UGE_SyphoningSideEffect_GainProvisionalHealthWithMojo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SyphoningSideEffect_GainProvisionalHealthWithMojo_C*>(UGE_SyphoningSideEffect_GainProvisionalHealthWithMojo_C::StaticClass()->DefaultObject);

	return Default;
}

}


