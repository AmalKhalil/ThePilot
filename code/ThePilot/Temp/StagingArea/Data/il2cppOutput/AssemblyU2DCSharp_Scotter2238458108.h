#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Scotter
struct  Scotter_t2238458108  : public Il2CppObject
{
public:
	// System.Single Scotter::velocity
	float ___velocity_0;
	// System.Single Scotter::steeringAngle
	float ___steeringAngle_1;
	// System.Single Scotter::brakeTorque
	float ___brakeTorque_2;

public:
	inline static int32_t get_offset_of_velocity_0() { return static_cast<int32_t>(offsetof(Scotter_t2238458108, ___velocity_0)); }
	inline float get_velocity_0() const { return ___velocity_0; }
	inline float* get_address_of_velocity_0() { return &___velocity_0; }
	inline void set_velocity_0(float value)
	{
		___velocity_0 = value;
	}

	inline static int32_t get_offset_of_steeringAngle_1() { return static_cast<int32_t>(offsetof(Scotter_t2238458108, ___steeringAngle_1)); }
	inline float get_steeringAngle_1() const { return ___steeringAngle_1; }
	inline float* get_address_of_steeringAngle_1() { return &___steeringAngle_1; }
	inline void set_steeringAngle_1(float value)
	{
		___steeringAngle_1 = value;
	}

	inline static int32_t get_offset_of_brakeTorque_2() { return static_cast<int32_t>(offsetof(Scotter_t2238458108, ___brakeTorque_2)); }
	inline float get_brakeTorque_2() const { return ___brakeTorque_2; }
	inline float* get_address_of_brakeTorque_2() { return &___brakeTorque_2; }
	inline void set_brakeTorque_2(float value)
	{
		___brakeTorque_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
