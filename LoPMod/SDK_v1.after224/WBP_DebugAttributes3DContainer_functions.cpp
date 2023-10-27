#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DebugAttributes3DContainer.WBP_DebugAttributes3DContainer_C
// (None)

class UClass* UWBP_DebugAttributes3DContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DebugAttributes3DContainer_C");

	return Clss;
}


// WBP_DebugAttributes3DContainer_C WBP_DebugAttributes3DContainer.Default__WBP_DebugAttributes3DContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DebugAttributes3DContainer_C* UWBP_DebugAttributes3DContainer_C::GetDefaultObj()
{
	static class UWBP_DebugAttributes3DContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DebugAttributes3DContainer_C*>(UWBP_DebugAttributes3DContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DebugAttributes3DContainer.WBP_DebugAttributes3DContainer_C.HideAttributesDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DebugAttributes3DContainer_C::HideAttributesDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DebugAttributes3DContainer_C", "HideAttributesDebug");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DebugAttributes3DContainer.WBP_DebugAttributes3DContainer_C.DisplayAttributesDebug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DebugAttributes3D_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugAttributes3DContainer_C::DisplayAttributesDebug(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_DebugAttributes3D_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DebugAttributes3DContainer_C", "DisplayAttributesDebug");

	Params::UWBP_DebugAttributes3DContainer_C_DisplayAttributesDebug_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DebugAttributes3DContainer.WBP_DebugAttributes3DContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DebugAttributes3DContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DebugAttributes3DContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DebugAttributes3DContainer.WBP_DebugAttributes3DContainer_C.ExecuteUbergraph_WBP_DebugAttributes3DContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugAttributes3DContainer_C::ExecuteUbergraph_WBP_DebugAttributes3DContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DebugAttributes3DContainer_C", "ExecuteUbergraph_WBP_DebugAttributes3DContainer");

	Params::UWBP_DebugAttributes3DContainer_C_ExecuteUbergraph_WBP_DebugAttributes3DContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


