#include<stdio.h>
#include<conio.h>

 // find given number is neutral usinf leader

main()
{
 int value;
 clrscr();

 printf("enter the value:");
 scanf("%d",&value);

 if(value > 0)
  {
   printf("positive");

  }
   else if (value < 0)
   {
   printf("negative");

   }
   else
   {
   printf("neutral");

   }
   getch();
}