/* gtk._GObject source file, generated with ooc */
#include "_GObject.h"
lang__Class *_GObjectStruct_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk___GObjectStruct);
		_class->instanceSize = sizeof(gtk___GObjectStruct);
		_class->name = "_GObjectStruct";
	}
	return _class;
}


lang__Class *_GObject_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Pointer);
		_class->instanceSize = sizeof(lang__Pointer);
		_class->name = "_GObject";
	}
	return _class;
}


gtk__GULong _GObject_connect_nodata(gtk___GObject this, gtk__GChar *signalName, void (*callback)())
{
	return _GObject_connect(this, signalName, callback, NULL);
}


gtk__GULong _GObject_connect(gtk___GObject this, gtk__GChar *signalName, void (*callback)(), gtk__GPointer data)
{
	return gtk_signal_connect(GTK_OBJECT(this), signalName, GTK_SIGNAL_FUNC(callback), data);
}



lang__Void _gtk__GObject_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_BasicTypes_load();
		_lang_ooclib_load();
		_lang_stdio_load();
		_gtk_Gtk_load();
	}
}

