#include<stdio.h>
#include<conio.h>
void main()
{
	 int i;
	 clrscr();
	 printf("the number of odd is:");
	 for(i=1; i<=6;i++)
	 {
	   if(i%2!=0)
	   {
	    printf("%d",i);
	    }
	  }
	 getch();
}