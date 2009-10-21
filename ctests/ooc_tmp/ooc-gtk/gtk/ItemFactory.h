/* gtk.ItemFactory header file, generated with ooc */
#ifndef ___gtk_ItemFactory__
#define ___gtk_ItemFactory__


#include <gtk/gtk.h>
#include <gdk/gdk.h>
typedef GtkItemFactory *gtk__ItemFactory;
typedef GtkItemFactoryEntry gtk__ItemFactoryEntry;

#include <sdk/lang/BasicTypes.h>
#include <sdk/lang/ooclib.h>
#include <sdk/lang/stdio.h>
#include <ooc-gtk/gtk/Gtk.h>
#include <ooc-gtk/gtk/Type.h>
#include <ooc-gtk/gtk/AccelGroup.h>
#include <ooc-gtk/gtk/Widget.h>

lang__Class *GtkItemFactoryEntry_class();
lang__Class *ItemFactory_class();
lang__Class *ItemFactoryEntry_class();
gtk__ItemFactoryEntry ItemFactoryEntry_new(gtk__GChar *path, gtk__GChar *accelerator, void (*callback)(), gtk__GUInt callbackAction, gtk__GChar *itemType);
lang__Void _gtk_ItemFactory_load();

#endif // ___gtk_ItemFactory__

