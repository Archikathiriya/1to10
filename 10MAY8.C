#include<stdio.h>
#include<conio.h>

main()
{
   int a=1,n,sum=1;
   clrscr();
   printf("enter num");
   scanf("%d",&n);
   while(a<=n)
   {
     sum=sum*a;
     if(a*n==0)
     {
      printf("%d",a);
     }
     a++;
   }
   printf("sum=%d",sum);
getch();
}