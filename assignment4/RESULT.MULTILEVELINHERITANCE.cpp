#include<iostream>
using namespace std;

class Student
{
	protected:
		int Rollno;
	public:
	  void display()
	  {
	  	cout<<"enter a Rollno:\n";
	  	cin>>Rollno;
	  }	
	  void putdata()
	  {
	  	cout<<"\n------------------------------------------";
	  	cout<<"\n************Student Marklist***************";
	  	cout<<"\n------------------------------------------";
	  	cout<<"\nRollNo.                  :"<<Rollno;
	  	
	  }
};
class Test:public Student
{
	 public:
	 int sub1,sub2;
	 
	 void display2()
	 {
	 	display();
	 	cout<<"Enter marks for subject1:\n";
	 	cin>>sub1;
	 	cout<<"Enter marks for subject2:\n";
	 	cin>>sub2;
	 }
	 void displaydata()
	 {
	 	putdata();
	 	cout<<"\nMarks of subject1:"<<sub1;
	 	cout<<"\nMarks of subject2:"<<sub1;
	 }	
};
class Result:public Test
{
	private:
		float total;
	public:
	void display3()
	{
	   total=sub1+sub2;	
	   cout<<"\n----------------------------------------------";
	   cout<<"\nTotal marks is:"<<total<<endl;
	   cout<<"\n----------------------------------------------";
	   	
	}	
};
int main()
{
	Result r1;
	
	r1.display2();
	r1.displaydata();
	r1.display3();
	return 0;
}
