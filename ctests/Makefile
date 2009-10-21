CC=gcc
LIBS=-std=c99 `pkg-config gtk+-2.0 --libs`
CFLAGS+=-g `pkg-config gtk+-2.0 --cflags`


all: menu
	
menu: menu_c menu_ooc
	@echo "OK, the 2 versions compiled"

menu_c:
	${CC} ${LIBS} ${CFLAGS} menu-test.c -o menu-test-c.x

menu_ooc:
	ooc -sourcepath=.:/media/shared/dev/ooc-gtk:/media/shared/dev/ooc-gdk menu-test.ooc && \
	mv menu-test menu-test-ooc.x
