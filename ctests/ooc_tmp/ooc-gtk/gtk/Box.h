/* gtk.Box header file, generated with ooc */
#ifndef ___gtk_Box__
#define ___gtk_Box__


#include <gtk/gtk.h>
#include <gdk/gdk.h>
typedef GtkBox *gtk__Box;

#include <sdk/lang/BasicTypes.h>
#include <sdk/lang/ooclib.h>
#include <sdk/lang/stdio.h>
#include <ooc-gtk/gtk/Gtk.h>
#include <ooc-gtk/gtk/Container.h>
#include <ooc-gtk/gtk/Widget.h>

lang__Class *Box_class();
lang__Void Box_packStart_defaults(gtk__Box this, gtk__Widget child);
lang__Void Box_packEnd_defaults(gtk__Box this, gtk__Widget child);
lang__Void _gtk_Box_load();

#endif // ___gtk_Box__

