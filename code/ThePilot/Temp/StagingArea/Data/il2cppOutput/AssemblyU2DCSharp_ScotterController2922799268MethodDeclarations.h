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

// ScotterController
struct ScotterController_t2922799268;
// UnityEngine.Collision
struct Collision_t2876846408;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void ScotterController::.ctor()
extern "C"  void ScotterController__ctor_m2448600283 (ScotterController_t2922799268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScotterController::Start()
extern "C"  void ScotterController_Start_m3425076415 (ScotterController_t2922799268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScotterController::Update()
extern "C"  void ScotterController_Update_m1642505414 (ScotterController_t2922799268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScotterController::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void ScotterController_OnCollisionEnter_m1945821685 (ScotterController_t2922799268 * __this, Collision_t2876846408 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ScotterController::getMoveInput()
extern "C"  Vector3_t2243707580  ScotterController_getMoveInput_m4215956606 (ScotterController_t2922799268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScotterController::handleGasPush(System.Single)
extern "C"  void ScotterController_handleGasPush_m312637871 (ScotterController_t2922799268 * __this, float ___push0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScotterController::rotateSteerVisually()
extern "C"  void ScotterController_rotateSteerVisually_m678232616 (ScotterController_t2922799268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScotterController::handleSteerRotation(System.Single)
extern "C"  void ScotterController_handleSteerRotation_m2465227449 (ScotterController_t2922799268 * __this, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScotterController::handleBrakePush()
extern "C"  void ScotterController_handleBrakePush_m1210878290 (ScotterController_t2922799268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScotterController::applyVelocity(System.Single)
extern "C"  void ScotterController_applyVelocity_m3850652949 (ScotterController_t2922799268 * __this, float ___push0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScotterController::applySteerAngle(System.Single)
extern "C"  void ScotterController_applySteerAngle_m2195588356 (ScotterController_t2922799268 * __this, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScotterController::applyBrakeForce()
extern "C"  void ScotterController_applyBrakeForce_m2686044185 (ScotterController_t2922799268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ScotterController::isBrakePressed()
extern "C"  bool ScotterController_isBrakePressed_m645786986 (ScotterController_t2922799268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ScotterController::isBrakeRelease()
extern "C"  bool ScotterController_isBrakeRelease_m2524142095 (ScotterController_t2922799268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ScotterController::IsGrounded()
extern "C"  bool ScotterController_IsGrounded_m520801429 (ScotterController_t2922799268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
