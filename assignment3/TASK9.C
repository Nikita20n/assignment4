#include<stdio.h>
#include<conio.h>
void main()
{
	 int n;
	 clrscr();
	 printf("enter an integer number:");
	 scanf("%d",&n);
	 (n % 2==0)?
	 printf("%d is even number\n"):
	 printf("%d is odd number");
	 getch();
}