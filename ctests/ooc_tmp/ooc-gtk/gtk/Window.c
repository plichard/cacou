/* gtk.Window source file, generated with ooc */
#include "Window.h"
lang__Class *WindowStruct_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__WindowStruct);
		_class->instanceSize = sizeof(gtk__WindowStruct);
		_class->name = "WindowStruct";
	}
	return _class;
}


lang__Class *Window_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Pointer);
		_class->instanceSize = sizeof(lang__Pointer);
		_class->name = "Window";
	}
	return _class;
}


gtk__Window Window_new()
{
	return gtk_window_new(GTK_WINDOW_TOPLEVEL);
}


gtk__Window Window_new_with_title(lang__String title)
{
	gtk__Window w = Window_new();
	gtk_window_set_title(w, title);
	return w;
}





lang__Void _gtk_Window_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_BasicTypes_load();
		_lang_ooclib_load();
		_lang_stdio_load();
		_gtk_Gtk_load();
		_gtk_Container_load();
		_gtk_AccelGroup_load();
	}
}

