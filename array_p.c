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
	printf("value of a[0]%p\n",&a[0]);
	printf("value of a[1]%p\n",&a[1]);
	printf("value of a[2]%p\n",&a[2]);
	printf("value of a[3]%p\n",&a[3]);
	printf("value of a[4]%p\n",&a[4]);
	
	
}
