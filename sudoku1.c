#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct sudoku
{
	int *base_address;
	int size;
};
	void set_data(struct sudoku *p,int r,int c,int data);//x[r][c]=data;
	int get_data(struct sudoku *p,int r,int c);	//x[r][c]
	void init(struct sudoku *p, int size);
	void display(struct sudoku *p);
	void row_check(struct sudoku *p, int r);
	int col_check(struct sudoku *p, int c);
	int box_check(struct sudoku *p, int r, int c);
int main()
{
    struct sudoku s;
	
   	int a[4][4];
    	init(&s, 4);
    	setData(&s, 0, 0, 2);
   	setData(&s, 1, 1, 1);
    	setData(&s, 1, 3, 2);
    	setData(&s, 2, 2, 3);
    	setData(&s, 2, 3, 3);
	setData(&s, 3, 3, 4);
    	display(&s);
	printf("function nu output:%d\n",Box_check(&s,0,0));
	printf("function nu output:%d\n",Box_check(&s,2,0));
	printf("function nu output:%d\n",Box_check(&s,1,2));
	printf("function nu output:%d\n",Box_check(&s,3,3));
	return 0;
}
void init(struct sudoku *p,int size)
{
    int i, j;
    (*p).size =size;
    (*p).base_address=(int *)malloc((*p).size*(*p).size *sizeof(int));
    for (i = 0; i < (*p).size; i++)
    {
        for (j = 0; j <(*p).size; j++)
        {
            set_data(p,i,j,0);
        }
    }
}
void display(struct sudoku *p)
{
    int i, j;
    for (i = 0; i < (*p).size; i++)
    {
        for (j = 0; j < (*p).size; j++)
        {
            printf("%d ", get_data(p,i,j));
        }
        printf("\n");
    }    
}
void setData(struct sudoku *p, int r, int c, int data)
{
    *((*p).base_address + r *(*p).size + c) = data;
	  
}
int get_data(struct sudoku *p, int r,int c)
{
	return *((*p).base_address + r*(*p).size +c);
}
int row_check(struct sudoku *p,int r);
{
	int count[(*p).size + 1],i;
	for(i=0;i < (*p).size+1;i++)
	{
		count[i] = 0;
	}
	for(i=0;i < (*p).size;i++)
	{
		count[get_data(p,i,r)]++;
	}
	for(i=1;i < =(*p).size;i++)
	{
		if(count[i]>=2)
		{
			return 0;
		}
	}
	return 1;
}
int col_check(struct sudoku *p,int c);
{
         int count[(*p).size + 1],i;
         for(i=0;i < (*p).size+1;i++)
         {
                 count[i] = 0;
         }
         for(i=0;i < (* p).size;i++)
         {
                 count[get_data(p,i,c)]++;
         }
         for(i=1;i < =(*p).size;i++)
         {
                 if(count[i]>=2)
                 {
                         return 0;
                 }
         }
         return 1;
  }

int Box_check(struct sudoku *p,int r,int c)
{
	int count[(*p).size +1],i,j,Box_size = sqrt((*p).size);
	r=r-(r % Box_check);
	c=c-(c % Box_check);
	for(i=0;i < (*p).size+1;i++);
	{
		count[i]=0;
	}
	for(i=0;i < Box_check;i++)
	{
		for(j=0;j < Box_check;j++)
		{
			count[get_data(p,r+i,c+j)]++;
		}
	}
	for(i=1;i<=(*p).size;i++)
	{
		if(count[i]>=2)
		{
			return 0;
		}
	}
	  return 1;
}
