#include<stdio.h>
#include<conio.h>
void main()
{
	   float principal,rate,time,SI;
	   clrscr();
	   printf("enter the principal:");
	   scanf("%f",&principal);
	   printf("enter the rate:");
	   scanf("%f",&rate);
	   printf("enter the time:");
	   scanf("%f",&time);
	   SI=(principal*rate*time)/100;
	   printf("the simple interest is %f",SI);
	   getch();
}