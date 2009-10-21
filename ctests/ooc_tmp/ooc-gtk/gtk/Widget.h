/* gtk.Widget header file, generated with ooc */
#ifndef ___gtk_Widget__
#define ___gtk_Widget__


#include <gtk/gtk.h>
#include <gdk/gdk.h>
typedef GtkWidget gtk__WidgetStruct;
typedef GtkWidget *gtk__Widget;

#include <sdk/lang/BasicTypes.h>
#include <sdk/lang/ooclib.h>
#include <sdk/lang/stdio.h>
#include <ooc-gtk/gtk/Gtk.h>
#include <ooc-gtk/gtk/_GObject.h>
#include <ooc-gtk/gtk/Window.h>
#include <ooc-gdk/gdk/Drawable.h>

lang__Class *WidgetStruct_class();
lang__Class *Widget_class();
lang__Int Widget_getWidth(gtk__Widget this);
lang__Int Widget_getHeight(gtk__Widget this);
lang__Class *GdkWindow_class();
lang__Class *GdkRectangle_class();
lang__Class *GtkAllocation_class();
lang__Void _gtk_Widget_load();

#endif // ___gtk_Widget__

