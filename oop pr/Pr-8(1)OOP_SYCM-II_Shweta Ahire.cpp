//Program to swap values of two numbers using friend function
#include<iostream>
using namespace std;
//Class decleration
class number
{ //data members
private:
	int no;
	//Member functions
public:
	void getnumber(void)
	{
		cout<<"Enter Number:";
		cin>>no;
		return;
	}
	void display(void)
	{
		cout<<"\nNumber="<<no;
	}
	//Decleration of friend function
	friend void swap(number &n1,number &n2);
};  //End of class
//Definition of friend function
void swap(number &n1,number &n2)
{
	int temp;
	temp=n1.no;
	n1.no=n2.no;
	n2.no=temp;
}
//Main program
int main()
{
	number n1,n2;  //create objects
	cout<<"Object-1:\n";n1.getnumber();
	cout<<"\nObject-2:\n";n2.getnumber();
	swap(n1,n2);   //Friend function call
	cout<<"\nValues of objects after swapping:\n";
	cout<<"Object-1: ";n1.display();
	cout<<"\nObject-2: ";n2.display();
	cout<<"\n";
	return 0;
}













