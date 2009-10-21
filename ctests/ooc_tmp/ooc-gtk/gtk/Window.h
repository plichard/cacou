/* gtk.Window header file, generated with ooc */
#ifndef ___gtk_Window__
#define ___gtk_Window__


#include <gtk/gtk.h>
#include <gdk/gdk.h>
typedef GtkWindow gtk__WindowStruct;
typedef GtkWindow *gtk__Window;

#include <sdk/lang/BasicTypes.h>
#include <sdk/lang/ooclib.h>
#include <sdk/lang/stdio.h>
#include <ooc-gtk/gtk/Gtk.h>
#include <ooc-gtk/gtk/Container.h>
#include <ooc-gtk/gtk/AccelGroup.h>

;
lang__Class *WindowStruct_class();
lang__Class *Window_class();
gtk__Window Window_new();
gtk__Window Window_new_with_title(lang__String title);
lang__Void _gtk_Window_load();

#endif // ___gtk_Window__

