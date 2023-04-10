// formula of (x-y)3
main()
{
  int x,y;
  clrscr();

  printf("enter value of x:");
  scanf("%d",&x);

  printf("enter value of y:");
  scanf("%d", &y);

  printf("ans: %d", (x*x*x)-(y*y*y)-(3*x*x*y)+(3*x*y*y));

  getch();

}