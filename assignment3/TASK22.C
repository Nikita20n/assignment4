#include<stdio.h>
#include<conio.h>
void main()
{
     int no,sum=0,firstdigit,lastdigit;
     clrscr();
     printf("enter any number:");
     scanf("%d",&no);
     lastdigit = no%10;
     while(no>=10)
     {
       no=no/10;
     }
     firstdigit=no;
     sum=firstdigit+lastdigit;
     printf("sum of first and lastdigit =%d",sum);
     getch();
}
