
#include<iostream>
using namespace std;

class cricketer 
{
	protected:
		int Totalruns;
	
	public:
	   void inputData()
	   {
	   	std::cout<<"Enter total runs:";
	   	std::cin>>Totalruns;
	   }
};
class Batsman:public cricketer
{
	private:
		float averageruns;
		int bestperformance;
	public:
	  void inputdata()
	  {
	  	cricketer::inputData();
	  	std::cout<<"Enter average runs:";
	  	std::cin>>averageruns;
	  	std::cout<<"Enter best performance:";
	  	std::cin>>bestperformance;
	  }	
	  void calculateAverage()
	  {
	  	averageruns=Totalruns/50.0;
	  }
	  void displayData()
	  {
	  	std::cout<<"Total runs:"<<Totalruns<<std::endl;
	  	std::cout<<"Average runs:"<<averageruns<<std::endl;
	  	std::cout<<"Best Performance:"<<bestperformance<<std::endl;
	  }
};
int main()
{
	Batsman batsman;
	batsman.inputdata();
	batsman.calculateAverage();
	batsman.displayData();
	return 0;
}
