#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Obera.OberaBPLibrary
class UOberaBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOberaBPLibrary* GetDefaultObj();

	void SetStringFieldInJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, const class FString& StringValue);
	void SetObjectFieldInJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, const struct FOberaJSonObject& ObjectValue);
	struct FOberaJSonValue SetJsonValueAsString(const struct FOberaJSonValue& Value, const class FString& StringValue);
	struct FOberaJSonValue SetJsonValueAsObject(const struct FOberaJSonValue& Value, const struct FOberaJSonObject& ObjectValue);
	struct FOberaJSonValue SetJsonValueAsFloat(const struct FOberaJSonValue& Value, float FloatValue);
	struct FOberaJSonValue SetJsonValueAsBool(const struct FOberaJSonValue& Value, bool BoolValue);
	struct FOberaJSonValue SetJsonValueAsArray(const struct FOberaJSonValue& Value, const TArray<struct FOberaJSonValue>& ArrayValue);
	void SetFloatFieldInJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, float FloatValue);
	void SetBoolFieldInJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, bool BoolValue);
	void SetArrayFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, const TArray<struct FOberaJSonValue>& ValueArray);
	bool SaveStringIntoFile(const class FString& Path, const class FString& StringToSvae);
	bool SaveJsonObjectIntoFile(const class FString& Path, const struct FOberaJSonObject& Object);
	struct FOberaJSonObject LoadJsonObjectFromFile(const class FString& Path, bool* Success);
	class FString LoadFileIntoString(const class FString& Path, bool* Success);
	bool GetStringFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, class FString* ReturnString);
	bool GetObjectFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, struct FOberaJSonObject* ReturnObject);
	bool GetJsonValueAsString(const struct FOberaJSonValue& Value, class FString* ReturnString);
	bool GetJsonValueAsObject(const struct FOberaJSonValue& Value, struct FOberaJSonObject* ReturnObject);
	bool GetJsonValueAsFloat(const struct FOberaJSonValue& Value, float* ReturnFloat);
	bool GetJsonValueAsBool(const struct FOberaJSonValue& Value, bool* ReturnBool);
	bool GetJsonValueAsArray(const struct FOberaJSonValue& Value, TArray<struct FOberaJSonValue>* ReturnArray);
	bool GetFloatFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, float* ReturnFloat);
	bool GetBoolFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, bool* ReturnBool);
	bool GetArrayFieldFromJsonObject(const struct FOberaJSonObject& Object, const class FString& Key, TArray<struct FOberaJSonValue>* ReturnArray);
};

}


