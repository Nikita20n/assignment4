#include<stdio.h>
#include<conio.h>
void main()
{
	    int a,b;
	    int op;
	    clrscr();
	    printf(" 1.addiion\n 2.subtraction\n 3.numltiplication\n 4.division\n");
	    printf("enter the value of a & b:");
	    scanf("%d%d",&a,&b);
	    printf("enter the choice :");
	    scanf("%d",&op);
	    switch(op)
	    {
	      case 1 :
	       printf("sum of %d and %d is:%d",a,b,a+b);
	      break;

	      case 2:
	       printf("difference of %d and %d is :%d",a,b,a-b);
	       break;

	       case 3:
		printf("multiplication of %d and %d is :%d",a,b,a*b);
		break;

		case 4:
		 printf("division of two nuumbers is %d:",a,b,a/b);
		 break;

		 default:
		  printf("enter the correct choice");

	      }
	      getch();
}

