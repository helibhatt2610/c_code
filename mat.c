#include<stdio.h>

void main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	
	a[0][0]=1;
	a[0][1]=0;
	a[0][2]=0;
	a[1][0]=0;
	a[1][1]=1;
	a[1][2]=0;
	a[2][0]=0;
	a[2][1]=0;
	a[2][2]=1;

	b[0][0]=1;
         b[0][1]=0;
         b[0][2]=0;
         b[1][0]=0;
         b[1][1]=1;
         b[1][2]=0;
         b[2][0]=0;
         b[2][1]=0;
         b[2][2]=1;

	
	
	printf(" %d ",a[0][0]);
	printf(" %d ",a[0][1]);
	printf(" %d\n",a[0][2]);
	printf(" %d ",a[1][0]);
	printf(" %d ",a[1][1]);
	printf(" %d\n",a[1][2]);
	printf(" %d ",a[2][0]);
	printf(" %d ",a[2][1]);
	printf(" %d\n",a[2][2]);

	printf(" %d ",b[0][0]);
         printf(" %d ",b[0][1]);
         printf(" %d\n",b[0][2]);
         printf(" %d ",b[1][0]);
         printf(" %d ",b[1][1]);
         printf(" %d\n",b[1][2]);
         printf(" %d ",b[2][0]);
         printf(" %d ",b[2][1]);
         printf(" %d\n",b[2][2]);


}
