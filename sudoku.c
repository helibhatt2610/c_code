#include<stdio.h>

void main()
{
	int i,j;
	int b[4][4]={{2,0,0,0},{0,1,0,2},{0,0,3,0},{0,0,0,4}};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d ",b[i][j]);
		}
	printf("\n");
	}
	//for (int i=0;i<4;i++)
	//{
		//for(int j=0;j<4;j++)
	//	{
	//		printf("%d=%d",b[0][0],b[0][j]);
	//	}
//	printf("\n");
//	}
	if(b[0][0]==b[0][1] && b[0][0]==b[0][2] && b[0][0]==b[0][3])
	{
		printf(" same raw ma akdo nai chale\n");
	}
	else
	{
		printf("%d akdo raw ma chalse\n",b[0][0]);
	}
	if(b[0][0]==b[0][1] && b[0][1]==b[0][2] && b[0][1]==b[0][3])
         {
                 printf(" same raw ma akdo nai chale\n");
         }
         else
         {
                 printf("%d akdo raw ma chalse\n",b[0][1]);         }

}
