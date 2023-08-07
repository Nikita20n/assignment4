#include<stdio.h>
#include<conio.h>
void main()
{
	   int A,B,C;
	   clrscr();
	   printf("enter three numbers:");
	   scanf("%d%d%d",&A,&B,&C);
	   if(A>=B)
	   {
	     if(A>=C)
	     printf("%d is max number.",A);
	     else
	       printf("%d is max number.",C);
	   }
	   else
	   {
	     if(B>=C)
	       printf("%d is max number.",B);
	      else
	       printf("%d is max number.",C);
	   }
	   getch();
}