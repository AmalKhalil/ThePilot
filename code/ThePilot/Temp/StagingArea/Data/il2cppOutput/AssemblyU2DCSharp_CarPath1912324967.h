#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<NodeListClass>
struct List_1_t1186520952;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CarPath
struct  CarPath_t1912324967  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CarPath::Nodes
	List_1_t1125654279 * ___Nodes_2;
	// System.Collections.Generic.List`1<NodeListClass> CarPath::NodesProperties
	List_1_t1186520952 * ___NodesProperties_3;
	// System.Single CarPath::RotationSpeed
	float ___RotationSpeed_4;
	// System.Int32 CarPath::NumberOfTurnPoints
	int32_t ___NumberOfTurnPoints_5;
	// System.Single CarPath::NodeThreshold
	float ___NodeThreshold_6;
	// System.Boolean CarPath::Repeat
	bool ___Repeat_7;
	// System.Boolean CarPath::ReverseDirections
	bool ___ReverseDirections_8;
	// System.Boolean CarPath::SingleSpeedForAllNodes
	bool ___SingleSpeedForAllNodes_9;
	// System.Single CarPath::SingleSpeed
	float ___SingleSpeed_10;
	// UnityEngine.GameObject CarPath::NodeParent
	GameObject_t1756533147 * ___NodeParent_11;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> CarPath::points
	List_1_t1612828712 * ___points_12;
	// System.Collections.IEnumerator CarPath::ienum
	Il2CppObject * ___ienum_13;
	// UnityEngine.Quaternion CarPath::SampledRotation
	Quaternion_t4030073918  ___SampledRotation_14;
	// System.Single CarPath::OriginalSpeed
	float ___OriginalSpeed_15;

