#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BETextDecorator.BP_BETextDecorator_C
// (None)

class UClass* UBP_BETextDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BETextDecorator_C");

	return Clss;
}


// BP_BETextDecorator_C BP_BETextDecorator.Default__BP_BETextDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BETextDecorator_C* UBP_BETextDecorator_C::GetDefaultObj()
{
	static class UBP_BETextDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BETextDecorator_C*>(UBP_BETextDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


