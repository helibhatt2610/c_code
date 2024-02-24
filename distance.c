#include<stdio.h>
#include<math.h>
	//declaration
	float dis(int,int,int,int);
void main()
{
	//call
	float g=dis(10,15,20,25);


	printf("%f\n",g);
	
}
	//defination
float dis(int x1,int x2,int y1,int y2)
{
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
	
