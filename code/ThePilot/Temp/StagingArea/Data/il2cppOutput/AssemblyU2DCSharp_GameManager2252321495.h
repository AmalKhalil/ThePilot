#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2252321495;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// Scotter
struct Scotter_t2238458108;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 GameManager::noOfLifes
	int32_t ___noOfLifes_3;
	// UnityEngine.GameObject GameManager::mainCamera
	GameObject_t1756533147 * ___mainCamera_4;
	// UnityEngine.GameObject GameManager::player
	GameObject_t1756533147 * ___player_5;
	// UnityEngine.GameObject GameManager::destination
	GameObject_t1756533147 * ___destination_6;
	// UnityEngine.UI.Text GameManager::speedText
	Text_t356221433 * ___speedText_7;
	// UnityEngine.UI.Text GameManager::addressText
	Text_t356221433 * ___addressText_8;
	// UnityEngine.UI.Text GameManager::brakeText
	Text_t356221433 * ___brakeText_9;
	// UnityEngine.UI.Text GameManager::noOfLivesText
	Text_t356221433 * ___noOfLivesText_10;
	// UnityEngine.GameObject GameManager::playAgain
	GameObject_t1756533147 * ___playAgain_11;
	// Scotter GameManager::scotter
	Scotter_t2238458108 * ___scotter_12;
	// System.Boolean GameManager::isPlaying
	bool ___isPlaying_13;
	// System.Int32 GameManager::lifes
	int32_t ___lifes_14;

public:
	inline static int32_t get_offset_of_noOfLifes_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___noOfLifes_3)); }
	inline int32_t get_noOfLifes_3() const { return ___noOfLifes_3; }
	inline int32_t* get_address_of_noOfLifes_3() { return &___noOfLifes_3; }
	inline void set_noOfLifes_3(int32_t value)
	{
		___noOfLifes_3 = value;
	}

	inline static int32_t get_offset_of_mainCamera_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mainCamera_4)); }
	inline GameObject_t1756533147 * get_mainCamera_4() const { return ___mainCamera_4; }
	inline GameObject_t1756533147 ** get_address_of_mainCamera_4() { return &___mainCamera_4; }
	inline void set_mainCamera_4(GameObject_t1756533147 * value)
	{
		___mainCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___player_5)); }
	inline GameObject_t1756533147 * get_player_5() const { return ___player_5; }
	inline GameObject_t1756533147 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t1756533147 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_destination_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___destination_6)); }
	inline GameObject_t1756533147 * get_destination_6() const { return ___destination_6; }
	inline GameObject_t1756533147 ** get_address_of_destination_6() { return &___destination_6; }
	inline void set_destination_6(GameObject_t1756533147 * value)
	{
		___destination_6 = value;
		Il2CppCodeGenWriteBarrier(&___destination_6, value);
	}

	inline static int32_t get_offset_of_speedText_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___speedText_7)); }
	inline Text_t356221433 * get_speedText_7() const { return ___speedText_7; }
	inline Text_t356221433 ** get_address_of_speedText_7() { return &___speedText_7; }
	inline void set_speedText_7(Text_t356221433 * value)
	{
		___speedText_7 = value;
		Il2CppCodeGenWriteBarrier(&___speedText_7, value);
	}

	inline static int32_t get_offset_of_addressText_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___addressText_8)); }
	inline Text_t356221433 * get_addressText_8() const { return ___addressText_8; }
	inline Text_t356221433 ** get_address_of_addressText_8() { return &___addressText_8; }
	inline void set_addressText_8(Text_t356221433 * value)
	{
		___addressText_8 = value;
		Il2CppCodeGenWriteBarrier(&___addressText_8, value);
	}

	inline static int32_t get_offset_of_brakeText_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___brakeText_9)); }
	inline Text_t356221433 * get_brakeText_9() const { return ___brakeText_9; }
	inline Text_t356221433 ** get_address_of_brakeText_9() { return &___brakeText_9; }
	inline void set_brakeText_9(Text_t356221433 * value)
	{
		___brakeText_9 = value;
		Il2CppCodeGenWriteBarrier(&___brakeText_9, value);
	}

	inline static int32_t get_offset_of_noOfLivesText_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___noOfLivesText_10)); }
	inline Text_t356221433 * get_noOfLivesText_10() const { return ___noOfLivesText_10; }
	inline Text_t356221433 ** get_address_of_noOfLivesText_10() { return &___noOfLivesText_10; }
	inline void set_noOfLivesText_10(Text_t356221433 * value)
	{
		___noOfLivesText_10 = value;
		Il2CppCodeGenWriteBarrier(&___noOfLivesText_10, value);
	}

	inline static int32_t get_offset_of_playAgain_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playAgain_11)); }
	inline GameObject_t1756533147 * get_playAgain_11() const { return ___playAgain_11; }
	inline GameObject_t1756533147 ** get_address_of_playAgain_11() { return &___playAgain_11; }
	inline void set_playAgain_11(GameObject_t1756533147 * value)
	{
		___playAgain_11 = value;
		Il2CppCodeGenWriteBarrier(&___playAgain_11, value);
	}

	inline static int32_t get_offset_of_scotter_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___scotter_12)); }
	inline Scotter_t2238458108 * get_scotter_12() const { return ___scotter_12; }
	inline Scotter_t2238458108 ** get_address_of_scotter_12() { return &___scotter_12; }
	inline void set_scotter_12(Scotter_t2238458108 * value)
	{
		___scotter_12 = value;
		Il2CppCodeGenWriteBarrier(&___scotter_12, value);
	}

	inline static int32_t get_offset_of_isPlaying_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___isPlaying_13)); }
	inline bool get_isPlaying_13() const { return ___isPlaying_13; }
	inline bool* get_address_of_isPlaying_13() { return &___isPlaying_13; }
	inline void set_isPlaying_13(bool value)
	{
		___isPlaying_13 = value;
	}

	inline static int32_t get_offset_of_lifes_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lifes_14)); }
	inline int32_t get_lifes_14() const { return ___lifes_14; }
	inline int32_t* get_address_of_lifes_14() { return &___lifes_14; }
	inline void set_lifes_14(int32_t value)
	{
		___lifes_14 = value;
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::gm
	GameManager_t2252321495 * ___gm_2;

public:
	inline static int32_t get_offset_of_gm_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___gm_2)); }
	inline GameManager_t2252321495 * get_gm_2() const { return ___gm_2; }
	inline GameManager_t2252321495 ** get_address_of_gm_2() { return &___gm_2; }
	inline void set_gm_2(GameManager_t2252321495 * value)
	{
		___gm_2 = value;
		Il2CppCodeGenWriteBarrier(&___gm_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
