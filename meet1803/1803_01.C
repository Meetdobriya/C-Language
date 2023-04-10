#include<stdio.h>
#include<conio.h>

main()
{
  int x;
  int y;
  int z;
  int a;
  int b;
  int c;
  int d;

  clrscr();
   x = 98;
   y = 55;
   z = x + y;
   a = x - y;
   b = x * y;
   c = x / y;
   d = x % y;

   printf("addition  of %d and %d is %d\n",x,y,z);

   printf("substraction of %d and %d is %d\n",x,y,a);

   printf("multiplication of %d and %d is %d\n",x,y,b);

   printf("division of %d and %d is %d\n",x,y,c);

   printf("percantage of %d and %d is %d",x,y,d);
   getch();

}
