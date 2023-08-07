#include"header.h"
void main()
{
   int j,num,sum=0;
   clrscr();
   for(j=0;j<10;j++)
   {
     printf("enter a no:");
     scanf("%d",&num);
     sum+=num;
   }
   printf("final sum:%d",sum);
   getch();
}