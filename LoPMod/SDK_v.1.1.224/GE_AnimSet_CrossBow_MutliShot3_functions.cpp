#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AnimSet_CrossBow_MutliShot3.GE_AnimSet_CrossBow_MutliShot3_C
// (None)

class UClass* UGE_AnimSet_CrossBow_MutliShot3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AnimSet_CrossBow_MutliShot3_C");

	return Clss;
}


// GE_AnimSet_CrossBow_MutliShot3_C GE_AnimSet_CrossBow_MutliShot3.Default__GE_AnimSet_CrossBow_MutliShot3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AnimSet_CrossBow_MutliShot3_C* UGE_AnimSet_CrossBow_MutliShot3_C::GetDefaultObj()
{
	static class UGE_AnimSet_CrossBow_MutliShot3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AnimSet_CrossBow_MutliShot3_C*>(UGE_AnimSet_CrossBow_MutliShot3_C::StaticClass()->DefaultObject);

	return Default;
}

}


