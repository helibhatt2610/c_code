#include <stdio.h>
struct matrix
{
	int a[3][3];
	int b[3][3];
};
 
void main()
{
        int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        int b[3][3] = {{10,11,12},{13,14,15},{16,17,18}};
        for(int i=0;i<3;i++)
        {
                for(int j=0;j<3;j++)
                {
                        printf(" %d ",a[i][j]);
                }
                printf("\n");
        }
        for(int i=0;i<3;i++)
        {
                for(int j=0;j<3;j++)
                {
                        printf(" %d ",b[i][j]);
                }
                printf("\n");
        } 
}   

