/*Practical 16
Class:SYCM-II      Roll No:03        Course:Object oriented programming
Program to overload ++ and -- unary operators*/
#include<iostream>
using namespace std;
class set
{
	private:
		int no1,no2;
	public:
		//Member function
		void getnumbers(void)
		{
			cout<<"\nEnter two integers of object:";
			cin>>no1>>no2;
		}
		//Member function
		void display(void)
		{
			cout<<"No1= "<<no1;
			cout<<"\tNo2= "<<no2<<"\n";
		}
		//Operator ++ member function
		void operator ++()
		{
			++no1;
			++no2;
		}
		//Operator -- member function
		void operator --()
		{
			--no1;
			--no2;
		}
};    //End of class
//Main Function
int main()
{
	set obj1,obj2;  //create object
	obj1.getnumbers();
	++obj1;  //Overloading ++ operator
	cout<<"Object-1 after increment:\n";
	obj1.display();  //Display object 1
	obj2.getnumbers();
	--obj1;  //Overloading -- operator
	cout<<"Object-2 after decrement:\n";
	obj2.display();  //Display object 2
	return 0;
}












