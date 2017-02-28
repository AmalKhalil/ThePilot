#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ColorSuite
struct ColorSuite_t219384837;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimationCurve3306541151.h"
#include "AssemblyU2DCSharp_ColorSuite_DitherMode3212521175.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"

// System.Void ColorSuite::.ctor()
extern "C"  void ColorSuite__ctor_m2289509424 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ColorSuite::get_colorTemp()
extern "C"  float ColorSuite_get_colorTemp_m2643230212 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::set_colorTemp(System.Single)
extern "C"  void ColorSuite_set_colorTemp_m175928497 (ColorSuite_t219384837 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ColorSuite::get_colorTint()
extern "C"  float ColorSuite_get_colorTint_m774605373 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::set_colorTint(System.Single)
extern "C"  void ColorSuite_set_colorTint_m741357454 (ColorSuite_t219384837 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ColorSuite::get_toneMapping()
extern "C"  bool ColorSuite_get_toneMapping_m1225348277 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::set_toneMapping(System.Boolean)
extern "C"  void ColorSuite_set_toneMapping_m1236587084 (ColorSuite_t219384837 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ColorSuite::get_exposure()
extern "C"  float ColorSuite_get_exposure_m273045492 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::set_exposure(System.Single)
extern "C"  void ColorSuite_set_exposure_m2666125771 (ColorSuite_t219384837 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ColorSuite::get_saturation()
extern "C"  float ColorSuite_get_saturation_m3993581247 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::set_saturation(System.Single)
extern "C"  void ColorSuite_set_saturation_m952330564 (ColorSuite_t219384837 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve ColorSuite::get_redCurve()
extern "C"  AnimationCurve_t3306541151 * ColorSuite_get_redCurve_m2516149676 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::set_redCurve(UnityEngine.AnimationCurve)
extern "C"  void ColorSuite_set_redCurve_m3595714479 (ColorSuite_t219384837 * __this, AnimationCurve_t3306541151 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve ColorSuite::get_greenCurve()
extern "C"  AnimationCurve_t3306541151 * ColorSuite_get_greenCurve_m1246395328 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::set_greenCurve(UnityEngine.AnimationCurve)
extern "C"  void ColorSuite_set_greenCurve_m2310511775 (ColorSuite_t219384837 * __this, AnimationCurve_t3306541151 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve ColorSuite::get_blueCurve()
extern "C"  AnimationCurve_t3306541151 * ColorSuite_get_blueCurve_m3945088681 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::set_blueCurve(UnityEngine.AnimationCurve)
extern "C"  void ColorSuite_set_blueCurve_m2943216882 (ColorSuite_t219384837 * __this, AnimationCurve_t3306541151 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve ColorSuite::get_rgbCurve()
extern "C"  AnimationCurve_t3306541151 * ColorSuite_get_rgbCurve_m244906316 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::set_rgbCurve(UnityEngine.AnimationCurve)
extern "C"  void ColorSuite_set_rgbCurve_m3839509163 (ColorSuite_t219384837 * __this, AnimationCurve_t3306541151 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ColorSuite/DitherMode ColorSuite::get_ditherMode()
extern "C"  int32_t ColorSuite_get_ditherMode_m2242794906 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::set_ditherMode(ColorSuite/DitherMode)
extern "C"  void ColorSuite_set_ditherMode_m1166383305 (ColorSuite_t219384837 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color ColorSuite::EncodeRGBM(System.Single,System.Single,System.Single)
extern "C"  Color_t2020392075  ColorSuite_EncodeRGBM_m1790575178 (Il2CppObject * __this /* static, unused */, float ___r0, float ___g1, float ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ColorSuite::StandardIlluminantY(System.Single)
extern "C"  float ColorSuite_StandardIlluminantY_m153720252 (Il2CppObject * __this /* static, unused */, float ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ColorSuite::CIExyToLMS(System.Single,System.Single)
extern "C"  Vector3_t2243707580  ColorSuite_CIExyToLMS_m2523998865 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::Setup()
extern "C"  void ColorSuite_Setup_m3495818703 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::UpdateLUT()
extern "C"  void ColorSuite_UpdateLUT_m3847281534 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ColorSuite::CalculateColorBalance()
extern "C"  Vector3_t2243707580  ColorSuite_CalculateColorBalance_m1365479745 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::Start()
extern "C"  void ColorSuite_Start_m1241202032 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::OnValidate()
extern "C"  void ColorSuite_OnValidate_m2575941163 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::Reset()
extern "C"  void ColorSuite_Reset_m1459699713 (ColorSuite_t219384837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ColorSuite::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ColorSuite_OnRenderImage_m3131206728 (ColorSuite_t219384837 * __this, RenderTexture_t2666733923 * ___source0, RenderTexture_t2666733923 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
