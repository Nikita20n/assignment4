#include<stdio.h>
#include<conio.h>
#define PI3.14
void main()
{
	 int r,l,b,areaa;
	 float area,b2,h,a2;
	 clrscr();
	 printf("enter radius of circle:");
	 scanf("%d",&r);
	 area=3.14*r*r;
	 printf("area of circle=%f\n",area);
	 printf("enter length & breadth of rectangle:");
	 scanf("%d%d",&l,&b);
	 areaa=l*b;
	 printf("area of rectangle=%d\n",areaa);
	 printf("enter base and height:");
	 scanf("%f%f",&b2,&h);
	 a2=(0.5 * b2 * h);
	 printf("area of triagle=%.2f",a2);
	 getch();
}