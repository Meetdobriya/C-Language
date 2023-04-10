#include<stdio.h>
#include<conio.h>

// wap of create telecom call service convesation scn. using nested switchcase

main()
{
  int choice,vikalp,pasand,key;
  clrscr();

  printf("press 1 for hindi:\n");
  printf("press 2 for guj:\n");
  printf("press 3 for eng:\n");

  printf("enter your choice:\n");
  scanf("%d",&choice);

  switch(choice)
   {
     case 1:
	  printf("recharge ke liye 1 khara kare\n");
	  printf("offers ke liye 2 khara kare\n");
	  printf("samsya ke liye 3 khara kare\n");

	  printf("vikalp pasad kare:");
	  scanf("%d",&vikalp);

	  switch(vikalp)
	   {
	      case 1:
	      case 2:
	      case 3:
		printf("offer applied..\n");

	   }
	    break;
     case 2:
	   printf("rechage mate 1 pasand karo\n");
	   printf("ringtone rakuva mate 2 pasand karo\n");
	   printf("vartman offer mate 3 pasand karo\n");

	  printf("pasand karo:");
	  scanf("%d",&pasand);

	  switch(pasand)
	   {
	      case 1:
	      case 2:
	      case 3:
		printf("offer applied..\n");

	   }
	    break;

     case 3:
	  printf("press 1 for regular offers\n");
	  printf("press 2 for customer support\n");
	  printf("press 3 for dnd service\n");

	   printf("press suitable key:");
	  scanf("%d",&key);

	  switch(key)
	   {
	      case 1:
	      case 2:
	      case 3:
		printf("offer applied..\n");

	   }
    }

   getch();
}