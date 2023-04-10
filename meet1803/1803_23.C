#include<stdio.h>
#include<conio.h>
void main()
{
  int a=5;
  int *p;
  int i;
  clrscr();
  p=&a;
  for(i=0;i<20;i++)
  {
    printf("%u => %d\n",p+i,*(p+i));
  }
 getch();
}