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
// System.Collections.Generic.List`1<AssemblyCSharp.PixelBubble>
struct List_1_t3191430132;
// AssemblyCSharp.PixelBubble
struct PixelBubble_t3822309000;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogBubble
struct  DialogBubble_t183883894  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Ray DialogBubble::ray
	Ray_t2469606224  ___ray_2;
	// UnityEngine.RaycastHit DialogBubble::hit
	RaycastHit_t87180320  ___hit_3;
	// UnityEngine.GameObject DialogBubble::vCurrentBubble
	GameObject_t1756533147 * ___vCurrentBubble_4;
	// UnityEngine.GameObject DialogBubble::vConversation
	GameObject_t1756533147 * ___vConversation_5;
	// System.Boolean DialogBubble::IsTalking
	bool ___IsTalking_6;
	// System.Collections.Generic.List`1<AssemblyCSharp.PixelBubble> DialogBubble::vBubble
	List_1_t3191430132 * ___vBubble_7;
	// System.Boolean DialogBubble::vCustomBubblePosition
	bool ___vCustomBubblePosition_8;
	// UnityEngine.Vector3 DialogBubble::vBubblePosition
	Vector3_t2243707580  ___vBubblePosition_9;
	// System.Boolean DialogBubble::vBubbleOnRight
	bool ___vBubbleOnRight_10;
	// AssemblyCSharp.PixelBubble DialogBubble::vActiveBubble
	PixelBubble_t3822309000 * ___vActiveBubble_11;

public:
	inline static int32_t get_offset_of_ray_2() { return static_cast<int32_t>(offsetof(DialogBubble_t183883894, ___ray_2)); }
	inline Ray_t2469606224  get_ray_2() const { return ___ray_2; }
	inline Ray_t2469606224 * get_address_of_ray_2() { return &___ray_2; }
	inline void set_ray_2(Ray_t2469606224  value)
	{
		___ray_2 = value;
	}

	inline static int32_t get_offset_of_hit_3() { return static_cast<int32_t>(offsetof(DialogBubble_t183883894, ___hit_3)); }
	inline RaycastHit_t87180320  get_hit_3() const { return ___hit_3; }
	inline RaycastHit_t87180320 * get_address_of_hit_3() { return &___hit_3; }
	inline void set_hit_3(RaycastHit_t87180320  value)
	{
		___hit_3 = value;
	}

	inline static int32_t get_offset_of_vCurrentBubble_4() { return static_cast<int32_t>(offsetof(DialogBubble_t183883894, ___vCurrentBubble_4)); }
	inline GameObject_t1756533147 * get_vCurrentBubble_4() const { return ___vCurrentBubble_4; }
	inline GameObject_t1756533147 ** get_address_of_vCurrentBubble_4() { return &___vCurrentBubble_4; }
	inline void set_vCurrentBubble_4(GameObject_t1756533147 * value)
	{
		___vCurrentBubble_4 = value;
		Il2CppCodeGenWriteBarrier(&___vCurrentBubble_4, value);
	}

	inline static int32_t get_offset_of_vConversation_5() { return static_cast<int32_t>(offsetof(DialogBubble_t183883894, ___vConversation_5)); }
	inline GameObject_t1756533147 * get_vConversation_5() const { return ___vConversation_5; }
	inline GameObject_t1756533147 ** get_address_of_vConversation_5() { return &___vConversation_5; }
	inline void set_vConversation_5(GameObject_t1756533147 * value)
	{
		___vConversation_5 = value;
		Il2CppCodeGenWriteBarrier(&___vConversation_5, value);
	}

	inline static int32_t get_offset_of_IsTalking_6() { return static_cast<int32_t>(offsetof(DialogBubble_t183883894, ___IsTalking_6)); }
	inline bool get_IsTalking_6() const { return ___IsTalking_6; }
	inline bool* get_address_of_IsTalking_6() { return &___IsTalking_6; }
	inline void set_IsTalking_6(bool value)
	{
		___IsTalking_6 = value;
	}

	inline static int32_t get_offset_of_vBubble_7() { return static_cast<int32_t>(offsetof(DialogBubble_t183883894, ___vBubble_7)); }
	inline List_1_t3191430132 * get_vBubble_7() const { return ___vBubble_7; }
	inline List_1_t3191430132 ** get_address_of_vBubble_7() { return &___vBubble_7; }
	inline void set_vBubble_7(List_1_t3191430132 * value)
	{
		___vBubble_7 = value;
		Il2CppCodeGenWriteBarrier(&___vBubble_7, value);
	}

	inline static int32_t get_offset_of_vCustomBubblePosition_8() { return static_cast<int32_t>(offsetof(DialogBubble_t183883894, ___vCustomBubblePosition_8)); }
	inline bool get_vCustomBubblePosition_8() const { return ___vCustomBubblePosition_8; }
	inline bool* get_address_of_vCustomBubblePosition_8() { return &___vCustomBubblePosition_8; }
	inline void set_vCustomBubblePosition_8(bool value)
	{
		___vCustomBubblePosition_8 = value;
	}

	inline static int32_t get_offset_of_vBubblePosition_9() { return static_cast<int32_t>(offsetof(DialogBubble_t183883894, ___vBubblePosition_9)); }
	inline Vector3_t2243707580  get_vBubblePosition_9() const { return ___vBubblePosition_9; }
	inline Vector3_t2243707580 * get_address_of_vBubblePosition_9() { return &___vBubblePosition_9; }
	inline void set_vBubblePosition_9(Vector3_t2243707580  value)
	{
		___vBubblePosition_9 = value;
	}

	inline static int32_t get_offset_of_vBubbleOnRight_10() { return static_cast<int32_t>(offsetof(DialogBubble_t183883894, ___vBubbleOnRight_10)); }
	inline bool get_vBubbleOnRight_10() const { return ___vBubbleOnRight_10; }
	inline bool* get_address_of_vBubbleOnRight_10() { return &___vBubbleOnRight_10; }
	inline void set_vBubbleOnRight_10(bool value)
	{
		___vBubbleOnRight_10 = value;
	}

	inline static int32_t get_offset_of_vActiveBubble_11() { return static_cast<int32_t>(offsetof(DialogBubble_t183883894, ___vActiveBubble_11)); }
	inline PixelBubble_t3822309000 * get_vActiveBubble_11() const { return ___vActiveBubble_11; }
	inline PixelBubble_t3822309000 ** get_address_of_vActiveBubble_11() { return &___vActiveBubble_11; }
	inline void set_vActiveBubble_11(PixelBubble_t3822309000 * value)
	{
		___vActiveBubble_11 = value;
		Il2CppCodeGenWriteBarrier(&___vActiveBubble_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
