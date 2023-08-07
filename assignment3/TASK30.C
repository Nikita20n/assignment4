#include<stdio.h>
#include<conio.h>
int main()
{
       int n1,n2;
       int result;
       int in;
       clrscr();
       do{

	 printf("***** calculator *****\n");
	 printf("1.Addition\n");
	 printf("2.Subtraction\n");
	 printf("3.Multiplication\n");
	 printf("4.Division\n");
	 printf("5.Modulo Division\n");
	 printf("6.Exit\n");
	 printf("Select a Number (1-5):");
	 scanf("%d",&in);

	 if(in==6)
	 {
	   printf("Thank you for traing!\n");
	   break;
	 }
	 printf("enter two number:");
	 scanf("%d%d",&n1,&n2);
	 switch(in)
	 {
	  case 1:
	   printf("addition is %d + %d = %d\n",n1,n2,n1+n2);
	   break;

	   case 2:
	    printf("subtraction is %d - %d = %d\n",n1,n2,n1-n2);
	    break;

	    case 3:
	     printf("multiplication is %d * %d = %d\n",n1,n2,n1*n2);
	     break;

	     case 4:
	      printf("division is %d / %d = %d\n",n1,n2,n1/n2);
	      break;

	      case 5:
	       printf("division is %d %% %d = %d\n",n1,n2,n1%n2);
	       break;

	       default:
		printf("invalid option,please select the valid option\n");
		break;
	     }
	  }while(1);
	  return 0;
}