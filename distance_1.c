#include<stdio.h>
#include<math.h>
struct point
{
	int x;
	int y;
};
float distance(struct point,struct point);
void main()
{
	struct point p,q;
	p.x=10;
	p.y=20;
	q.x=15;
	q.y=25;
	float d= distance(p,q);
	printf("%f\n",d);
}
float distance(struct point p,struct point q)
{
	float d= sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
	return d;
}
