#include<stdio.h>

void main()
{
	int n=0;
	int a[5]={1,7,10,9,5};
	//ahi number 1 to 10 ni vachhe lidhelo chee
	while(n<5)
	{
		int p=10-a[n];
		printf("10-%d=%d\n",a[n],p);
		printf("1<=%d<=10",p);
		
		n++;
	}
}
