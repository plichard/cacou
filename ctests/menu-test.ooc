use gtk
import structs/ArrayList
import gtk/[Gtk,Window,Type,AccelGroup,ItemFactory,Container,VBox]

exit: extern func

main: func {
	win := Window new("Item Factory") .connect("delete_event", exit)
	win setUSize(300,200)
	box := VBox new(false,1)
	box setBorderWidth(1)
	win add(box)
	
	
	menuItems := [	ItemFactoryEntry new( "/_File",         null,         null, 0, "<Branch>" ),
					ItemFactoryEntry new( "/File/_New",     "<control>N", null, 0, null ),
					ItemFactoryEntry new( "/File/_Open",    "<control>O", func { printf("Hello, world!\n") }, 0, null ),
					ItemFactoryEntry new( "/File/_Save",    "<control>S", null, 0, null ),
					ItemFactoryEntry new( "/File/Save _As", null,         null, 0, null ),
					ItemFactoryEntry new( "/File/sep1",     null,         null, 0, "<Separator>" ),
					ItemFactoryEntry new( "/File/Quit",     "<control>Q", func { Gtk mainQuit() }, 0, null ),
					ItemFactoryEntry new( "/_Options",      null,         null, 0, "<Branch>" ),
					ItemFactoryEntry new( "/Options/Test",  null,         null, 0, null ),
					ItemFactoryEntry new( "/_Help",         null,         null, 0, "<LastBranch>" ),
					ItemFactoryEntry new( "/_Help/About",   null,         null, 0, null )	
				] as ArrayList<ItemFactoryEntry>
	
	accelg := AccelGroup new()
	
	factory := ItemFactory new(Types menuBar, "<main>", accelg)
	factory createItems(menuItems)
	menubar := factory getWidget("<main>")
	
	win addAccelGroup(accelg)
	box packStart(menubar, false, true, 0);
	
	win showAll()
	Gtk main()
	
}



	
	
	
