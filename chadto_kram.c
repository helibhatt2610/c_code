#include<stdio.h>

void main()
{
	int a[5]={1,9,5,3,8};
	int n=0;
	if(a[0]>a[1]>a[2]>a[3]>a[4])
	{
		printf("so max is %d",a[0]);
	}
	else if(a[1]>a[2]>a[3]>a[4]>a[5])
         {
                 printf("so max is %d",a[1]);
         }
	else if(a[2]>a[3]>a[4]>a[5]>a[1])
         {
                 printf("so max is %d",a[2]);
         }
	else if(a[3]>a[4]>a[5]>a[1]>a[2])
         {
                 printf("so max is %d",a[3]);
         }
	else if(a[4]>a[5]>a[1]>a[2]>a[3])
         {
                 printf("so max is %d",a[4]);
         }

		
	
}
