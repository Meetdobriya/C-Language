#include<stdio.h>
#include<conio.h>

// forumula of (x+y)2
main()
{
 int x, y, ans;
 clrscr();


 printf("enter value of x:");
 scanf("%d",&x);

 printf("enter value of y:");
 scanf("%d",&y);

 printf("ans: %d",(x*x)+(2*x*y)+(y*y));


 getch();

}