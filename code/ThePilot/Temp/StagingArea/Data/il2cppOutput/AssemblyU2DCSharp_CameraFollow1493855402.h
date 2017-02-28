#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t1493855402  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform CameraFollow::target
	Transform_t3275118058 * ___target_2;
	// System.Single CameraFollow::XOffset
	float ___XOffset_3;
	// System.Single CameraFollow::ZOffset
	float ___ZOffset_4;
	// UnityEngine.Quaternion CameraFollow::rot
	Quaternion_t4030073918  ___rot_5;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_XOffset_3() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___XOffset_3)); }
	inline float get_XOffset_3() const { return ___XOffset_3; }
	inline float* get_address_of_XOffset_3() { return &___XOffset_3; }
	inline void set_XOffset_3(float value)
	{
		___XOffset_3 = value;
	}

	inline static int32_t get_offset_of_ZOffset_4() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___ZOffset_4)); }
	inline float get_ZOffset_4() const { return ___ZOffset_4; }
	inline float* get_address_of_ZOffset_4() { return &___ZOffset_4; }
	inline void set_ZOffset_4(float value)
	{
		___ZOffset_4 = value;
	}

	inline static int32_t get_offset_of_rot_5() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___rot_5)); }
	inline Quaternion_t4030073918  get_rot_5() const { return ___rot_5; }
	inline Quaternion_t4030073918 * get_address_of_rot_5() { return &___rot_5; }
	inline void set_rot_5(Quaternion_t4030073918  value)
	{
		___rot_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
