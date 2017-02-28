#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_t578197330;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appear
struct  Appear_t3814552297  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer> Appear::vImages
	List_1_t578197330 * ___vImages_2;
	// System.Single Appear::valpha
	float ___valpha_3;
	// System.Boolean Appear::vchoice
	bool ___vchoice_4;
	// System.Single Appear::vTimer
	float ___vTimer_5;
	// System.Single Appear::cTime
	float ___cTime_6;
	// System.Boolean Appear::needtoclick
	bool ___needtoclick_7;

public:
	inline static int32_t get_offset_of_vImages_2() { return static_cast<int32_t>(offsetof(Appear_t3814552297, ___vImages_2)); }
	inline List_1_t578197330 * get_vImages_2() const { return ___vImages_2; }
	inline List_1_t578197330 ** get_address_of_vImages_2() { return &___vImages_2; }
	inline void set_vImages_2(List_1_t578197330 * value)
	{
		___vImages_2 = value;
		Il2CppCodeGenWriteBarrier(&___vImages_2, value);
	}

	inline static int32_t get_offset_of_valpha_3() { return static_cast<int32_t>(offsetof(Appear_t3814552297, ___valpha_3)); }
	inline float get_valpha_3() const { return ___valpha_3; }
	inline float* get_address_of_valpha_3() { return &___valpha_3; }
	inline void set_valpha_3(float value)
	{
		___valpha_3 = value;
	}

	inline static int32_t get_offset_of_vchoice_4() { return static_cast<int32_t>(offsetof(Appear_t3814552297, ___vchoice_4)); }
	inline bool get_vchoice_4() const { return ___vchoice_4; }
	inline bool* get_address_of_vchoice_4() { return &___vchoice_4; }
	inline void set_vchoice_4(bool value)
	{
		___vchoice_4 = value;
	}

	inline static int32_t get_offset_of_vTimer_5() { return static_cast<int32_t>(offsetof(Appear_t3814552297, ___vTimer_5)); }
	inline float get_vTimer_5() const { return ___vTimer_5; }
	inline float* get_address_of_vTimer_5() { return &___vTimer_5; }
	inline void set_vTimer_5(float value)
	{
		___vTimer_5 = value;
	}

	inline static int32_t get_offset_of_cTime_6() { return static_cast<int32_t>(offsetof(Appear_t3814552297, ___cTime_6)); }
	inline float get_cTime_6() const { return ___cTime_6; }
	inline float* get_address_of_cTime_6() { return &___cTime_6; }
	inline void set_cTime_6(float value)
	{
		___cTime_6 = value;
	}

	inline static int32_t get_offset_of_needtoclick_7() { return static_cast<int32_t>(offsetof(Appear_t3814552297, ___needtoclick_7)); }
	inline bool get_needtoclick_7() const { return ___needtoclick_7; }
	inline bool* get_address_of_needtoclick_7() { return &___needtoclick_7; }
	inline void set_needtoclick_7(bool value)
	{
		___needtoclick_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
