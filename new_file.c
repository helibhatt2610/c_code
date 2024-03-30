#include<stdio.h>

void main()
{
	FILE *name;
//	 name = fopen("new.txt","w"); 
	name = fopen("new.txt","r");
	char str[100];
	
	fprintf(name,"some text\nhello student\n");
	fgets(str,100,name);
	printf("   %s\n",str);
	fgets(str,100,name);
	printf("   %s\n",str);

	fclose(name);
}
