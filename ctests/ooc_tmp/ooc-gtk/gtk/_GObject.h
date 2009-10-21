/* gtk._GObject header file, generated with ooc */
#ifndef ___gtk__GObject__
#define ___gtk__GObject__


#include <gtk/gtk.h>
#include <gdk/gdk.h>
typedef GtkObject gtk___GObjectStruct;
typedef GtkObject *gtk___GObject;

#include <sdk/lang/BasicTypes.h>
#include <sdk/lang/ooclib.h>
#include <sdk/lang/stdio.h>
#include <ooc-gtk/gtk/Gtk.h>

lang__Class *_GObjectStruct_class();
lang__Class *_GObject_class();
gtk__GULong _GObject_connect_nodata(gtk___GObject this, gtk__GChar *signalName, void (*callback)());
gtk__GULong _GObject_connect(gtk___GObject this, gtk__GChar *signalName, void (*callback)(), gtk__GPointer data);
lang__Void _gtk__GObject_load();

#endif // ___gtk__GObject__

