#include<stdio.h>
#include<conio.h>

void main()
{

  int i=2000,n;
  clrscr();
  printf("enter number:-");
  scanf("%d",&n);
  while(i<=n)

  {
    if(i%4==0)
    {
     printf("%d\n",i);
    }
     i++;
  }
getch();
}