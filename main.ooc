use gtk, cairo
import cairo/Cairo
import gtk/[Gtk, Window, Button]

g_print: extern func (String, ...)
exit: extern func

main: func {
	
	mainWin := Window new("cacou")
	mainWin setUSize(800, 600) .connect("delete_event", exit)
	mainWin showAll()
	Gtk main()
	
	
	
	
	printf("Exited correctly\n");
}
