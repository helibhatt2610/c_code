 #include<stdio.h>

void main()
{
	int n=0;
	int a[5]={1,7,10,9,5};
	//ahi number 1 to 10 ni vachhe lidhelo chee
	while(n<5)
	{
		int p=10-a[n];
		printf("10-%d=%d   ",a[n],p);
		printf("1<=%d<=10\n",p);
        if(p==0)
        {
                 printf("%d suathi max. no che\n",a[n]);
        }
	else if(p==10)
	{
		printf("%d suthi min. no che\n",a[n]);
	}
	if(p==1)
         {
                  printf("%d suathi max. no che\n",a[n]);
         }
         else if(p==9)
         {
                 printf("%d suthi min. no che\n",a[n]);
         }
	if(p==2)
         {
                  printf("%d suathi max. no che\n",a[n]);
         }
         else if(p==8)
         {
                 printf("%d suthi min. no che\n",a[n]);
         }
	if(p==3)
         {
                  printf("%d suathi max. no che\n",a[n]);
         }
         else if(p==7)
         {
                 printf("%d suthi min. no che\n",a[n]);
         }
	if(p==4)
         {
                  printf("%d suathi max. no che\n",a[n]);
         }
         else if(p==6)
         {
                 printf("%d suthi min. no che\n",a[n]);
         }
	if(p==5)
         {
                   printf("%d suathi max. no che\n",a[n]);
         }
         else if(p==5)
         {
                 printf("%d suthi min. no che\n",a[n]);
         }

	

		n++;
	}
}
