#include<stdio.h>

void main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int An1= 0;
	int An2= 0;
	int n= 0;
	
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

	c[0][0]=a[0][0]+b[0][0];
	c[0][1]=a[0][1]+b[0][1];
	c[0][2]=a[0][2]+b[0][2];
	c[1][0]=a[1][0]+b[1][0];
	c[1][1]=a[1][1]+b[1][1];
	c[1][2]=a[1][2]+b[1][2];
	c[2][0]=a[2][0]+b[2][0];
	c[2][1]=a[2][1]+b[2][1];
	c[2][2]=a[2][2]+b[2][2];

		
	while(An1<3 || An2<3)
	{
		while(An1<3 || An2<3) 
		{
			if(An2==2)
			{
				printf(" %d\n");
			}
			else
			{
				printf(" %d ",a[An1][An2]);
			}
			An2++;
			
		}
		An1++;
		
		
	}
/*	printf(" %d ",a[0][0]);
	printf(" %d ",a[0][1]);
	printf(" %d\n",a[0][2]);
	printf(" %d ",a[1][0]);
	printf(" %d ",a[1][1]);
	printf(" %d\n",a[1][2]);
	printf(" %d ",a[2][0]);
	printf(" %d ",a[2][1]);
	printf(" %d\n\n\n",a[2][2]);
*/
	printf(" %d ",b[0][0]);
         printf(" %d ",b[0][1]);
         printf(" %d\n",b[0][2]);
         printf(" %d ",b[1][0]);
         printf(" %d ",b[1][1]);
         printf(" %d\n",b[1][2]);
         printf(" %d ",b[2][0]);
         printf(" %d ",b[2][1]);
         printf(" %d\n\n\n",b[2][2]);

	printf(" %d ",c[0][0]);
          printf(" %d ",c[0][1]);
          printf(" %d\n",c[0][2]);
          printf(" %d ",c[1][0]);
          printf(" %d ",c[1][1]);
          printf(" %d\n",c[1][2]);
          printf(" %d ",c[2][0]);
          printf(" %d ",c[2][1]);
          printf(" %d\n",c[2][2]);


}
