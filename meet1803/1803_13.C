#include<stdio.h>
#include<conio.h>

// 1. swaping two variables
main()
{
 int x,y,z;

 clrscr();

 printf("value before swap x:");
 scanf("%d",&x);

 printf("value before swap y:");
 scanf("%d",&y);
  z=x;
  x=y;
  y=z;

  printf("value after swap x: %d,y: %d",x,y);
   getch();

}