#include<stdio.h>
#include<conio.h>
struct employee{
   int   empno;
   char  empname[50];
   char  empadd[100];
   int   empage;
};
int main()
{
	 struct employee employees[5];
	 int i;
	 clrscr();
	for(i=0;i<5;i++)
	{
	 printf("enter %d employee details\n",i+1);
	  printf("Employee No:\n");
	  scanf("%d",&employees[i].empno);

	  printf("Employee Name:\n");
	  scanf("%s",employees[i].empname);

	  printf("Employee Address:\n");
	  scanf("%s",employees[i].empadd);

	  printf("Employee Age:\n");
	  scanf("%d",&employees[i].empage);

	  printf("\n");
	}
	 printf("----------ALL EMPLOYEE DETAILS----------\n");
	 for(i=0;i<5;i++)
	 {
	  printf("Employee %d:\n",i+1);
	  printf("Employee No:%d\n",employees[i].empno);

	  printf("Employee Name:%s\n",employees[i].empname);

	  printf("Employee Address:%s\n",employees[i].empadd);

	  printf("Employee Age:%d\n",employees[i].empage);

	  printf("\n");
	 }
	 return 0;
}