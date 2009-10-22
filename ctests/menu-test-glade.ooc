use gtk, glade
import gtk/[Gtk, Widget], glade/XML

someSignalHandler: func (widget: Widget, userData: GPointer) {
  /* do something useful here */
}

main: func (argc : Int, argv: String*) {
    
    Gtk init(argc&, argv&)

    /* load the interface */
    xml := XML new("glade-1.glade", null, null)

    /* connect the signals in the interface */
    xml signalAutoConnect()

    /* start the event loop */
    Gtk main()
    
}
