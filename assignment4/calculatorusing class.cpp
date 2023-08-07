#include<iostream>
using namespace std;

class A
{
    protected:
	int a;
	public:
		void inputdata()
		{
			cout<<"1.Addition\n";
			cout<<"2.subtraction\n";
			cout<<"3.multiplication\n";
			cout<<"4.division\n";
			cout<<"5.exit\n";
		}
	void get_a()
	{
		cout<<"ENTER THE VALUE OF a:";
		cin>>a;
	}	
};
class B:public A
{
	protected:
		int b;
		public:
			void get_b()
			{
				cout<<"ENTER THE VALUE OF b:";
				cin>>b;
			}
};
class C
{
    protected:
	int c;
	public:
		void get_c()
		{
			cout<<"ENTER THE VALUE OF c:";
			cin>>c;
		
		}
		
};
class D:public B,public C
{
   protected:
   int d;
   public:
   void alloperations()
   {
   	   A a1;
   	   a1.inputdata();
   	   int ch;
   	   get_a();
   	   get_b();
   	   get_c();
		  	cout<<"enter a choice:\n";
			cin>>ch; 
   	  if (ch==1)
   	   {
   	   	 cout<<"addition of a,b,c is:"<<a+b+c<<endl;
	   }
   	   else if(ch==2)
   	   {
   	   cout<<"subtraction of a,b,c is:"<<a-b-c<<endl;
       }
       else if(ch==3)
       {
   	   cout<<"multiplication of a,b,c is:"<<a*b*c<<endl;
       }
       else if(ch==4)
       {
   	   cout<<"division of a,b,c is:"<<a/b/c<<endl;
       }
       else
       {
       	cout<<"invalid operation";
	   }
	   }	
};
int main()
{
	D d1;
	d1.alloperations();
	return 0;
}
