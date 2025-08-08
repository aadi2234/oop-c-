//SYCM-I 		Roll No:15
//Date of Performance : 22/09/2022
//Practical : 8.1
//Title : Program to swap the values of two variables using friend function.
#include<iostream>
using namespace std;
class number
{
	private:
	int no1,no2;
	public:
	void getdata(void);
	void putdata(void);
	//friend function declaration
	friend void swap(number &obj1,number &obj2);
};
//member function defination-1
void number::getdata(void)
{
cout<<"Enter two numbers: ";
cin>>no1>>no2;
}
//member function defination-1
void number::putdata(void)
{
cout<<"\nNo1="<<no1;
cout<<"\nNo2="<<no2;
}
//friend function defination
void swap(number &obj1,number &obj2)
{
	int temp;
	//swap first no. of objects
	temp=obj1.no1;
	obj1.no1=obj2.no1;
	obj2.no1=temp;
	//swap second no. of objects
	temp=obj1.no2;
	obj1.no2=obj2.no2;
	obj2.no2=temp;
}
int main()
{
	number obj1,obj2;
	cout<<"Enter the number of object-1:\n ";
	obj1.getdata();
	cout<<"Enter the number of object-2:\n ";
	obj2.getdata();
	cout<<"\nObject before swapping:";
	cout<<"\nObject-1: ";
	obj1.putdata();
	cout<<"\nObject-2: ";
	obj2.putdata();
	//swap two objects
	swap(obj1,obj2); //friend function call
	cout<<"\n\nObject After swapping:";
	cout<<"\nObject-1: ";obj1.putdata();
	cout<<"\nObject-2: ";obj2.putdata();
	return 0;
}

