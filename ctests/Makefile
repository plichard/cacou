CC=gcc
LIBS=-std=c99 `pkg-config gtk+-2.0 --libs libglade-2.0`
CFLAGS+=-g `pkg-config gtk+-2.0 --cflags libglade-2.0`
OOC_FLAGS+=-noclean -driver=sequence -v

all: menu
	
menu: menu_c menu_ooc menu_glade_c menu_glade_ooc
	@echo "OK, the 4 versions compiled"

menu_c:
	${CC} ${LIBS} ${CFLAGS} menu-test.c -o menu-test-c.x
	
menu_glade_c:
	${CC} ${LIBS} ${CFLAGS} menu-test-glade-c.c -o menu-test-glade-c.x

menu_ooc:
	ooc -sourcepath=.:../../ooc-gtk:../../ooc-gdk ${OOC_FLAGS} menu-test.ooc && \
	mv menu-test menu-test-ooc.x

menu_glade_ooc:
	ooc -g -nolines -sourcepath=.:../../ooc-gtk:../../ooc-gdk:../../ooc-glade ${OOC_FLAGS} menu-test-glade.ooc && \
	mv menu-test-glade menu-test-glade-ooc.x
	
tutorial: tutorial.c
	gcc -Wall -g -o tutorial.x tutorial.c `pkg-config --cflags --libs gtk+-2.0` -export-dynamic && \
	gtk-builder-convert glade-1.glade glade-1.xml

clean:
	rm -rf *.x ooc_tmp
