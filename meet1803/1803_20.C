#include<stdio.h>
#include<conio.h>

// for loop pattern 24

main()
{
 int i,j,k;
  clrscr();
 for(i=5 ;i>=1 ;i--)
 {
     for(k=1 ;k<i ;k++)
     {
       printf(" ");
     }
     for(j=5 ;j>=i ;j-- )
     {
       printf("%d",j);
     }

     printf("\n");
 }

   getch();
}


