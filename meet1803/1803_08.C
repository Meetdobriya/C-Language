#include<stdio.h>
#include<conio.h>

// swap two numers without third variable
main()
{
 int x,y;
 clrscr();
 printf("value of x and y");
 scanf("%d %d",&x,&y);
 printf("value before swap:%d %d",x,y);

 //swaping//

 x = x + y;
 y = x - y;
 x = x - y;

 printf("value after swap: %d %d",x,y);
getch();

}