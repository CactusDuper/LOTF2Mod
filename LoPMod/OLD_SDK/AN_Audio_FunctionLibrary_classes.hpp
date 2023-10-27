#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass AN_Audio_FunctionLibrary.AN_Audio_FunctionLibrary_C
class UAN_Audio_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAN_Audio_FunctionLibrary_C* GetDefaultObj();

	void GetMCAKWorldLocation(class UAkComponent*& InputAkComp, class UObject* __WorldContext, struct FVector* MCAkWorldLocation, bool* ValidLocation, class UAkComponent* NewLocalVar, bool CallFunc_GetMCAKComponent_validAkComp, class UAkComponent* CallFunc_GetMCAKComponent_PlayerAkComp, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void GetMCAKComponent(class UObject* __WorldContext, bool* ValidAkComp, class UAkComponent** PlayerAkComp, class ACharacter* CallFunc_GetLocalPlayer_LocalPlayerCharacter, bool CallFunc_IsValid_ReturnValue, class UAkComponent* CallFunc_AddComponentByClass_ReturnValue, class UAkComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void IsLocalPlayer(class AActor* Actor, class UObject* __WorldContext, bool* IsLocalPlayer, class ACharacter* CallFunc_GetLocalPlayer_LocalPlayerCharacter, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void GetLocalPlayer(class UObject* __WorldContext, class ACharacter** LocalPlayerCharacter, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue);
};

}


