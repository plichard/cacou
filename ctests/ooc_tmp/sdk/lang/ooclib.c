/* lang.ooclib source file, generated with ooc */
#include "ooclib.h"
lang__Class *VaList_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__VaList);
		_class->instanceSize = sizeof(lang__VaList);
		_class->name = "VaList";
	}
	return _class;
}


lang__Pointer gc_calloc(lang__SizeT nmemb, lang__SizeT size)
{
	return (lang__Pointer) GC_MALLOC(nmemb * size);
}


lang__Void _lang_ooclib_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_BasicTypes_load();
		_lang_ooclib_load();
		_lang_stdio_load();
		_lang_BasicTypes_load();
	}
}

