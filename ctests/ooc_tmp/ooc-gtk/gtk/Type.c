/* gtk.Type source file, generated with ooc */
#include "Type.h"
lang__Class *Type_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__Type);
		_class->instanceSize = sizeof(gtk__Type);
		_class->name = "Type";
	}
	return _class;
}


lang__Class *Types_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__Types);
		_class->instanceSize = sizeof(gtk__Types);
		_class->name = "Types";
	}
	return _class;
}



lang__Void _gtk_Type_load()
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

