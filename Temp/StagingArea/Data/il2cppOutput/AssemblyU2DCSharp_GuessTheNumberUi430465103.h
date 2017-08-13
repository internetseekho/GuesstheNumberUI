#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GuessTheNumberUi
struct  GuessTheNumberUi_t430465103  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text GuessTheNumberUi::text
	Text_t356221433 * ___text_2;
	// System.Int32 GuessTheNumberUi::max
	int32_t ___max_3;
	// System.Int32 GuessTheNumberUi::min
	int32_t ___min_4;
	// System.Int32 GuessTheNumberUi::guess
	int32_t ___guess_5;
	// System.Int32 GuessTheNumberUi::maxGuessAllowed
	int32_t ___maxGuessAllowed_6;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(GuessTheNumberUi_t430465103, ___text_2)); }
	inline Text_t356221433 * get_text_2() const { return ___text_2; }
	inline Text_t356221433 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(Text_t356221433 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(GuessTheNumberUi_t430465103, ___max_3)); }
	inline int32_t get_max_3() const { return ___max_3; }
	inline int32_t* get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(int32_t value)
	{
		___max_3 = value;
	}

	inline static int32_t get_offset_of_min_4() { return static_cast<int32_t>(offsetof(GuessTheNumberUi_t430465103, ___min_4)); }
	inline int32_t get_min_4() const { return ___min_4; }
	inline int32_t* get_address_of_min_4() { return &___min_4; }
	inline void set_min_4(int32_t value)
	{
		___min_4 = value;
	}

	inline static int32_t get_offset_of_guess_5() { return static_cast<int32_t>(offsetof(GuessTheNumberUi_t430465103, ___guess_5)); }
	inline int32_t get_guess_5() const { return ___guess_5; }
	inline int32_t* get_address_of_guess_5() { return &___guess_5; }
	inline void set_guess_5(int32_t value)
	{
		___guess_5 = value;
	}

	inline static int32_t get_offset_of_maxGuessAllowed_6() { return static_cast<int32_t>(offsetof(GuessTheNumberUi_t430465103, ___maxGuessAllowed_6)); }
	inline int32_t get_maxGuessAllowed_6() const { return ___maxGuessAllowed_6; }
	inline int32_t* get_address_of_maxGuessAllowed_6() { return &___maxGuessAllowed_6; }
	inline void set_maxGuessAllowed_6(int32_t value)
	{
		___maxGuessAllowed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
