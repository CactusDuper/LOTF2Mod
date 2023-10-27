#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Interactible_Object.BPI_Interactible_Object_C
// (None)

class UClass* IBPI_Interactible_Object_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Interactible_Object_C");

	return Clss;
}


// BPI_Interactible_Object_C BPI_Interactible_Object.Default__BPI_Interactible_Object_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Interactible_Object_C* IBPI_Interactible_Object_C::GetDefaultObj()
{
	static class IBPI_Interactible_Object_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Interactible_Object_C*>(IBPI_Interactible_Object_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Interactible_Object.BPI_Interactible_Object_C.BPI Close Portculis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Interactible_Object_C::BPI_Close_Portculis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Interactible_Object_C", "BPI Close Portculis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Interactible_Object.BPI_Interactible_Object_C.BPI Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor_that_called                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InteractorPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Interactible_Object_C::BPI_Interact(class AActor* Actor_that_called, class AActor* InteractorPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Interactible_Object_C", "BPI Interact");

	Params::IBPI_Interactible_Object_C_BPI_Interact_Params Parms{};

	Parms.Actor_that_called = Actor_that_called;
	Parms.InteractorPlayer = InteractorPlayer;

	UObject::ProcessEvent(Func, &Parms);

}

}


