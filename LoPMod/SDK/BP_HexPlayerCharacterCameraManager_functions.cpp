#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HexPlayerCharacterCameraManager.BP_HexPlayerCharacterCameraManager_C
// (Actor)

class UClass* ABP_HexPlayerCharacterCameraManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HexPlayerCharacterCameraManager_C");

	return Clss;
}


// BP_HexPlayerCharacterCameraManager_C BP_HexPlayerCharacterCameraManager.Default__BP_HexPlayerCharacterCameraManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HexPlayerCharacterCameraManager_C* ABP_HexPlayerCharacterCameraManager_C::GetDefaultObj()
{
	static class ABP_HexPlayerCharacterCameraManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HexPlayerCharacterCameraManager_C*>(ABP_HexPlayerCharacterCameraManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


