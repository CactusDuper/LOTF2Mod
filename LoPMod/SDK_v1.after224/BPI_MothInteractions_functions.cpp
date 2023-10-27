#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_MothInteractions.BPI_MothInteractions_C
// (None)

class UClass* IBPI_MothInteractions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_MothInteractions_C");

	return Clss;
}


// BPI_MothInteractions_C BPI_MothInteractions.Default__BPI_MothInteractions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_MothInteractions_C* IBPI_MothInteractions_C::GetDefaultObj()
{
	static class IBPI_MothInteractions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_MothInteractions_C*>(IBPI_MothInteractions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_MothInteractions.BPI_MothInteractions_C.BPI_ResumeMothActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MothInteractions_C::BPI_ResumeMothActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MothInteractions_C", "BPI_ResumeMothActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_MothInteractions.BPI_MothInteractions_C.BPI MothActorRegister
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MothActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_MothInteractions_C::BPI_MothActorRegister(class AActor* MothActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MothInteractions_C", "BPI MothActorRegister");

	Params::IBPI_MothInteractions_C_BPI_MothActorRegister_Params Parms{};

	Parms.MothActor = MothActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MothInteractions.BPI_MothInteractions_C.BPI KillMothAtractor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MothInteractions_C::BPI_KillMothAtractor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MothInteractions_C", "BPI KillMothAtractor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_MothInteractions.BPI_MothInteractions_C.BPI_PauseMothActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MothInteractions_C::BPI_PauseMothActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MothInteractions_C", "BPI_PauseMothActor");



	UObject::ProcessEvent(Func, nullptr);

}

}


