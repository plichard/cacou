/* lang.BasicTypes header file, generated with ooc */
#ifndef ___lang_BasicTypes__
#define ___lang_BasicTypes__


#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include <stdbool.h>
typedef void lang__Void;
typedef void *lang__Pointer;
typedef char lang__Char;
typedef unsigned char lang__UChar;
typedef wchar_t lang__WChar;
typedef char *lang__String;
typedef long long lang__LLong;
typedef int lang__Int;
typedef unsigned int lang__UInt;
typedef short lang__Short;
typedef unsigned short lang__UShort;
typedef long lang__Long;
typedef unsigned long lang__ULong;
typedef unsigned long long lang__ULLong;
typedef int8_t lang__Int8;
typedef int16_t lang__Int16;
typedef int32_t lang__Int32;
typedef int64_t lang__Int64;
typedef uint8_t lang__UInt8;
typedef uint16_t lang__UInt16;
typedef uint32_t lang__UInt32;
typedef uint64_t lang__UInt64;
typedef uint8_t lang__Octet;
typedef size_t lang__SizeT;
typedef bool lang__Bool;
typedef float lang__Float;
typedef long double lang__LDouble;
typedef double lang__Double;
typedef struct _lang__Range lang__Range;
struct _lang__Class;
typedef struct _lang__Class lang__Class;
struct _lang__ClassClass;
typedef struct _lang__ClassClass lang__ClassClass;
struct _lang__Object;
typedef struct _lang__Object lang__Object;
struct _lang__ObjectClass;
typedef struct _lang__ObjectClass lang__ObjectClass;
struct _lang__Iterator;
typedef struct _lang__Iterator lang__Iterator;
struct _lang__IteratorClass;
typedef struct _lang__IteratorClass lang__IteratorClass;
struct _lang__Iterable;
typedef struct _lang__Iterable lang__Iterable;
struct _lang__IterableClass;
typedef struct _lang__IterableClass lang__IterableClass;
struct _lang__Interface;
typedef struct _lang__Interface lang__Interface;
struct _lang__InterfaceClass;
typedef struct _lang__InterfaceClass lang__InterfaceClass;
struct _lang__Exception;
typedef struct _lang__Exception lang__Exception;
struct _lang__ExceptionClass;
typedef struct _lang__ExceptionClass lang__ExceptionClass;

#include <sdk/lang/BasicTypes.h>
#include <sdk/lang/ooclib.h>
#include <sdk/lang/stdio.h>

lang__Class *Pointer_class();
lang__Class *Char_class();
lang__Bool Char_isAlphaNumeric(lang__Char this);
lang__Bool Char_isAlpha(lang__Char this);
lang__Bool Char_isDigit(lang__Char this);
lang__Bool Char_isWhitespace(lang__Char this);
lang__Char Char_toLower(lang__Char this);
lang__Int Char_toInt(lang__Char this);
lang__Void Char_print(lang__Char this);
lang__Void Char_println(lang__Char this);
lang__Class *UChar_class();
lang__Class *WChar_class();
lang__Class *String_class();
lang__String String_new(lang__SizeT length);
lang__Bool String_equals(lang__String this, lang__String other);
lang__Bool String_isEmpty(lang__String this);
lang__Bool String_startsWith(lang__String this, lang__String s);
lang__Bool String_endsWith(lang__String this, lang__String s);
lang__SizeT String_indexOf(lang__String this, lang__Char c);
lang__Bool String_contains(lang__String this, lang__Char c);
lang__String String_trim_space(lang__String this);
lang__String String_trim(lang__String this, lang__Char c);
lang__SizeT String_first(lang__String this);
lang__SizeT String_lastIndex(lang__String this);
lang__Char String_last(lang__String this);
lang__SizeT String_lastIndexOf(lang__String this, lang__Char c);
lang__String String_substring_tillEnd(lang__String this, lang__SizeT start);
lang__String String_substring(lang__String this, lang__SizeT start, lang__SizeT end);
lang__String String_reverse(lang__String this);
lang__Void String_print(lang__String this);
lang__Void String_println(lang__String this);
lang__String String_times(lang__String this, lang__Int count);
lang__String String_clone(lang__String this);
lang__String String_append(lang__String this, lang__String other);
lang__String String_append_char(lang__String this, lang__Char other);
lang__String String_replace(lang__String this, lang__Char oldie, lang__Char kiddo);
lang__String String_prepend(lang__String this, lang__String other);
lang__String String_prepend_char(lang__String this, lang__Char other);
lang__Char String_charAt(lang__String this, lang__SizeT index);
lang__Class *LLong_class();
lang__String LLong_toString(lang__LLong this);
lang__String LLong_toHexString(lang__LLong this);
lang__Bool LLong_isOdd(lang__LLong this);
lang__Bool LLong_isEven(lang__LLong this);
lang__Bool LLong_in(lang__LLong this, lang__Range range);
lang__Class *Int_class();
lang__String Int_toString(lang__Int this);
lang__Bool Int_isOdd(lang__Int this);
lang__Bool Int_isEven(lang__Int this);
lang__Bool Int_in(lang__Int this, lang__Range range);
lang__Class *UInt_class();
lang__Class *Short_class();
lang__Class *UShort_class();
lang__Class *Long_class();
lang__Class *ULong_class();
lang__Class *ULLong_class();
lang__Class *Int8_class();
lang__Class *Int16_class();
lang__Class *Int32_class();
lang__Class *Int64_class();
lang__Class *UInt8_class();
lang__Class *UInt16_class();
lang__Class *UInt32_class();
lang__Class *UInt64_class();
lang__Class *Octet_class();
lang__Class *SizeT_class();
lang__Class *Bool_class();
lang__String Bool_toString(lang__Bool this);
lang__Class *Float_class();
lang__Class *LDouble_class();
lang__Class *Double_class();
lang__String Double_toString(lang__Double this);
lang__Double Double_abs(lang__Double this);struct _lang__Range 
{
	lang__Int min, max;
};

