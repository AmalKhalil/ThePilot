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
// DialogBubble
struct DialogBubble_t183883894;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Conversation
struct  Conversation_t4277814359  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Conversation::actor1
	GameObject_t1756533147 * ___actor1_2;
	// UnityEngine.GameObject Conversation::actor2
	GameObject_t1756533147 * ___actor2_3;
	// System.Int32 Conversation::interval
	int32_t ___interval_4;
	// System.Boolean Conversation::isAuto
	bool ___isAuto_5;
	// DialogBubble Conversation::talker
	DialogBubble_t183883894 * ___talker_6;
	// DialogBubble Conversation::listener
	DialogBubble_t183883894 * ___listener_7;
	// System.Int32 Conversation::numberOfCalls
	int32_t ___numberOfCalls_8;
	// System.Int32 Conversation::totalNumberofBubbles
	int32_t ___totalNumberofBubbles_9;

public:
	inline static int32_t get_offset_of_actor1_2() { return static_cast<int32_t>(offsetof(Conversation_t4277814359, ___actor1_2)); }
	inline GameObject_t1756533147 * get_actor1_2() const { return ___actor1_2; }
	inline GameObject_t1756533147 ** get_address_of_actor1_2() { return &___actor1_2; }
	inline void set_actor1_2(GameObject_t1756533147 * value)
	{
		___actor1_2 = value;
		Il2CppCodeGenWriteBarrier(&___actor1_2, value);
	}

	inline static int32_t get_offset_of_actor2_3() { return static_cast<int32_t>(offsetof(Conversation_t4277814359, ___actor2_3)); }
	inline GameObject_t1756533147 * get_actor2_3() const { return ___actor2_3; }
	inline GameObject_t1756533147 ** get_address_of_actor2_3() { return &___actor2_3; }
	inline void set_actor2_3(GameObject_t1756533147 * value)
	{
		___actor2_3 = value;
		Il2CppCodeGenWriteBarrier(&___actor2_3, value);
	}

	inline static int32_t get_offset_of_interval_4() { return static_cast<int32_t>(offsetof(Conversation_t4277814359, ___interval_4)); }
	inline int32_t get_interval_4() const { return ___interval_4; }
	inline int32_t* get_address_of_interval_4() { return &___interval_4; }
	inline void set_interval_4(int32_t value)
	{
		___interval_4 = value;
	}

	inline static int32_t get_offset_of_isAuto_5() { return static_cast<int32_t>(offsetof(Conversation_t4277814359, ___isAuto_5)); }
	inline bool get_isAuto_5() const { return ___isAuto_5; }
	inline bool* get_address_of_isAuto_5() { return &___isAuto_5; }
	inline void set_isAuto_5(bool value)
	{
		___isAuto_5 = value;
	}

	inline static int32_t get_offset_of_talker_6() { return static_cast<int32_t>(offsetof(Conversation_t4277814359, ___talker_6)); }
	inline DialogBubble_t183883894 * get_talker_6() const { return ___talker_6; }
	inline DialogBubble_t183883894 ** get_address_of_talker_6() { return &___talker_6; }
	inline void set_talker_6(DialogBubble_t183883894 * value)
	{
		___talker_6 = value;
		Il2CppCodeGenWriteBarrier(&___talker_6, value);
	}

	inline static int32_t get_offset_of_listener_7() { return static_cast<int32_t>(offsetof(Conversation_t4277814359, ___listener_7)); }
	inline DialogBubble_t183883894 * get_listener_7() const { return ___listener_7; }
	inline DialogBubble_t183883894 ** get_address_of_listener_7() { return &___listener_7; }
	inline void set_listener_7(DialogBubble_t183883894 * value)
	{
		___listener_7 = value;
		Il2CppCodeGenWriteBarrier(&___listener_7, value);
	}

	inline static int32_t get_offset_of_numberOfCalls_8() { return static_cast<int32_t>(offsetof(Conversation_t4277814359, ___numberOfCalls_8)); }
	inline int32_t get_numberOfCalls_8() const { return ___numberOfCalls_8; }
	inline int32_t* get_address_of_numberOfCalls_8() { return &___numberOfCalls_8; }
	inline void set_numberOfCalls_8(int32_t value)
	{
		___numberOfCalls_8 = value;
	}

	inline static int32_t get_offset_of_totalNumberofBubbles_9() { return static_cast<int32_t>(offsetof(Conversation_t4277814359, ___totalNumberofBubbles_9)); }
	inline int32_t get_totalNumberofBubbles_9() const { return ___totalNumberofBubbles_9; }
	inline int32_t* get_address_of_totalNumberofBubbles_9() { return &___totalNumberofBubbles_9; }
	inline void set_totalNumberofBubbles_9(int32_t value)
	{
		___totalNumberofBubbles_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
