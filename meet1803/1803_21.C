#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  int *p;
  clrscr();
  printf("enter a's element=>");
  scanf("%d",&a);
  p=&a;

  printf("square of a is =>%d",(*p)*(*p));



  getch();

}

