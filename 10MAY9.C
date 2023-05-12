#include<stdio.h>
#include<conio.h>

main()
{

  int i=1,fac,n;
  clrscr();
  printf("enter number:");
  scanf("%d",&n);
  while(i<=n)
  {
    fac=fac*i;
    i++;
  }
   printf("%d",fac);
getch();
}