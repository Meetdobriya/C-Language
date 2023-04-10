#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 int *p,*q,*r;
 clrscr();
 printf("enter a's value=>");
 scanf("%d",&a);
 printf("enter b's value=>");
 scanf("%d",&b);
 p=&a;
 q=&b;

 r=p;
 p=q;
 q=r;
 printf("swap value of a is %d and b is %d",*p,*q);

 getch();
}