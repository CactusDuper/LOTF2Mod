#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"
#include "../MemoryHacking.h"

namespace SDK
{

void InitGObjects()
{
	UObject::GObjects = reinterpret_cast<TUObjectArray*>(uintptr_t(GetModuleHandle(0)) + Offsets::GObjects);
	MemoryManager memoryManager;

	std::vector<void*> addrs = memoryManager.PatternScan("8B ?? ?? ?? ?? ?? 41 39 46 0C 7F 73", 1);
	auto gameBase = (uint64_t)GetModuleHandle(0);
	uintptr_t patternAddress = reinterpret_cast<uintptr_t>(addrs[0]);
	uintptr_t rva = patternAddress - gameBase;
	uint32_t GObjectOffsetBase = *reinterpret_cast<uint32_t*>(patternAddress + 2);
	int32 GObjectOffset = GObjectOffsetBase + 0x12 + rva;
	std::cout << "GO2: " << GObjectOffset << std::endl;

	//Offsets::GObjects = GObjectOffset;

	//UObject::GObjects = reinterpret_cast<TUObjectArray*>(uintptr_t(GetModuleHandle(0)) + GObjectOffset);

	auto test1 = reinterpret_cast<TUObjectArray*>(uintptr_t(GetModuleHandle(0)) + Offsets::GObjects);
	auto test2 = reinterpret_cast<TUObjectArray*>(uintptr_t(GetModuleHandle(0)) + GObjectOffset);

	std::cout << test1 << "  " << test2 << std::endl;


}		

FString FSoftObjectPtr::GetSubPathString()
{
	return ObjectID.SubPathString;
}

std::string FSoftObjectPtr::GetSubPathStringStr()
{
	return ObjectID.SubPathString.ToString();
}

template<class SoftObjectPath>
SoftObjectPath& FSoftObjectPtr::GetObjectPath()
{
	static_assert(std::is_same_v<SoftObjectPath, FSoftObjectPath>, "Only use this with FSoftObjectPath. This function is only templated as a workaround to C++ type-checks.");

	return reinterpret_cast<FSoftObjectPath&>(ObjectID);
}

void Dummy() { FSoftObjectPtr().GetObjectPath(); }


class UObject* FWeakObjectPtr::Get() const
{
	return UObject::GObjects->GetByIndex(ObjectIndex);
}

class UObject* FWeakObjectPtr::operator->() const
{
	return UObject::GObjects->GetByIndex(ObjectIndex);
}

bool FWeakObjectPtr::operator==(const FWeakObjectPtr& Other) const
{
	return ObjectIndex == Other.ObjectIndex;
}
bool FWeakObjectPtr::operator!=(const FWeakObjectPtr& Other) const
{
	return ObjectIndex != Other.ObjectIndex;
}

bool FWeakObjectPtr::operator==(const class UObject* Other) const
{
	return ObjectIndex == Other->Index;
}
bool FWeakObjectPtr::operator!=(const class UObject* Other) const
{
	return ObjectIndex != Other->Index;
}
}


