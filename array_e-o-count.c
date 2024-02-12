#include<stdio.h>
 
 void main()
 {
         int n=0;
         int e=0;
         int o=0;
         int a[5]={1,2,3,4,5};
         while(n<5)
         {
                 if(a[n]%2==0)
                 {
                         printf("%d even no.che\n",a[n]);
                         e++;
                 }
                 else
                 {
                         printf("%d odd no. che\n",a[n]);
                         o++;
                 }
                 n++;
         }
         printf("even no ni sankhya=%d\n",e);
         printf("odd no ni sankhya=%d\n",o);
 }

