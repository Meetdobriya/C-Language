
#include<stdio.h>
#include<conio.h>
#include<string.h>
   //reverse program
main()
{
 int a[5]={1,2,3,4,5};
 int *p[5];
 int *q[5];
 int *r[5];
 int i,j,k;

 clrscr();
 for(i=0;i<=4;i++)
 {
   p[i]=&a[i];
   printf("%u => %d\n",p[i],*p[i]);
 }

 printf("value after revers\n");


  for(i=0;i<=4;i++)
 {

   printf("%u => %d\n",p[i],*p[i]);

 }


getch();
}