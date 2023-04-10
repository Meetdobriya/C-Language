#include<stdio.h>
#include<conio.h>

//wap of print month name usinf switch case

main()
{
  char choice;
  clrscr();

  printf("press j for jan\n");
  printf("press f for feb\n");
  printf("press m for march\n");
  printf("press a for april\n");
  printf("press M for may\n");
  printf("press J for jun\n");
  printf("press x for july\n");
  printf("press A for aug\n");
  printf("press s for sept\n");
  printf("press o for oct\n");
  printf("press n for nov\n");
  printf("press d for dec\n");

  printf("enter your choice:\n");
  scanf("%c",&choice);

  switch(choice)
  {
     case 'j': printf("you choose jan\n");break;
     case 'f': printf("you choose feb\n");break;
     case 'm': printf("you choose march\n");break;
     case 'a': printf("you choose april\n");break;
     case 'M': printf("you choose may\n");break;
     case 'J': printf("you choose jun\n");break;
     case 'x': printf("you choose july\n");break;
     case 'A': printf("you choose aug\n");break;
     case 's': printf("you choose sept\n");break;
     case 'o': printf("you choose oct\n");break;
     case 'n': printf("you choose nov\n");break;
     case 'd': printf("you choose dec\n");break;
  }
    getch();
}