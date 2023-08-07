#include<iostream>
using namespace std;

class oprations
{
		int n1,n2;
public:
	oprations()
	{
		cout<<"Enter the first element:";
		cin>>n1;
		cout<<"Enter the second element:";
		cin>>n2;
		cout<<"\nAddition is:"<<n1+n2;
		cout<<"\nSubtraction is:"<<n1-n2;
		cout<<"\nMultiplication is:"<<n1*n2;
		cout<<"\nDivision is:"<<n1/n2;	
	}
		
};
int main()
{
	oprations o1;//constructor gets called automatically when we create the object of the class.
    return 0;
}
