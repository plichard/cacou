/* gtk.Gtk source file, generated with ooc */
#include "Gtk.h"
lang__Class *Gtk_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__Gtk);
		_class->instanceSize = sizeof(gtk__Gtk);
		_class->name = "Gtk";
	}
	return _class;
}







lang__Void Gtk_quitAddDestroy(gtk___GObject object)
{
	gtk_quit_add_destroy(1, GTK_OBJECT(object));
}


lang__Class *GBool_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__GBool);
		_class->instanceSize = sizeof(gtk__GBool);
		_class->name = "GBool";
	}
	return _class;
}


lang__Class *GInt_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__GInt);
		_class->instanceSize = sizeof(gtk__GInt);
		_class->name = "GInt";
	}
	return _class;
}


lang__Class *GUInt_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__GUInt);
		_class->instanceSize = sizeof(gtk__GUInt);
		_class->name = "GUInt";
	}
	return _class;
}


lang__Class *GLong_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__GLong);
		_class->instanceSize = sizeof(gtk__GLong);
		_class->name = "GLong";
	}
	return _class;
}


lang__Class *GULong_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__GULong);
		_class->instanceSize = sizeof(gtk__GULong);
		_class->name = "GULong";
	}
	return _class;
}


lang__Class *GPointer_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__GPointer);
		_class->instanceSize = sizeof(gtk__GPointer);
		_class->name = "GPointer";
	}
	return _class;
}


lang__Class *GChar_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__GChar);
		_class->instanceSize = sizeof(gtk__GChar);
		_class->name = "GChar";
	}
	return _class;
}



lang__Void _gtk_Gtk_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_BasicTypes_load();
		_lang_ooclib_load();
		_lang_stdio_load();
		_gtk__GObject_load();
		gtk_init(((lang__Int *) (NULL)), ((lang__String **) (NULL)));
	}
}

