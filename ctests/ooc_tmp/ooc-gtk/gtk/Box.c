/* gtk.Box source file, generated with ooc */
#include "Box.h"
lang__Class *Box_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Pointer);
		_class->instanceSize = sizeof(lang__Pointer);
		_class->name = "Box";
	}
	return _class;
}



lang__Void Box_packStart_defaults(gtk__Box this, gtk__Widget child)
{
	gtk_box_pack_start(this, child, ((gtk__GBool) (false)), ((gtk__GBool) (false)), ((gtk__GInt) (0)));
}



lang__Void Box_packEnd_defaults(gtk__Box this, gtk__Widget child)
{
	gtk_box_pack_end(this, child, ((gtk__GBool) (false)), ((gtk__GBool) (false)), ((gtk__GInt) (0)));
}



lang__Void _gtk_Box_load()
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
		_gtk_Widget_load();
	}
}

