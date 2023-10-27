#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PhotoModeDataInterface.BPI_PhotoModeDataInterface_C
// (None)

class UClass* IBPI_PhotoModeDataInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PhotoModeDataInterface_C");

	return Clss;
}


// BPI_PhotoModeDataInterface_C BPI_PhotoModeDataInterface.Default__BPI_PhotoModeDataInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PhotoModeDataInterface_C* IBPI_PhotoModeDataInterface_C::GetDefaultObj()
{
	static class IBPI_PhotoModeDataInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PhotoModeDataInterface_C*>(IBPI_PhotoModeDataInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PhotoModeDataInterface.BPI_PhotoModeDataInterface_C.TabToOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CommonButtonTab_C*      CommonButtonPressed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_PhotoModeDataInterface_C::TabToOpen(int32 TabIndex, class UWBP_CommonButtonTab_C* CommonButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PhotoModeDataInterface_C", "TabToOpen");

	Params::IBPI_PhotoModeDataInterface_C_TabToOpen_Params Parms{};

	Parms.TabIndex = TabIndex;
	Parms.CommonButtonPressed = CommonButtonPressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_PhotoModeDataInterface.BPI_PhotoModeDataInterface_C.SendPhotoData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSPhotosData                PhotoData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBPI_PhotoModeDataInterface_C::SendPhotoData(const struct FSPhotosData& PhotoData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PhotoModeDataInterface_C", "SendPhotoData");

	Params::IBPI_PhotoModeDataInterface_C_SendPhotoData_Params Parms{};

	Parms.PhotoData = PhotoData;

	UObject::ProcessEvent(Func, &Parms);

}

}


