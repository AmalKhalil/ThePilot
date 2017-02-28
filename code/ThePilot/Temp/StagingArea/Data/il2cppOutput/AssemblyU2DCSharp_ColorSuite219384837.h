#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ColorSuite_DitherMode3212521175.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorSuite
struct  ColorSuite_t219384837  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ColorSuite::_colorTemp
	float ____colorTemp_2;
	// System.Single ColorSuite::_colorTint
	float ____colorTint_3;
	// System.Boolean ColorSuite::_toneMapping
	bool ____toneMapping_4;
	// System.Single ColorSuite::_exposure
	float ____exposure_5;
	// System.Single ColorSuite::_saturation
	float ____saturation_6;
	// UnityEngine.AnimationCurve ColorSuite::_rCurve
	AnimationCurve_t3306541151 * ____rCurve_7;
	// UnityEngine.AnimationCurve ColorSuite::_gCurve
	AnimationCurve_t3306541151 * ____gCurve_8;
	// UnityEngine.AnimationCurve ColorSuite::_bCurve
	AnimationCurve_t3306541151 * ____bCurve_9;
	// UnityEngine.AnimationCurve ColorSuite::_cCurve
	AnimationCurve_t3306541151 * ____cCurve_10;
	// ColorSuite/DitherMode ColorSuite::_ditherMode
	int32_t ____ditherMode_11;
	// UnityEngine.Shader ColorSuite::shader
	Shader_t2430389951 * ___shader_12;
	// UnityEngine.Material ColorSuite::_material
	Material_t193706927 * ____material_13;
	// UnityEngine.Texture2D ColorSuite::_lutTexture
	Texture2D_t3542995729 * ____lutTexture_14;

public:
	inline static int32_t get_offset_of__colorTemp_2() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____colorTemp_2)); }
	inline float get__colorTemp_2() const { return ____colorTemp_2; }
	inline float* get_address_of__colorTemp_2() { return &____colorTemp_2; }
	inline void set__colorTemp_2(float value)
	{
		____colorTemp_2 = value;
	}

	inline static int32_t get_offset_of__colorTint_3() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____colorTint_3)); }
	inline float get__colorTint_3() const { return ____colorTint_3; }
	inline float* get_address_of__colorTint_3() { return &____colorTint_3; }
	inline void set__colorTint_3(float value)
	{
		____colorTint_3 = value;
	}

	inline static int32_t get_offset_of__toneMapping_4() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____toneMapping_4)); }
	inline bool get__toneMapping_4() const { return ____toneMapping_4; }
	inline bool* get_address_of__toneMapping_4() { return &____toneMapping_4; }
	inline void set__toneMapping_4(bool value)
	{
		____toneMapping_4 = value;
	}

	inline static int32_t get_offset_of__exposure_5() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____exposure_5)); }
	inline float get__exposure_5() const { return ____exposure_5; }
	inline float* get_address_of__exposure_5() { return &____exposure_5; }
	inline void set__exposure_5(float value)
	{
		____exposure_5 = value;
	}

	inline static int32_t get_offset_of__saturation_6() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____saturation_6)); }
	inline float get__saturation_6() const { return ____saturation_6; }
	inline float* get_address_of__saturation_6() { return &____saturation_6; }
	inline void set__saturation_6(float value)
	{
		____saturation_6 = value;
	}

	inline static int32_t get_offset_of__rCurve_7() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____rCurve_7)); }
	inline AnimationCurve_t3306541151 * get__rCurve_7() const { return ____rCurve_7; }
	inline AnimationCurve_t3306541151 ** get_address_of__rCurve_7() { return &____rCurve_7; }
	inline void set__rCurve_7(AnimationCurve_t3306541151 * value)
	{
		____rCurve_7 = value;
		Il2CppCodeGenWriteBarrier(&____rCurve_7, value);
	}

	inline static int32_t get_offset_of__gCurve_8() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____gCurve_8)); }
	inline AnimationCurve_t3306541151 * get__gCurve_8() const { return ____gCurve_8; }
	inline AnimationCurve_t3306541151 ** get_address_of__gCurve_8() { return &____gCurve_8; }
	inline void set__gCurve_8(AnimationCurve_t3306541151 * value)
	{
		____gCurve_8 = value;
		Il2CppCodeGenWriteBarrier(&____gCurve_8, value);
	}

	inline static int32_t get_offset_of__bCurve_9() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____bCurve_9)); }
	inline AnimationCurve_t3306541151 * get__bCurve_9() const { return ____bCurve_9; }
	inline AnimationCurve_t3306541151 ** get_address_of__bCurve_9() { return &____bCurve_9; }
	inline void set__bCurve_9(AnimationCurve_t3306541151 * value)
	{
		____bCurve_9 = value;
		Il2CppCodeGenWriteBarrier(&____bCurve_9, value);
	}

	inline static int32_t get_offset_of__cCurve_10() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____cCurve_10)); }
	inline AnimationCurve_t3306541151 * get__cCurve_10() const { return ____cCurve_10; }
	inline AnimationCurve_t3306541151 ** get_address_of__cCurve_10() { return &____cCurve_10; }
	inline void set__cCurve_10(AnimationCurve_t3306541151 * value)
	{
		____cCurve_10 = value;
		Il2CppCodeGenWriteBarrier(&____cCurve_10, value);
	}

	inline static int32_t get_offset_of__ditherMode_11() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____ditherMode_11)); }
	inline int32_t get__ditherMode_11() const { return ____ditherMode_11; }
	inline int32_t* get_address_of__ditherMode_11() { return &____ditherMode_11; }
	inline void set__ditherMode_11(int32_t value)
	{
		____ditherMode_11 = value;
	}

	inline static int32_t get_offset_of_shader_12() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ___shader_12)); }
	inline Shader_t2430389951 * get_shader_12() const { return ___shader_12; }
	inline Shader_t2430389951 ** get_address_of_shader_12() { return &___shader_12; }
	inline void set_shader_12(Shader_t2430389951 * value)
	{
		___shader_12 = value;
		Il2CppCodeGenWriteBarrier(&___shader_12, value);
	}

	inline static int32_t get_offset_of__material_13() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____material_13)); }
	inline Material_t193706927 * get__material_13() const { return ____material_13; }
	inline Material_t193706927 ** get_address_of__material_13() { return &____material_13; }
	inline void set__material_13(Material_t193706927 * value)
	{
		____material_13 = value;
		Il2CppCodeGenWriteBarrier(&____material_13, value);
	}

	inline static int32_t get_offset_of__lutTexture_14() { return static_cast<int32_t>(offsetof(ColorSuite_t219384837, ____lutTexture_14)); }
	inline Texture2D_t3542995729 * get__lutTexture_14() const { return ____lutTexture_14; }
	inline Texture2D_t3542995729 ** get_address_of__lutTexture_14() { return &____lutTexture_14; }
	inline void set__lutTexture_14(Texture2D_t3542995729 * value)
	{
		____lutTexture_14 = value;
		Il2CppCodeGenWriteBarrier(&____lutTexture_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
