#include<stdio.h>
#include<conio.h>
void reverse(char*str)
{
	  clrscr();
	  if(*str)
	  {
	    reverse(str + 1);
	    printf("%c",*str);
	  }
}
void main()
{
    char a[] = "nikita";
    reverse(a);
    getch();
}