#include<stdio.h>

void main()
{
	int a[5]={10,15,20,7,2};
	int n=0;	
	int i=0;
	while(i<100)
	{
		if(i==a[n])
		{
			printf("%d",a[n]);
			i++;
		}
		else
		{
			printf("");
			i++;
		}
		
	}
}
