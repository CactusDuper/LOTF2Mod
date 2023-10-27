#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EasyFog.BP_EasyFog_C
// (Actor)

class UClass* ABP_EasyFog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EasyFog_C");

	return Clss;
}


// BP_EasyFog_C BP_EasyFog.Default__BP_EasyFog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EasyFog_C* ABP_EasyFog_C::GetDefaultObj()
{
	static class ABP_EasyFog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EasyFog_C*>(ABP_EasyFog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EasyFog.BP_EasyFog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Source_Material                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_EasyFog_C::UserConstructionScript(class UStaticMesh* NewLocalVar, class UMaterialInterface* Source_Material, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EasyFog_C", "UserConstructionScript");

	Params::ABP_EasyFog_C_UserConstructionScript_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.Source_Material = Source_Material;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EasyFog.BP_EasyFog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EasyFog_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EasyFog_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EasyFog.BP_EasyFog_C.ExecuteUbergraph_BP_EasyFog
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EasyFog_C::ExecuteUbergraph_BP_EasyFog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EasyFog_C", "ExecuteUbergraph_BP_EasyFog");

	Params::ABP_EasyFog_C_ExecuteUbergraph_BP_EasyFog_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


