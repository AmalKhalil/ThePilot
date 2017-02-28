#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NodeListClass
struct  NodeListClass_t1817399820 
{
public:
	// UnityEngine.GameObject NodeListClass::Node
	GameObject_t1756533147 * ___Node_0;
	// System.Single NodeListClass::Speed
	float ___Speed_1;

public:
	inline static int32_t get_offset_of_Node_0() { return static_cast<int32_t>(offsetof(NodeListClass_t1817399820, ___Node_0)); }
	inline GameObject_t1756533147 * get_Node_0() const { return ___Node_0; }
	inline GameObject_t1756533147 ** get_address_of_Node_0() { return &___Node_0; }
	inline void set_Node_0(GameObject_t1756533147 * value)
	{
		___Node_0 = value;
		Il2CppCodeGenWriteBarrier(&___Node_0, value);
	}

	inline static int32_t get_offset_of_Speed_1() { return static_cast<int32_t>(offsetof(NodeListClass_t1817399820, ___Speed_1)); }
	inline float get_Speed_1() const { return ___Speed_1; }
	inline float* get_address_of_Speed_1() { return &___Speed_1; }
	inline void set_Speed_1(float value)
	{
		___Speed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of NodeListClass
struct NodeListClass_t1817399820_marshaled_pinvoke
{
	GameObject_t1756533147 * ___Node_0;
	float ___Speed_1;
};
// Native definition for COM marshalling of NodeListClass
struct NodeListClass_t1817399820_marshaled_com
{
	GameObject_t1756533147 * ___Node_0;
	float ___Speed_1;
};
