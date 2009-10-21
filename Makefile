OOC_FLAGS+=-noclean -g -driver=sequence

all:
	ooc -sourcepath=.:../ooc-gtk:../ooc-gdk:../ooc-cairo ${OOC_FLAGS} main.ooc