public:
	inline static int32_t get_offset_of_Nodes_2() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___Nodes_2)); }
	inline List_1_t1125654279 * get_Nodes_2() const { return ___Nodes_2; }
	inline List_1_t1125654279 ** get_address_of_Nodes_2() { return &___Nodes_2; }
	inline void set_Nodes_2(List_1_t1125654279 * value)
	{
		___Nodes_2 = value;
		Il2CppCodeGenWriteBarrier(&___Nodes_2, value);
	}

	inline static int32_t get_offset_of_NodesProperties_3() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___NodesProperties_3)); }
	inline List_1_t1186520952 * get_NodesProperties_3() const { return ___NodesProperties_3; }
	inline List_1_t1186520952 ** get_address_of_NodesProperties_3() { return &___NodesProperties_3; }
	inline void set_NodesProperties_3(List_1_t1186520952 * value)
	{
		___NodesProperties_3 = value;
		Il2CppCodeGenWriteBarrier(&___NodesProperties_3, value);
	}

	inline static int32_t get_offset_of_RotationSpeed_4() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___RotationSpeed_4)); }
	inline float get_RotationSpeed_4() const { return ___RotationSpeed_4; }
	inline float* get_address_of_RotationSpeed_4() { return &___RotationSpeed_4; }
	inline void set_RotationSpeed_4(float value)
	{
		___RotationSpeed_4 = value;
	}

	inline static int32_t get_offset_of_NumberOfTurnPoints_5() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___NumberOfTurnPoints_5)); }
	inline int32_t get_NumberOfTurnPoints_5() const { return ___NumberOfTurnPoints_5; }
	inline int32_t* get_address_of_NumberOfTurnPoints_5() { return &___NumberOfTurnPoints_5; }
	inline void set_NumberOfTurnPoints_5(int32_t value)
	{
		___NumberOfTurnPoints_5 = value;
	}

	inline static int32_t get_offset_of_NodeThreshold_6() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___NodeThreshold_6)); }
	inline float get_NodeThreshold_6() const { return ___NodeThreshold_6; }
	inline float* get_address_of_NodeThreshold_6() { return &___NodeThreshold_6; }
	inline void set_NodeThreshold_6(float value)
	{
		___NodeThreshold_6 = value;
	}

	inline static int32_t get_offset_of_Repeat_7() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___Repeat_7)); }
	inline bool get_Repeat_7() const { return ___Repeat_7; }
	inline bool* get_address_of_Repeat_7() { return &___Repeat_7; }
	inline void set_Repeat_7(bool value)
	{
		___Repeat_7 = value;
	}

	inline static int32_t get_offset_of_ReverseDirections_8() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___ReverseDirections_8)); }
	inline bool get_ReverseDirections_8() const { return ___ReverseDirections_8; }
	inline bool* get_address_of_ReverseDirections_8() { return &___ReverseDirections_8; }
	inline void set_ReverseDirections_8(bool value)
	{
		___ReverseDirections_8 = value;
	}

	inline static int32_t get_offset_of_SingleSpeedForAllNodes_9() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___SingleSpeedForAllNodes_9)); }
	inline bool get_SingleSpeedForAllNodes_9() const { return ___SingleSpeedForAllNodes_9; }
	inline bool* get_address_of_SingleSpeedForAllNodes_9() { return &___SingleSpeedForAllNodes_9; }
	inline void set_SingleSpeedForAllNodes_9(bool value)
	{
		___SingleSpeedForAllNodes_9 = value;
	}

	inline static int32_t get_offset_of_SingleSpeed_10() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___SingleSpeed_10)); }
	inline float get_SingleSpeed_10() const { return ___SingleSpeed_10; }
	inline float* get_address_of_SingleSpeed_10() { return &___SingleSpeed_10; }
	inline void set_SingleSpeed_10(float value)
	{
		___SingleSpeed_10 = value;
	}

	inline static int32_t get_offset_of_NodeParent_11() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___NodeParent_11)); }
	inline GameObject_t1756533147 * get_NodeParent_11() const { return ___NodeParent_11; }
	inline GameObject_t1756533147 ** get_address_of_NodeParent_11() { return &___NodeParent_11; }
	inline void set_NodeParent_11(GameObject_t1756533147 * value)
	{
		___NodeParent_11 = value;
		Il2CppCodeGenWriteBarrier(&___NodeParent_11, value);
	}

	inline static int32_t get_offset_of_points_12() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___points_12)); }
	inline List_1_t1612828712 * get_points_12() const { return ___points_12; }
	inline List_1_t1612828712 ** get_address_of_points_12() { return &___points_12; }
	inline void set_points_12(List_1_t1612828712 * value)
	{
		___points_12 = value;
		Il2CppCodeGenWriteBarrier(&___points_12, value);
	}

	inline static int32_t get_offset_of_ienum_13() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___ienum_13)); }
	inline Il2CppObject * get_ienum_13() const { return ___ienum_13; }
	inline Il2CppObject ** get_address_of_ienum_13() { return &___ienum_13; }
	inline void set_ienum_13(Il2CppObject * value)
	{
		___ienum_13 = value;
		Il2CppCodeGenWriteBarrier(&___ienum_13, value);
	}

	inline static int32_t get_offset_of_SampledRotation_14() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___SampledRotation_14)); }
	inline Quaternion_t4030073918  get_SampledRotation_14() const { return ___SampledRotation_14; }
	inline Quaternion_t4030073918 * get_address_of_SampledRotation_14() { return &___SampledRotation_14; }
	inline void set_SampledRotation_14(Quaternion_t4030073918  value)
	{
		___SampledRotation_14 = value;
	}

	inline static int32_t get_offset_of_OriginalSpeed_15() { return static_cast<int32_t>(offsetof(CarPath_t1912324967, ___OriginalSpeed_15)); }
	inline float get_OriginalSpeed_15() const { return ___OriginalSpeed_15; }
	inline float* get_address_of_OriginalSpeed_15() { return &___OriginalSpeed_15; }
	inline void set_OriginalSpeed_15(float value)
	{
		___OriginalSpeed_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
