#pragma once

#include <D2Dll.h>

#if defined(D2LANG_EXPORT)
#define D2LANG_DLL_DECL __declspec( dllexport ) // D2Lang uses both .def files and dllexport
#elif defined(D2LANG_IMPORT)
#define D2LANG_DLL_DECL __declspec( dllimport )
#else
#define D2LANG_DLL_DECL
#endif

#pragma pack(1)


#pragma pack()

D2FUNC_DLL(D2LANG, GetStringByReferenceString, wchar_t*, __fastcall, (char* string), 0x3BC0)			//D2LANG.#10003
D2FUNC_DLL(D2LANG, GetStringFromTblIndex, wchar_t*, __fastcall, (short index), 0x3740)					//D2LANG.#10004
D2FUNC_DLL(D2LANG, GetTblIndex, short, __stdcall, (char* szReference, wchar_t** pUnicode), 0x3960)		//D2LANG.#10013

