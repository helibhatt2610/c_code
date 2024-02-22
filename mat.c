#include<stdio.h>

void main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3]={1,10,20,10,12,77,54,45,11};
	int c[3][3];
	int An1= 0;
	int An2= 0;
	int Bn1=0;
	int Bn2=0;
	
/*
	c[0][0]=a[0][0]+b[0][0];
	c[0][1]=a[0][1]+b[0][1];
	c[0][2]=a[0][2]+b[0][2];
	c[1][0]=a[1][0]+b[1][0];
	c[1][1]=a[1][1]+b[1][1];
	c[1][2]=a[1][2]+b[1][2];
	c[2][0]=a[2][0]+b[2][0];
	c[2][1]=a[2][1]+b[2][1];
	c[2][2]=a[2][2]+b[2][2];*/
	
	while(An1<3 && An2<3)
	{
		while(An1<3 && An2<3)
		{
			if(An2==2)
			{
				printf(" %d\n",a[An1][An2]);
				An2++;
			}
			else
			{
				printf(" %d ",a[An1][An2]);
				An2++;
			}
		}
		An1++;	
		An2=0;
	}
	printf("\n\n");
	
	 while(Bn1<3 && Bn2<3)
         {
                 while(Bn1<3 && Bn2<3)
                 {
                         if(Bn2==2)
                         {
                                 printf(" %d\n",b[Bn1][Bn2]);
                                 Bn2++;
                         }
                         else
                         {
                                 printf(" %d ",b[Bn1][Bn2]);
                                 Bn2++;
                         }
	
		}Bn1++;
                 Bn2=0;
	}printf("\n\n");
		An1= 0;
         	 An2= 0;
         	 Bn1=0;
         	 Bn2=0;


	 while(An1,Bn1<3 && An2,Bn2<3)
         {
                 while(An1,Bn1<3 && An2,Bn2<3)
                 {
                         if(An2,Bn2==2)
                         {
                                 printf(" %d\n",a[An1][An2]+b[Bn1][Bn2]);
                                 An2++;
				Bn2++;
                         }
                         else
                         {
                                 printf(" %d ",a[An1][An2]+b[Bn1][Bn2]);
                                 An2++;
				Bn2++;
                         }
		
	    	}An1++;
			Bn1++;
			An2=0;
			Bn2=0;
	}
	printf("\n\n");
}
