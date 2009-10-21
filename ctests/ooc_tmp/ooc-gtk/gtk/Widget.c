/* gtk.Widget source file, generated with ooc */
#include "Widget.h"
lang__Class *WidgetStruct_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__WidgetStruct);
		_class->instanceSize = sizeof(gtk__WidgetStruct);
		_class->name = "WidgetStruct";
	}
	return _class;
}


lang__Class *Widget_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Pointer);
		_class->instanceSize = sizeof(lang__Pointer);
		_class->name = "Widget";
	}
	return _class;
}













lang__Int Widget_getWidth(gtk__Widget this)
{
	return (*this).allocation.width;
}


lang__Int Widget_getHeight(gtk__Widget this)
{
	return (*this).allocation.height;
}


lang__Class *GdkWindow_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(GdkWindow);
		_class->instanceSize = sizeof(GdkWindow);
		_class->name = "GdkWindow";
	}
	return _class;
}


lang__Class *GdkRectangle_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(GdkRectangle);
		_class->instanceSize = sizeof(GdkRectangle);
		_class->name = "GdkRectangle";
	}
	return _class;
}


lang__Class *GtkAllocation_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(GtkAllocation);
		_class->instanceSize = sizeof(GtkAllocation);
		_class->name = "GtkAllocation";
	}
	return _class;
}



lang__Void _gtk_Widget_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_BasicTypes_load();
		_lang_ooclib_load();
		_lang_stdio_load();
		_gtk_Gtk_load();
		_gtk__GObject_load();
		_gtk_Window_load();
		_gdk_Drawable_load();
	}
}

