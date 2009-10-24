#include "FileEditor.h"
#include <stdbool.h>

FileEditor* openFile(gchar* gfilename){
	char* filename = (char*)gfilename;
	FILE* file = fopen(filename, "r");
	FileEditor* edit = malloc(sizeof(FileEditor));
	
	if(file){
		edit->nLine = countLines(file);
		rewind(file);
		
		edit->content = (char**) malloc(sizeof(char*) * edit->nLine);
		for(int i = 0;i < edit->nLine ;i++){
			char *line = (char*) malloc(sizeof(char) * 100);
			 fgets(line,100,file);
			 //printf("line #%d: %s",i,line);
			 edit->content[i] = line;
		}
		rewind(file);
		
		printf("This file has %d lines\n",edit->nLine);
		fclose(file);
	} else{
		printf("Error while opening the file\n");
	}
	return edit;
}

int countWords(FILE* file){
	bool wasWord = false;
	int cchar = 0;
	int count = 0;
	do
	{
		cchar = fgetc(file);
		/*if(cchar == ' ' || cchar == '\n' && wasWord) {
			count++;
		} else if (cchar == ' ' || cchar == '\n' && !wasWord) {
			
		} else {
			wasWord = true;
		}*/
		count++;
		
		//printf("%c", cchar);
	} while (cchar != EOF);
	return count;
}

int countLines(FILE* file) {
	int cchar = 0;
	int count = 0;
	do
	{
		cchar = fgetc(file);
		if(cchar == '\n') {
			count++;
		}
	} while (cchar != EOF);
	return count;
}
