#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_BubbleType1365610638.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssemblyCSharp.PixelBubble
struct  PixelBubble_t3822309000  : public Il2CppObject
{
public:
	// System.String AssemblyCSharp.PixelBubble::vMessage
	String_t* ___vMessage_0;
	// BubbleType AssemblyCSharp.PixelBubble::vMessageForm
	int32_t ___vMessageForm_1;
	// UnityEngine.Color AssemblyCSharp.PixelBubble::vBorderColor
	Color_t2020392075  ___vBorderColor_2;
	// UnityEngine.Color AssemblyCSharp.PixelBubble::vBodyColor
	Color_t2020392075  ___vBodyColor_3;
	// UnityEngine.Color AssemblyCSharp.PixelBubble::vFontColor
	Color_t2020392075  ___vFontColor_4;
	// System.Boolean AssemblyCSharp.PixelBubble::vClickToCloseBubble
	bool ___vClickToCloseBubble_5;

public:
	inline static int32_t get_offset_of_vMessage_0() { return static_cast<int32_t>(offsetof(PixelBubble_t3822309000, ___vMessage_0)); }
	inline String_t* get_vMessage_0() const { return ___vMessage_0; }
	inline String_t** get_address_of_vMessage_0() { return &___vMessage_0; }
	inline void set_vMessage_0(String_t* value)
	{
		___vMessage_0 = value;
		Il2CppCodeGenWriteBarrier(&___vMessage_0, value);
	}

	inline static int32_t get_offset_of_vMessageForm_1() { return static_cast<int32_t>(offsetof(PixelBubble_t3822309000, ___vMessageForm_1)); }
	inline int32_t get_vMessageForm_1() const { return ___vMessageForm_1; }
	inline int32_t* get_address_of_vMessageForm_1() { return &___vMessageForm_1; }
	inline void set_vMessageForm_1(int32_t value)
	{
		___vMessageForm_1 = value;
	}

	inline static int32_t get_offset_of_vBorderColor_2() { return static_cast<int32_t>(offsetof(PixelBubble_t3822309000, ___vBorderColor_2)); }
	inline Color_t2020392075  get_vBorderColor_2() const { return ___vBorderColor_2; }
	inline Color_t2020392075 * get_address_of_vBorderColor_2() { return &___vBorderColor_2; }
	inline void set_vBorderColor_2(Color_t2020392075  value)
	{
		___vBorderColor_2 = value;
	}

	inline static int32_t get_offset_of_vBodyColor_3() { return static_cast<int32_t>(offsetof(PixelBubble_t3822309000, ___vBodyColor_3)); }
	inline Color_t2020392075  get_vBodyColor_3() const { return ___vBodyColor_3; }
	inline Color_t2020392075 * get_address_of_vBodyColor_3() { return &___vBodyColor_3; }
	inline void set_vBodyColor_3(Color_t2020392075  value)
	{
		___vBodyColor_3 = value;
	}

	inline static int32_t get_offset_of_vFontColor_4() { return static_cast<int32_t>(offsetof(PixelBubble_t3822309000, ___vFontColor_4)); }
	inline Color_t2020392075  get_vFontColor_4() const { return ___vFontColor_4; }
	inline Color_t2020392075 * get_address_of_vFontColor_4() { return &___vFontColor_4; }
	inline void set_vFontColor_4(Color_t2020392075  value)
	{
		___vFontColor_4 = value;
	}

	inline static int32_t get_offset_of_vClickToCloseBubble_5() { return static_cast<int32_t>(offsetof(PixelBubble_t3822309000, ___vClickToCloseBubble_5)); }
	inline bool get_vClickToCloseBubble_5() const { return ___vClickToCloseBubble_5; }
	inline bool* get_address_of_vClickToCloseBubble_5() { return &___vClickToCloseBubble_5; }
	inline void set_vClickToCloseBubble_5(bool value)
	{
		___vClickToCloseBubble_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
