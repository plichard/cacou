/* gtk.Container source file, generated with ooc */
#include "Container.h"
lang__Class *ContainerStruct_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__ContainerStruct);
		_class->instanceSize = sizeof(gtk__ContainerStruct);
		_class->name = "ContainerStruct";
	}
	return _class;
}


lang__Class *Container_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Pointer);
		_class->instanceSize = sizeof(lang__Pointer);
		_class->name = "Container";
	}
	return _class;
}






lang__Void _gtk_Container_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_BasicTypes_load();
		_lang_ooclib_load();
		_lang_stdio_load();
		_gtk_Widget_load();
	}
}