lang__Class *Range_class();
lang__Range Range_new(lang__Int min, lang__Int max);
struct _lang__Class
{
	lang__Class *class;
	lang__SizeT instanceSize;
	lang__SizeT size;
	lang__String name;
	lang__Class *super;
};


struct _lang__ClassClass
{
	struct _lang__Class __super__;
	lang__Object * (*alloc)(lang__Class *);
	lang__Bool (*instanceof)(lang__Class *, lang__Class *);
	lang__Void (*__defaults__)(lang__Class *);
	lang__Void (*__destroy__)(lang__Class *);
	lang__Void (*__load__)();
};


lang__Class *Class_class();

lang__Void Class___load__();
lang__Void Class___defaults__(lang__Class *this);
lang__Void Class___defaults___impl(lang__Class *this);
lang__Void Class___destroy__(lang__Class *this);
lang__Void Class___destroy___impl(lang__Class *this);
lang__Object *Class_alloc(lang__Class *this);
lang__Bool Class_instanceof(lang__Class *this, lang__Class *T);

struct _lang__Object
{
	
	lang__Class *class;
};


struct _lang__ObjectClass
{
	struct _lang__Class __super__;
	lang__Void (*__load__)();
	lang__Void (*__defaults__)(lang__Object *);
	lang__Void (*__destroy__)(lang__Object *);
};


lang__Class *Object_class();

lang__Void Object___load__();
lang__Void Object___defaults__(lang__Object *this);
lang__Void Object___defaults___impl(lang__Object *this);
lang__Void Object___destroy__(lang__Object *this);
lang__Void Object___destroy___impl(lang__Object *this);

struct _lang__Iterator
{
	struct _lang__Object __super__;
	lang__Class *T;
};


struct _lang__IteratorClass
{
	struct _lang__ObjectClass __super__;
	lang__Bool (*hasNext)(lang__Iterator *);
	lang__Void (*next)(lang__Iterator *, lang__Pointer);
};


lang__Class *Iterator_class();

lang__Void Iterator___load__();
lang__Void Iterator___defaults__(lang__Iterator *this);
lang__Void Iterator___defaults___impl(lang__Iterator *this);
lang__Void Iterator___destroy__(lang__Iterator *this);
lang__Void Iterator___destroy___impl(lang__Iterator *this);
lang__Bool Iterator_hasNext(lang__Iterator *this);
void Iterator_next(lang__Iterator *this, lang__Pointer __returnArg);

struct _lang__Iterable
{
	struct _lang__Object __super__;
	lang__Class *T;
};


struct _lang__IterableClass
{
	struct _lang__ObjectClass __super__;
	lang__Iterator * (*iterator)(lang__Iterable *);
};


lang__Class *Iterable_class();

