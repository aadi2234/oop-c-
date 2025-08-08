//SYCM-I 		Roll No:15
//Date of Performance : 19/09/2022
//Practical no: 10.1
//Title : 
#include<iostream>
using namespace std;
class number
{
	private:
	int x,y;
	public:
	//Defalt Constructor
	number(void)
	{
		x=50;
		y=20;
	}
	//Paramaterized Constuctor
	number(int n1,int n2)
	{
		x=n1;
		y=n2;
	}
	//Deconstructor
	~number()
	{
	 cout<<"Object is destroyed....\n";
	}
	//member function
	int sum(void)
	{
		int result;
		result=x+y;
		return result;
	}
	int difference(void)
	{
		int result;
		result=x-y;
		return result;
	}
	int product(void)
	{
		int result;
		result=x*y;
		return result;
	}
    float division(void)
    {
    	float result;
    	result=x/(float)y;
    	return result;
	}
}; //End of class
//main function
int main()
{
	int result,no1,no2;
	float div;
	{
	number no; //create object with default constructor
	result=no.sum();
	cout<<"Sum= "<<result<<endl;
	result=no.difference();
	cout<<"Difference= "<<result<<endl;
	result=no.product();
	cout<<"Product= "<<result<<endl;
	result=no.division();
	cout<<"Division= "<<result<<endl;
    }
	cout<<"Enter two numbers: ";
	cin>>no1>>no2;
	number num(no1,no2); //call parameterized constructor
	result=num.sum();
	cout<<"Sum= "<<result<<endl;
	result=num.difference();
	cout<<"Difference= "<<result<<endl;
	result=num.product();
	cout<<"Product= "<<result<<endl;
	div=num.division();
	cout<<"Division= "<<div<<endl;
	return 0;
}
