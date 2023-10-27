#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_PLA_CB_CrossbowBase.WP_PLA_CB_CrossbowBase_C
// (None)

class UClass* UWP_PLA_CB_CrossbowBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_PLA_CB_CrossbowBase_C");

	return Clss;
}


// WP_PLA_CB_CrossbowBase_C WP_PLA_CB_CrossbowBase.Default__WP_PLA_CB_CrossbowBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_PLA_CB_CrossbowBase_C* UWP_PLA_CB_CrossbowBase_C::GetDefaultObj()
{
	static class UWP_PLA_CB_CrossbowBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_PLA_CB_CrossbowBase_C*>(UWP_PLA_CB_CrossbowBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


