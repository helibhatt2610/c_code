#include<stdio.h>

void main()
{
	int a[5]={10,15,20,7,2};
	int n=0;	
	int i=0;
	while(i<21)
	{
		while(n<5)
		{
			if(i==a[n])
			{
				printf("%d\n",a[n]);
			
			}
			n++;
		}n=0;
		i++;
	}
}
