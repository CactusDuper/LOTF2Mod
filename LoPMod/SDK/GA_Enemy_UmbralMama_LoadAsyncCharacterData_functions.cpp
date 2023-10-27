#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Enemy_UmbralMama_LoadAsyncCharacterData.GA_Enemy_UmbralMama_LoadAsyncCharacterData_C
// (None)

class UClass* UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Enemy_UmbralMama_LoadAsyncCharacterData_C");

	return Clss;
}


// GA_Enemy_UmbralMama_LoadAsyncCharacterData_C GA_Enemy_UmbralMama_LoadAsyncCharacterData.Default__GA_Enemy_UmbralMama_LoadAsyncCharacterData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C* UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C::GetDefaultObj()
{
	static class UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C*>(UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Enemy_UmbralMama_LoadAsyncCharacterData.GA_Enemy_UmbralMama_LoadAsyncCharacterData_C.OnLoaded_281690F14DD6706C443F01AC2910F9BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C::OnLoaded_281690F14DD6706C443F01AC2910F9BF(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Enemy_UmbralMama_LoadAsyncCharacterData_C", "OnLoaded_281690F14DD6706C443F01AC2910F9BF");

	Params::UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C_OnLoaded_281690F14DD6706C443F01AC2910F9BF_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Enemy_UmbralMama_LoadAsyncCharacterData.GA_Enemy_UmbralMama_LoadAsyncCharacterData_C.OnLoaded_A550C0D54EF015DE1C1A0AA0CC032F04
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C::OnLoaded_A550C0D54EF015DE1C1A0AA0CC032F04(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Enemy_UmbralMama_LoadAsyncCharacterData_C", "OnLoaded_A550C0D54EF015DE1C1A0AA0CC032F04");

	Params::UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C_OnLoaded_A550C0D54EF015DE1C1A0AA0CC032F04_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Enemy_UmbralMama_LoadAsyncCharacterData.GA_Enemy_UmbralMama_LoadAsyncCharacterData_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Enemy_UmbralMama_LoadAsyncCharacterData_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Enemy_UmbralMama_LoadAsyncCharacterData.GA_Enemy_UmbralMama_LoadAsyncCharacterData_C.ExecuteUbergraph_GA_Enemy_UmbralMama_LoadAsyncCharacterData
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_FirstRun                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_MultiGate_Data                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MultiGate_ScratchBool                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_MultiGate_ScratchIndex                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C::ExecuteUbergraph_GA_Enemy_UmbralMama_LoadAsyncCharacterData(int32 EntryPoint, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Enemy_UmbralMama_LoadAsyncCharacterData_C", "ExecuteUbergraph_GA_Enemy_UmbralMama_LoadAsyncCharacterData");

	Params::UGA_Enemy_UmbralMama_LoadAsyncCharacterData_C_ExecuteUbergraph_GA_Enemy_UmbralMama_LoadAsyncCharacterData_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MultiGate_FirstRun = K2Node_MultiGate_FirstRun;
	Parms.K2Node_MultiGate_Data = K2Node_MultiGate_Data;
	Parms.K2Node_MultiGate_ScratchBool = K2Node_MultiGate_ScratchBool;
	Parms.K2Node_MultiGate_ScratchIndex = K2Node_MultiGate_ScratchIndex;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


