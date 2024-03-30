#include<stdio.h>

void main()
{
	FILE *name; 
	name = fopen("new.txt","w");
	
	fprintf(name,"some text");
	fclose(name);
}
