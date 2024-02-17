#include<stdio.h>

void main()
{
	int a[5];
	int b;
	int *p;
	p=&b;
	
	printf("%p\n",p);
	printf("%p\n",&p);
	printf("%p\n",&b);
	
	
}
