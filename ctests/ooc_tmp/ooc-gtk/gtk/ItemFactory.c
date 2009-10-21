/* gtk.ItemFactory source file, generated with ooc */
#include "ItemFactory.h"
lang__Class *GtkItemFactoryEntry_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(GtkItemFactoryEntry);
		_class->instanceSize = sizeof(GtkItemFactoryEntry);
		_class->name = "GtkItemFactoryEntry";
	}
	return _class;
}


lang__Class *ItemFactory_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(lang__Pointer);
		_class->instanceSize = sizeof(lang__Pointer);
		_class->name = "ItemFactory";
	}
	return _class;
}





lang__Class *ItemFactoryEntry_class()
{
	static lang__Class *_class = NULL;
	if (_class == NULL)
	{
		_class = (lang__Pointer) GC_MALLOC(sizeof(lang__Class));
		_class->size = sizeof(gtk__ItemFactoryEntry);
		_class->instanceSize = sizeof(gtk__ItemFactoryEntry);
		_class->name = "ItemFactoryEntry";
	}
	return _class;
}


gtk__ItemFactoryEntry ItemFactoryEntry_new(gtk__GChar *path, gtk__GChar *accelerator, void (*callback)(), gtk__GUInt callbackAction, gtk__GChar *itemType)
{
	gtk__ItemFactoryEntry this;
	this.path = path;
	this.accelerator = accelerator;
	this.callback = callback;
	this.callback_action = callbackAction;
	this.item_type = itemType;
	return this;
}



lang__Void _gtk_ItemFactory_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_BasicTypes_load();
		_lang_ooclib_load();
		_lang_stdio_load();
		_gtk_Gtk_load();
		_gtk_Type_load();
		_gtk_AccelGroup_load();
		_gtk_Widget_load();
	}
}

