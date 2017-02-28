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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_NodeListClass1817399820.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NodeScript
struct  NodeScript_t1680550429  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean NodeScript::CurvePoint
	bool ___CurvePoint_2;
	// System.Boolean NodeScript::StopPoint
	bool ___StopPoint_3;
	// System.Boolean NodeScript::SmoothStopping
	bool ___SmoothStopping_4;
	// System.Single NodeScript::StopTime
	float ___StopTime_5;
	// System.Single NodeScript::EntryDistance
	float ___EntryDistance_6;
	// System.Single NodeScript::ExitDistance
	float ___ExitDistance_7;
	// System.Single NodeScript::Speed
	float ___Speed_8;
	// UnityEngine.GameObject NodeScript::BefNode
	GameObject_t1756533147 * ___BefNode_9;
	// UnityEngine.GameObject NodeScript::AftNode
	GameObject_t1756533147 * ___AftNode_10;
	// UnityEngine.Vector3 NodeScript::CurveStartPoint
	Vector3_t2243707580  ___CurveStartPoint_11;
	// UnityEngine.Vector3 NodeScript::CurveEndPoint
	Vector3_t2243707580  ___CurveEndPoint_12;
	// UnityEngine.GameObject NodeScript::Car
	GameObject_t1756533147 * ___Car_13;
	// NodeListClass NodeScript::ThisNodeClass
	NodeListClass_t1817399820  ___ThisNodeClass_14;

public:
	inline static int32_t get_offset_of_CurvePoint_2() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___CurvePoint_2)); }
	inline bool get_CurvePoint_2() const { return ___CurvePoint_2; }
	inline bool* get_address_of_CurvePoint_2() { return &___CurvePoint_2; }
	inline void set_CurvePoint_2(bool value)
	{
		___CurvePoint_2 = value;
	}

	inline static int32_t get_offset_of_StopPoint_3() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___StopPoint_3)); }
	inline bool get_StopPoint_3() const { return ___StopPoint_3; }
	inline bool* get_address_of_StopPoint_3() { return &___StopPoint_3; }
	inline void set_StopPoint_3(bool value)
	{
		___StopPoint_3 = value;
	}

	inline static int32_t get_offset_of_SmoothStopping_4() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___SmoothStopping_4)); }
	inline bool get_SmoothStopping_4() const { return ___SmoothStopping_4; }
	inline bool* get_address_of_SmoothStopping_4() { return &___SmoothStopping_4; }
	inline void set_SmoothStopping_4(bool value)
	{
		___SmoothStopping_4 = value;
	}

	inline static int32_t get_offset_of_StopTime_5() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___StopTime_5)); }
	inline float get_StopTime_5() const { return ___StopTime_5; }
	inline float* get_address_of_StopTime_5() { return &___StopTime_5; }
	inline void set_StopTime_5(float value)
	{
		___StopTime_5 = value;
	}

	inline static int32_t get_offset_of_EntryDistance_6() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___EntryDistance_6)); }
	inline float get_EntryDistance_6() const { return ___EntryDistance_6; }
	inline float* get_address_of_EntryDistance_6() { return &___EntryDistance_6; }
	inline void set_EntryDistance_6(float value)
	{
		___EntryDistance_6 = value;
	}

	inline static int32_t get_offset_of_ExitDistance_7() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___ExitDistance_7)); }
	inline float get_ExitDistance_7() const { return ___ExitDistance_7; }
	inline float* get_address_of_ExitDistance_7() { return &___ExitDistance_7; }
	inline void set_ExitDistance_7(float value)
	{
		___ExitDistance_7 = value;
	}

	inline static int32_t get_offset_of_Speed_8() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___Speed_8)); }
	inline float get_Speed_8() const { return ___Speed_8; }
	inline float* get_address_of_Speed_8() { return &___Speed_8; }
	inline void set_Speed_8(float value)
	{
		___Speed_8 = value;
	}

	inline static int32_t get_offset_of_BefNode_9() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___BefNode_9)); }
	inline GameObject_t1756533147 * get_BefNode_9() const { return ___BefNode_9; }
	inline GameObject_t1756533147 ** get_address_of_BefNode_9() { return &___BefNode_9; }
	inline void set_BefNode_9(GameObject_t1756533147 * value)
	{
		___BefNode_9 = value;
		Il2CppCodeGenWriteBarrier(&___BefNode_9, value);
	}

	inline static int32_t get_offset_of_AftNode_10() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___AftNode_10)); }
	inline GameObject_t1756533147 * get_AftNode_10() const { return ___AftNode_10; }
	inline GameObject_t1756533147 ** get_address_of_AftNode_10() { return &___AftNode_10; }
	inline void set_AftNode_10(GameObject_t1756533147 * value)
	{
		___AftNode_10 = value;
		Il2CppCodeGenWriteBarrier(&___AftNode_10, value);
	}

	inline static int32_t get_offset_of_CurveStartPoint_11() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___CurveStartPoint_11)); }
	inline Vector3_t2243707580  get_CurveStartPoint_11() const { return ___CurveStartPoint_11; }
	inline Vector3_t2243707580 * get_address_of_CurveStartPoint_11() { return &___CurveStartPoint_11; }
	inline void set_CurveStartPoint_11(Vector3_t2243707580  value)
	{
		___CurveStartPoint_11 = value;
	}

	inline static int32_t get_offset_of_CurveEndPoint_12() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___CurveEndPoint_12)); }
	inline Vector3_t2243707580  get_CurveEndPoint_12() const { return ___CurveEndPoint_12; }
	inline Vector3_t2243707580 * get_address_of_CurveEndPoint_12() { return &___CurveEndPoint_12; }
	inline void set_CurveEndPoint_12(Vector3_t2243707580  value)
	{
		___CurveEndPoint_12 = value;
	}

	inline static int32_t get_offset_of_Car_13() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___Car_13)); }
	inline GameObject_t1756533147 * get_Car_13() const { return ___Car_13; }
	inline GameObject_t1756533147 ** get_address_of_Car_13() { return &___Car_13; }
	inline void set_Car_13(GameObject_t1756533147 * value)
	{
		___Car_13 = value;
		Il2CppCodeGenWriteBarrier(&___Car_13, value);
	}

	inline static int32_t get_offset_of_ThisNodeClass_14() { return static_cast<int32_t>(offsetof(NodeScript_t1680550429, ___ThisNodeClass_14)); }
	inline NodeListClass_t1817399820  get_ThisNodeClass_14() const { return ___ThisNodeClass_14; }
	inline NodeListClass_t1817399820 * get_address_of_ThisNodeClass_14() { return &___ThisNodeClass_14; }
	inline void set_ThisNodeClass_14(NodeListClass_t1817399820  value)
	{
		___ThisNodeClass_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