lang__Void Iterable___load__();
lang__Void Iterable___defaults__(lang__Iterable *this);
lang__Void Iterable___defaults___impl(lang__Iterable *this);
lang__Void Iterable___destroy__(lang__Iterable *this);
lang__Void Iterable___destroy___impl(lang__Iterable *this);
lang__Iterator *Iterable_iterator(lang__Iterable *this);

struct _lang__Interface
{
	struct _lang__Object __super__;
	lang__Object *realThis;
	lang__Object *funcs;
};


struct _lang__InterfaceClass
{
	struct _lang__ObjectClass __super__;
	lang__Interface * (*new)(lang__Object *, lang__Object *);
	lang__Void (*init)(lang__Interface *, lang__Object *, lang__Object *);
};


lang__Class *Interface_class();

lang__Void Interface___load__();
lang__Void Interface___defaults__(lang__Interface *this);
lang__Void Interface___defaults___impl(lang__Interface *this);
lang__Void Interface___destroy__(lang__Interface *this);
lang__Void Interface___destroy___impl(lang__Interface *this);
lang__Interface *Interface_new(lang__Object *realThis, lang__Object *funcs);
lang__Void Interface_init(lang__Interface *this, lang__Object *realThis, lang__Object *funcs);
lang__Void Interface_init_impl(lang__Interface *this, lang__Object *realThis, lang__Object *funcs);

struct _lang__Exception
{
	struct _lang__Object __super__;
	lang__Class *origin;
	lang__String msg;
};


struct _lang__ExceptionClass
{
	struct _lang__ObjectClass __super__;
	lang__Exception * (*new)(lang__Class *, lang__String);
	lang__Void (*init)(lang__Exception *, lang__Class *, lang__String);
	lang__Exception * (*new_noOrigin)(lang__String);
	lang__Void (*init_noOrigin)(lang__Exception *, lang__String);
	lang__Void (*crash)(lang__Exception *);
	lang__String (*getMessage)(lang__Exception *);
	lang__Void (*print)(lang__Exception *);
	lang__Void (*throw)(lang__Exception *);
};


lang__Class *Exception_class();

lang__Void Exception___load__();
lang__Void Exception___defaults__(lang__Exception *this);
lang__Void Exception___defaults___impl(lang__Exception *this);
lang__Void Exception___destroy__(lang__Exception *this);
lang__Void Exception___destroy___impl(lang__Exception *this);
lang__Exception *Exception_new(lang__Class *origin, lang__String msg);
lang__Void Exception_init(lang__Exception *this, lang__Class *origin, lang__String msg);
lang__Void Exception_init_impl(lang__Exception *this, lang__Class *origin, lang__String msg);
lang__Exception *Exception_new_noOrigin(lang__String msg);
lang__Void Exception_init_noOrigin(lang__Exception *this, lang__String msg);
lang__Void Exception_init_noOrigin_impl(lang__Exception *this, lang__String msg);
lang__Void Exception_crash(lang__Exception *this);
lang__Void Exception_crash_impl(lang__Exception *this);
lang__String Exception_getMessage(lang__Exception *this);
lang__String Exception_getMessage_impl(lang__Exception *this);
lang__Void Exception_print(lang__Exception *this);
lang__Void Exception_print_impl(lang__Exception *this);
lang__Void Exception_throw(lang__Exception *this);
lang__Void Exception_throw_impl(lang__Exception *this);

lang__Char __OP_IDX_String_SizeT__Char(lang__String string, lang__SizeT index);
lang__String __OP_MUL_String_Int__String(lang__String str, lang__Int count);
lang__String __OP_ADD_String_String__String(lang__String left, lang__String right);
lang__String __OP_ADD_LLong_String__String(lang__LLong left, lang__String right);
lang__String __OP_ADD_String_LLong__String(lang__String left, lang__LLong right);
lang__String __OP_ADD_Int_String__String(lang__Int left, lang__String right);
lang__String __OP_ADD_String_Int__String(lang__String left, lang__Int right);
lang__String __OP_ADD_Bool_String__String(lang__Bool left, lang__String right);
lang__String __OP_ADD_String_Bool__String(lang__String left, lang__Bool right);
lang__String __OP_ADD_Double_String__String(lang__Double left, lang__String right);
lang__String __OP_ADD_String_Double__String(lang__String left, lang__Double right);
lang__String __OP_ADD_String_Char__String(lang__String left, lang__Char right);
lang__String __OP_ADD_Char_String__String(lang__Char left, lang__String right);
lang__Void _lang_BasicTypes_load();

#endif // ___lang_BasicTypes__

