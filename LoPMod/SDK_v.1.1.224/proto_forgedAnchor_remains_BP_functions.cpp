#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass proto_forgedAnchor_remains_BP.proto_forgedAnchor_remains_BP_C
// (Actor)

class UClass* AProto_forgedAnchor_remains_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("proto_forgedAnchor_remains_BP_C");

	return Clss;
}


// proto_forgedAnchor_remains_BP_C proto_forgedAnchor_remains_BP.Default__proto_forgedAnchor_remains_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProto_forgedAnchor_remains_BP_C* AProto_forgedAnchor_remains_BP_C::GetDefaultObj()
{
	static class AProto_forgedAnchor_remains_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProto_forgedAnchor_remains_BP_C*>(AProto_forgedAnchor_remains_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


