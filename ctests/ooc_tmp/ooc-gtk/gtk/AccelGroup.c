/* gtk.AccelGroup source file, generated with ooc */
#include "AccelGroup.h"
lang__Class *AccelGroup_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Pointer);
		_class->instanceSize = sizeof(lang__Pointer);
		_class->name = "AccelGroup";
	}
	return _class;
}




lang__Void _gtk_AccelGroup_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_BasicTypes_load();
		_lang_ooclib_load();
		_lang_stdio_load();
	}
}
