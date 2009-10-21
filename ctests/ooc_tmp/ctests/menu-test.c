/* menu-test source file, generated with ooc */
#include "menu-test.h"
lang__Int main()
{
	GC_INIT();
	_menu_test_load();
	gtk__Window win = Window_new_with_title("Item Factory");
	_GObject_connect_nodata((gtk___GObject) win, "delete_event", exit);
	gtk_widget_set_usize((gtk__Widget) win, ((gtk__GInt) (300)), ((gtk__GInt) (200)));
	gtk__VBox box = (gtk__VBox) gtk_vbox_new(((gtk__GBool) (false)), ((gtk__GInt) (1)));
	gtk_container_set_border_width((gtk__Container) box, 1);
	gtk_container_add((gtk__Container) win, ((gtk__Widget) box));
	gtk__ItemFactoryEntry menuItems[] = {ItemFactoryEntry_new("/_File", NULL, NULL, 0, "<Branch>"), ItemFactoryEntry_new("/File/_New", "<control>N", NULL, 0, NULL), ItemFactoryEntry_new("/File/_Open", "<control>O", NULL, 0, NULL), ItemFactoryEntry_new("/File/_Save", "<control>S", NULL, 0, NULL), ItemFactoryEntry_new("/File/Save _As", NULL, NULL, 0, NULL), ItemFactoryEntry_new("/File/sep1", NULL, NULL, 0, "<Separator>"), ItemFactoryEntry_new("/File/Quit", "<control>Q", _menu_test_closure, 0, NULL), ItemFactoryEntry_new("/_Options", NULL, NULL, 0, "<Branch>"), ItemFactoryEntry_new("/Options/Test", NULL, NULL, 0, NULL), ItemFactoryEntry_new("/_Help", NULL, NULL, 0, "<LastBranch>"), ItemFactoryEntry_new("/_Help/About", NULL, NULL, 0, NULL)};
	gtk__AccelGroup accelg = (gtk__AccelGroup) gtk_accel_group_new();
	gtk__ItemFactory factory = (gtk__ItemFactory) gtk_item_factory_new(GTK_TYPE_MENU_BAR, ((gtk__GChar *) ("<main>")), accelg);
	gtk_item_factory_create_items(factory, ((gtk__GInt) (11)), menuItems, ((gtk__GPointer) (NULL)));
	gtk__Widget menubar = (gtk__Widget) gtk_item_factory_get_widget(factory, ((gtk__GChar *) ("<main>")));
	gtk_window_add_accel_group(win, accelg);
	gtk_box_pack_start((gtk__Box) box, menubar, ((gtk__GBool) (false)), ((gtk__GBool) (true)), ((gtk__GInt) (0)));
	gtk_widget_show_all((gtk__Widget) win);
	gtk_main();
	return 0;
}

lang__Void _menu_test_closure()
{
	gtk_main_quit();
}


lang__Void _menu_test_load()
{
	static lang__Bool __done__ = false;
	if (!__done__)
	{
		__done__ = true;
		_lang_BasicTypes_load();
		_lang_ooclib_load();
		_lang_stdio_load();
		_gtk_Gtk_load();
		_gtk_Window_load();
		_gtk_Type_load();
		_gtk_AccelGroup_load();
		_gtk_ItemFactory_load();
		_gtk_Container_load();
		_gtk_VBox_load();
	}
}

