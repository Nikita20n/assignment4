#include<iostream>
using namespace std;

class swapper
{
	private:
		int num1;
		int num2;
	public:
	   swapper(int n1,int n2): num1(n1),num2(n2){}
	   
	   void display()
	   {
	   	
        cout << "Numbers after swapping: " << num1 << " " << num2<<endl;
	   }
	   friend void swapnumbers(swapper& ns);  
	   
};
void swapnumbers(swapper& ns)
{
	ns.num1= ns.num1 + ns.num2;
	ns.num2 = ns.num1 - ns.num2;
    ns.num1 = ns.num1 - ns.num2;
}
int main()
{
	int num1,num2;
	
	cout<<"enter two number:";
	cin>>num1>>num2;
	swapper ns(num1,num2);
	cout << "Numbers before swapping: " << num1 << " " << num2<<endl;
	swapnumbers(ns);
	ns.display();
	return 0;
}


