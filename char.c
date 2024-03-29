#include<stdio.h>
struct print
{
	char st[100];
	int a;
};
void main()
{
	struct print p;
	p.st[100] = "student";
	p.a = 100;
	printf("%d\n",p.a);
	printf("%s\n",p.st);
}
