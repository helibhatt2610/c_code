#include <stdio.h>

void main()
{
	int a[5]={1,2,3,4,5};
	int n=0;
	while(n<10)
	{
		if(n<5)
		{
			printf("no:%d\n",a[n]);
			
		}
		else
		{
			printf("no:%d\n",a[n-5]);
			
		}
		n++;
	}

	
}
