#include <gtk/gtk.h>
 
static GtkWidget *file_chooser;
 
 
void 
on_window_destroy (GtkObject *object, gpointer user_data)
{
    gtk_main_quit ();
}

void
on_quit_menu_item_activate (GtkObject *object, gpointer user_data)
{
    gtk_main_quit ();
}

void
on_window1_delete_event  (GtkObject *object, gpointer user_data)
{
    gtk_main_quit ();
}

void
on_main_menu_open_activate (GtkObject *object, gpointer user_data)
{
    printf("CACOUUUUUUUUUUUUUUUUUUUU!!!\n");
    gtk_widget_show(file_chooser);
}

void
on_file_chooser_open_clicked (GtkObject *object, gpointer user_data)
{
    gtk_widget_hide(file_chooser);
}

void
on_file_chooser_cancel_clicked (GtkObject *object, gpointer user_data)
{
    gtk_widget_hide(file_chooser);
}

void
on_file_chooser_delete_event (GtkObject *object, gpointer user_data)
{
    gtk_widget_hide(file_chooser);
}
 
int
main (int argc, char *argv[])
{
    GtkBuilder      *builder; 
    GtkWidget       *window;
    
 
    gtk_init (&argc, &argv);
 
    builder = gtk_builder_new ();
    gtk_builder_add_from_file (builder, "glade-1.xml", NULL);
    window = GTK_WIDGET (gtk_builder_get_object (builder, "window1"));
    file_chooser = GTK_WIDGET (gtk_builder_get_object (builder, "file_chooser"));
    gtk_builder_connect_signals (builder, NULL);
 
    g_object_unref (G_OBJECT (builder));
        
    gtk_window_maximize(GTK_WINDOW(window));
    gtk_widget_show (window);     
               
    gtk_main ();
 
    return 0;
}
