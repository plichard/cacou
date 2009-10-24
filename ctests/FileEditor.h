#include <gtk/gtk.h>
#include <glade/glade.h>
#include <goocanvas.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
	int x,y;
} Vector2;

typedef struct {
	Vector2 cursor;
	char **content;
	int nLine;
} FileEditor;

FileEditor* openFile(gchar* gfilename);
int countWords(FILE*);
int countLines(FILE*);
