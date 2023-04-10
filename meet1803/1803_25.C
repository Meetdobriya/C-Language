#include<stdio.h>
#include<conio.h>
main()
{
 int a[5]={1,2,3,4,5};
 int *p[5];
 int i;
 clrscr();
 for(i=0;i<=4;i++)
 {
   p[i]=&a[i];
   printf("%u => %d\n",p[i],*p[i]);
 }

getch();
}