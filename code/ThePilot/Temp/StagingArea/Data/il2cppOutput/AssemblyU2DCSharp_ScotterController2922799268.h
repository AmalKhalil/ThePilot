#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WheelCollider
struct WheelCollider_t785806275;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Scotter
struct Scotter_t2238458108;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// GameManager
struct GameManager_t2252321495;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScotterController
struct  ScotterController_t2922799268  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ScotterController::motorForce
	float ___motorForce_2;
	// System.Single ScotterController::steerForce
	float ___steerForce_3;
	// System.Single ScotterController::brakeForce
	float ___brakeForce_4;
	// System.Single ScotterController::maxLowVelocity
	float ___maxLowVelocity_5;
	// UnityEngine.WheelCollider ScotterController::frontWheel
	WheelCollider_t785806275 * ___frontWheel_6;
	// UnityEngine.WheelCollider ScotterController::rearWheel
	WheelCollider_t785806275 * ___rearWheel_7;
	// UnityEngine.GameObject ScotterController::stearing
	GameObject_t1756533147 * ___stearing_8;
	// Scotter ScotterController::scotter
	Scotter_t2238458108 * ___scotter_9;
	// UnityEngine.Rigidbody ScotterController::scotterRigidbody
	Rigidbody_t4233889191 * ___scotterRigidbody_10;
	// GameManager ScotterController::gameManager
	GameManager_t2252321495 * ___gameManager_11;

public:
	inline static int32_t get_offset_of_motorForce_2() { return static_cast<int32_t>(offsetof(ScotterController_t2922799268, ___motorForce_2)); }
	inline float get_motorForce_2() const { return ___motorForce_2; }
	inline float* get_address_of_motorForce_2() { return &___motorForce_2; }
	inline void set_motorForce_2(float value)
	{
		___motorForce_2 = value;
	}

	inline static int32_t get_offset_of_steerForce_3() { return static_cast<int32_t>(offsetof(ScotterController_t2922799268, ___steerForce_3)); }
	inline float get_steerForce_3() const { return ___steerForce_3; }
	inline float* get_address_of_steerForce_3() { return &___steerForce_3; }
	inline void set_steerForce_3(float value)
	{
		___steerForce_3 = value;
	}

	inline static int32_t get_offset_of_brakeForce_4() { return static_cast<int32_t>(offsetof(ScotterController_t2922799268, ___brakeForce_4)); }
	inline float get_brakeForce_4() const { return ___brakeForce_4; }
	inline float* get_address_of_brakeForce_4() { return &___brakeForce_4; }
	inline void set_brakeForce_4(float value)
	{
		___brakeForce_4 = value;
	}

	inline static int32_t get_offset_of_maxLowVelocity_5() { return static_cast<int32_t>(offsetof(ScotterController_t2922799268, ___maxLowVelocity_5)); }
	inline float get_maxLowVelocity_5() const { return ___maxLowVelocity_5; }
	inline float* get_address_of_maxLowVelocity_5() { return &___maxLowVelocity_5; }
	inline void set_maxLowVelocity_5(float value)
	{
		___maxLowVelocity_5 = value;
	}

	inline static int32_t get_offset_of_frontWheel_6() { return static_cast<int32_t>(offsetof(ScotterController_t2922799268, ___frontWheel_6)); }
	inline WheelCollider_t785806275 * get_frontWheel_6() const { return ___frontWheel_6; }
	inline WheelCollider_t785806275 ** get_address_of_frontWheel_6() { return &___frontWheel_6; }
	inline void set_frontWheel_6(WheelCollider_t785806275 * value)
	{
		___frontWheel_6 = value;
		Il2CppCodeGenWriteBarrier(&___frontWheel_6, value);
	}

	inline static int32_t get_offset_of_rearWheel_7() { return static_cast<int32_t>(offsetof(ScotterController_t2922799268, ___rearWheel_7)); }
	inline WheelCollider_t785806275 * get_rearWheel_7() const { return ___rearWheel_7; }
	inline WheelCollider_t785806275 ** get_address_of_rearWheel_7() { return &___rearWheel_7; }
	inline void set_rearWheel_7(WheelCollider_t785806275 * value)
	{
		___rearWheel_7 = value;
		Il2CppCodeGenWriteBarrier(&___rearWheel_7, value);
	}

	inline static int32_t get_offset_of_stearing_8() { return static_cast<int32_t>(offsetof(ScotterController_t2922799268, ___stearing_8)); }
	inline GameObject_t1756533147 * get_stearing_8() const { return ___stearing_8; }
	inline GameObject_t1756533147 ** get_address_of_stearing_8() { return &___stearing_8; }
	inline void set_stearing_8(GameObject_t1756533147 * value)
	{
		___stearing_8 = value;
		Il2CppCodeGenWriteBarrier(&___stearing_8, value);
	}

	inline static int32_t get_offset_of_scotter_9() { return static_cast<int32_t>(offsetof(ScotterController_t2922799268, ___scotter_9)); }
	inline Scotter_t2238458108 * get_scotter_9() const { return ___scotter_9; }
	inline Scotter_t2238458108 ** get_address_of_scotter_9() { return &___scotter_9; }
	inline void set_scotter_9(Scotter_t2238458108 * value)
	{
		___scotter_9 = value;
		Il2CppCodeGenWriteBarrier(&___scotter_9, value);
	}

	inline static int32_t get_offset_of_scotterRigidbody_10() { return static_cast<int32_t>(offsetof(ScotterController_t2922799268, ___scotterRigidbody_10)); }
	inline Rigidbody_t4233889191 * get_scotterRigidbody_10() const { return ___scotterRigidbody_10; }
	inline Rigidbody_t4233889191 ** get_address_of_scotterRigidbody_10() { return &___scotterRigidbody_10; }
	inline void set_scotterRigidbody_10(Rigidbody_t4233889191 * value)
	{
		___scotterRigidbody_10 = value;
		Il2CppCodeGenWriteBarrier(&___scotterRigidbody_10, value);
	}

	inline static int32_t get_offset_of_gameManager_11() { return static_cast<int32_t>(offsetof(ScotterController_t2922799268, ___gameManager_11)); }
	inline GameManager_t2252321495 * get_gameManager_11() const { return ___gameManager_11; }
	inline GameManager_t2252321495 ** get_address_of_gameManager_11() { return &___gameManager_11; }
	inline void set_gameManager_11(GameManager_t2252321495 * value)
	{
		___gameManager_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
