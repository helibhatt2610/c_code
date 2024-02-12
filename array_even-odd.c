#include<stdio.h>

void main()
{
	int n=0;
	int a[5]={1,2,3,4,5};
	while(n<=4)
	{
		if(a[n]%2==0)
		{
			printf("aa %d even chee\n",a[n]);
			n++;
		}
		else
		{
			printf("aa %d  odd che\n",a[n]);
			n++;
		}
		
	}
}
