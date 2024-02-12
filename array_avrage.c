#include<stdio.h>

void main()
{	
	int n=0;
	int a[5]={5,5,5,10,10};
	while(n<=4)
	{
		if(n<=3)
		{
			printf("%d+",a[n]);
			n++;
		}
		else
		{
			printf("%d/5=%d\n",a[n],(5+5+5+10+10)/5);
			n++;
		}
		
		
	}
	
	
}
