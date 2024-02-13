#include <stdio.h>

void main()
{
	int a[5]={1,10,15,7,5};
	int n=0;
	while(n<5)
	{
		n++;
		if(n<4)
		{
			printf("%d\n",a[n]);
		}
		else
		{
			printf("%d\n",a[5-n]);
		}
		
		
	}


	
}
