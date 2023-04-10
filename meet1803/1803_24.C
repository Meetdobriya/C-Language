#include<stdio.h>
#include<conio.h>
void main()
{
  char a[50]= {'y','e','s'};
  char *p;
  int i;
  clrscr();
  p=&a;
  for(i=0;i<20;i++)
  {
    printf("%u => %c\n",p+i,*(p+i));
  }
 getch();
}