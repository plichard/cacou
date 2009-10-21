use gtk
import gtk/[Gtk,Window,Type,AccelGroup,ItemFactory,Container,VBox]

g_print: extern func (String, ...)
exit: extern func

main: func {
	win := Window new("Item Factory") .connect("delete_event", exit)
	win setUSize(300,200)
	box := VBox new(false,1)
	box add(win)
	
	
	
	win showAll()
	Gtk main()
	
}


getMenu: func {
	accelg := AccelGroup new()
	factory := ItemFactory new(Types menuBar,"<main>",accelg)
	
	
}
