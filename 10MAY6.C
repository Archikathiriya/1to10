#include<stdio.h>
#include<conio.h>

main()
{
  clrscr();
  int i=1,n;
  printf("enter number:-");
  scanf("%d",&n);
  while(i<=n)
  {
   if(n%2==0)
   {
    printf("%d\n",n);
   }
    n--;
  }
getch();
}