use gtk, glade
import gtk/[Gtk, Widget], glade/XML




someSignalHandler: func (widget: Widget, userData: GPointer) {
  /* do something useful here */
}

on_main_menu_open_activate: func (widget: Widget, userData: GPointer){
	printf("Get [OPEN] signal!!!\n");
}

main: func (argc : Int, argv: String*) {
    
    Gtk init(argc&, argv&)
    window: Widget

    /* load the interface */
    xml := XML new("glade-1.glade", null, null)
    window = XML getWidget("window1")

    /* connect the signals in the interface */
    xml signalAutoConnect()

    /* start the event loop */
    Gtk main()
    
}
