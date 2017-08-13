#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_GuessTheNumberUi430465103.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "AssemblyU2DCSharp_LevelManager3355282079.h"

// GuessTheNumberUi
struct GuessTheNumberUi_t430465103;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// LevelManager
struct LevelManager_t3355282079;
extern Il2CppCodeGenString* _stringLiteral3977201349;
extern const uint32_t GuessTheNumberUi_GuessHigher_m2752768376_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2806707704;
extern const uint32_t GuessTheNumberUi_GuessLower_m3333744822_MetadataUsageId;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1735959205;
extern Il2CppCodeGenString* _stringLiteral339800536;
extern const uint32_t GuessTheNumberUi_NextGuess_m3026478960_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4281087392;
extern const uint32_t LevelManager_LoadLevel_m3771066388_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral635362467;
extern const uint32_t LevelManager_QuitRequest_m3014183236_MetadataUsageId;




// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuessTheNumberUi::StartGame()
extern "C"  void GuessTheNumberUi_StartGame_m1188161336 (GuessTheNumberUi_t430465103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuessTheNumberUi::NextGuess()
extern "C"  void GuessTheNumberUi_NextGuess_m3026478960 (GuessTheNumberUi_t430465103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m3437620292 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m694320887 (Il2CppObject * __this /* static, unused */, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2960866144 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C"  void Application_LoadLevel_m393995325 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m3885595876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GuessTheNumberUi::.ctor()
extern "C"  void GuessTheNumberUi__ctor_m2176680302 (GuessTheNumberUi_t430465103 * __this, const MethodInfo* method)
{
	{
		__this->set_max_3(((int32_t)100));
		__this->set_min_4(1);
		__this->set_maxGuessAllowed_6(((int32_t)10));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GuessTheNumberUi::Start()
extern "C"  void GuessTheNumberUi_Start_m2907350330 (GuessTheNumberUi_t430465103 * __this, const MethodInfo* method)
{
	{
		GuessTheNumberUi_StartGame_m1188161336(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GuessTheNumberUi::StartGame()
extern "C"  void GuessTheNumberUi_StartGame_m1188161336 (GuessTheNumberUi_t430465103 * __this, const MethodInfo* method)
{
	{
		GuessTheNumberUi_NextGuess_m3026478960(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GuessTheNumberUi::GuessHigher()
extern "C"  void GuessTheNumberUi_GuessHigher_m2752768376 (GuessTheNumberUi_t430465103 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GuessTheNumberUi_GuessHigher_m2752768376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_guess_5();
		__this->set_min_4(L_0);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, _stringLiteral3977201349, /*hidden argument*/NULL);
		GuessTheNumberUi_NextGuess_m3026478960(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GuessTheNumberUi::GuessLower()
extern "C"  void GuessTheNumberUi_GuessLower_m3333744822 (GuessTheNumberUi_t430465103 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GuessTheNumberUi_GuessLower_m3333744822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_guess_5();
		__this->set_max_3(L_0);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, _stringLiteral2806707704, /*hidden argument*/NULL);
		GuessTheNumberUi_NextGuess_m3026478960(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GuessTheNumberUi::NextGuess()
extern "C"  void GuessTheNumberUi_NextGuess_m3026478960 (GuessTheNumberUi_t430465103 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GuessTheNumberUi_NextGuess_m3026478960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_min_4();
		int32_t L_1 = __this->get_max_3();
		int32_t L_2 = Random_Range_m694320887(NULL /*static, unused*/, L_0, ((int32_t)((int32_t)L_1+(int32_t)1)), /*hidden argument*/NULL);
		__this->set_guess_5(L_2);
		int32_t L_3 = __this->get_guess_5();
		int32_t L_4 = L_3;
		Il2CppObject * L_5 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral1735959205, L_5, /*hidden argument*/NULL);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Text_t356221433 * L_7 = __this->get_text_2();
		int32_t* L_8 = __this->get_address_of_guess_5();
		String_t* L_9 = Int32_ToString_m2960866144(L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_9);
		int32_t L_10 = __this->get_maxGuessAllowed_6();
		__this->set_maxGuessAllowed_6(((int32_t)((int32_t)L_10-(int32_t)1)));
		int32_t L_11 = __this->get_maxGuessAllowed_6();
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		Application_LoadLevel_m393995325(NULL /*static, unused*/, _stringLiteral339800536, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1225645824 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadLevel_m3771066388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral4281087392, L_0, /*hidden argument*/NULL);
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		Application_LoadLevel_m393995325(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuitRequest()
extern "C"  void LevelManager_QuitRequest_m3014183236 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_QuitRequest_m3014183236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, _stringLiteral635362467, /*hidden argument*/NULL);
		Application_Quit_m3885595876(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
