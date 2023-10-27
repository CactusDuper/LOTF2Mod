#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Traps.BPI_Traps_C
// (None)

class UClass* IBPI_Traps_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Traps_C");

	return Clss;
}


// BPI_Traps_C BPI_Traps.Default__BPI_Traps_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Traps_C* IBPI_Traps_C::GetDefaultObj()
{
	static class IBPI_Traps_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Traps_C*>(IBPI_Traps_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Traps.BPI_Traps_C.BPI_Trap_Activate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActivatingEntity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Traps_C::BPI_Trap_Activate(class AActor* ActivatingEntity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Traps_C", "BPI_Trap_Activate");

	Params::IBPI_Traps_C_BPI_Trap_Activate_Params Parms{};

	Parms.ActivatingEntity = ActivatingEntity;

	UObject::ProcessEvent(Func, &Parms);

}

}


