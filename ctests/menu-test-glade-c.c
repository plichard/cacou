#include <gtk/gtk.h>
#include <glade/glade.h>
#include <goocanvas.h>

GtkWidget *file_chooser;
GtkWidget *notebook1;
GtkWidget *fileEditor;


void some_signal_handler_func(GtkWidget *widget, gpointer user_data) {
  /* do something useful here */
}

void
on_window1_delete_event  (GtkObject *object, gpointer user_data)
{
    gtk_main_quit ();
}

void
on_file_quit_activate  (GtkObject *object, gpointer user_data)
{
    gtk_main_quit ();
}


void on_file_open_activate (GtkWidget *widget, gpointer user_data){
	gtk_widget_show(file_chooser);
}

void on_rect_button_press (){
	gtk_widget_show(file_chooser);
}

void on_file_close_activate (GtkWidget *widget, gpointer user_data){
	int i = gtk_notebook_get_current_page(GTK_NOTEBOOK(notebook1));
	gtk_notebook_remove_page(GTK_NOTEBOOK(notebook1),i);
}

void on_file_chooser_delete_event (GtkWidget *widget, gpointer user_data){
	gtk_widget_hide(file_chooser);
}

void on_file_chooser_open_clicked (GtkWidget *widget, gpointer user_data){
	gtk_widget_hide(file_chooser);
}

void on_file_chooser_cancel_clicked (GtkWidget *widget, gpointer user_data){
	gtk_widget_hide(file_chooser);
}

void on_file_new_activate (GtkWidget *widget, gpointer user_data){
	//GtkWidget *textView;
	GtkWidget *canvas = goo_canvas_new();
	
	GooCanvasItemModel *root, *rect_model, *text_model;
    GooCanvasItem *rect_item;
	//goo_canvas_set_bounds (GOO_CANVAS (canvas), 0, 0, 1000, 1000);
	root = goo_canvas_group_model_new (NULL, NULL);
  
    /* Add a few simple items. */
    rect_model = goo_canvas_rect_model_new (root, 100, 100, 400, 400,
                                            "line-width", 10.0,
                                            "radius-x", 20.0,
                                            "radius-y", 10.0,
                                            "stroke-color", "yellow",
                                            "fill-color", "red",
                                            NULL);
  
    text_model = goo_canvas_text_model_new (root, "Hello World", 300, 300, -1,
                                            GTK_ANCHOR_CENTER,
                                            "font", "Sans 10",
                                            NULL);
    //goo_canvas_item_model_rotate (text_model, 45, 300, 300);
  
    goo_canvas_set_root_item_model (GOO_CANVAS (canvas), root);
  
    /* Connect a signal handler for the rectangle item. */
	rect_item = goo_canvas_get_item (GOO_CANVAS (canvas), text_model);
	
	g_signal_connect (rect_item, "motion-notify-event",
                      (GtkSignalFunc) on_rect_button_press, NULL);
	
	
	gtk_widget_show(canvas);
	GtkWidget *label = gtk_label_new("New Source");
	gtk_notebook_append_page(GTK_NOTEBOOK(notebook1),canvas,label);
}

int main(int argc, char *argv[]) {
    GladeXML *xml;
    GtkWidget *window;

    gtk_init(&argc, &argv);

    /* load the interface */
    xml = glade_xml_new("glade-1.glade", NULL, NULL);
    
    
    window = glade_xml_get_widget (xml, "window1");
    file_chooser = glade_xml_get_widget(xml,"file_chooser");
    notebook1 = glade_xml_get_widget(xml,"notebook1");
		gtk_notebook_remove_page(GTK_NOTEBOOK(notebook1),0);
		gtk_notebook_remove_page(GTK_NOTEBOOK(notebook1),0);
		gtk_notebook_remove_page(GTK_NOTEBOOK(notebook1),0);
		on_file_new_activate(NULL,NULL);
		
	
    
    
    
    
    
    glade_xml_signal_connect_data (xml, "on_window1_delete_event", G_CALLBACK (on_window1_delete_event), NULL);
    glade_xml_signal_connect_data (xml, "on_file_open_activate", G_CALLBACK (on_file_open_activate), NULL);
    glade_xml_signal_connect_data (xml, "on_file_chooser_delete_event", G_CALLBACK (on_file_chooser_delete_event), NULL);
    glade_xml_signal_connect_data (xml, "on_file_quit_activate", G_CALLBACK (on_file_quit_activate), NULL);
    glade_xml_signal_connect_data (xml, "on_file_chooser_open_clicked", G_CALLBACK (on_file_chooser_open_clicked), NULL);
    glade_xml_signal_connect_data (xml, "on_file_chooser_cancel_clicked", G_CALLBACK (on_file_chooser_cancel_clicked), NULL);
    glade_xml_signal_connect_data (xml, "on_file_new_activate", G_CALLBACK (on_file_new_activate), NULL);
    glade_xml_signal_connect_data (xml, "on_file_close_activate", G_CALLBACK (on_file_close_activate), NULL);

    /* connect the signals in the interface */
   // glade_xml_signal_autoconnect(xml);

    /* start the event loop */
    //gtk_window_maximize(GTK_WINDOW(window));
    
    gtk_main();

    return 0;
}
