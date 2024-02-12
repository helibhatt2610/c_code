#include<stdio.h>

void main()
{
	int a[5]={1,9,5,3,8};
	int b[5]={10,10,10,10,10};
	int n=0;
	while(n>5)
	{
	
		printf("%d",b[n]-a[n]);
		n++;
	}
}
