#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DealyedActivation
struct  DealyedActivation_t2607288560  : public MonoBehaviour_t1158329972
{
public:
	// System.Single DealyedActivation::delay
	float ___delay_2;
	// System.Collections.Generic.List`1<UnityEngine.Transform> DealyedActivation::childs
	List_1_t2644239190 * ___childs_3;

public:
	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(DealyedActivation_t2607288560, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_childs_3() { return static_cast<int32_t>(offsetof(DealyedActivation_t2607288560, ___childs_3)); }
	inline List_1_t2644239190 * get_childs_3() const { return ___childs_3; }
	inline List_1_t2644239190 ** get_address_of_childs_3() { return &___childs_3; }
	inline void set_childs_3(List_1_t2644239190 * value)
	{
		___childs_3 = value;
		Il2CppCodeGenWriteBarrier(&___childs_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
