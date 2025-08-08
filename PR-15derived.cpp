#include <iostream>
using namespace std;
class polygoan
{
	protected:
	int width,height;
	public:
	void get_dimentions()
	{
		cout<<"Enter width:-"; cin>>width;
		cout<<"Enter height:-"; cin>>height;
	}
	//Virtual function
	virtual void area()
	{
		cout<<"\nBase class function..\n";
	}
};
//Derived class-1
class rectangle:public polygoan
{
	public:
	void area()
	{
		float ar;
		ar=width*height;
		cout<<"Area of rectangle:-"<<ar;
	}
};
//Derived class-2
class triangle:public polygoan
{
	public:
	void area()
	{
		float ar;
		ar=(width*height)/2;
		cout<<"Area of triangle:-"<<ar;
	}
};
int main()
{
	polygoan *bptr; //pointer of base class
	rectangle r; //object of derived class-1
	bptr=&r; //base pointer to derived obj.
	cout<<"\n\nEnter dimensions of rectangle:\n";
	bptr->get_dimentions();
	bptr->area();
	triangle t; //object of derived class-2
	bptr=&t; //base pointer to derived obj.
	cout<<"\n\nEnter dimensions of triangle:\n";
	bptr->get_dimentions();
	bptr->area();
}
