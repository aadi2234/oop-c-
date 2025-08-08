//SYCM-I		Roll No:15
//Date of Performance : 31/10/2022
//Practical no: 13.1
//Title : Program to implement multiple inheritance
#include<iostream>
using namespace std;
class Area
{
	public:
	int area(int l,int b)
	{
		return (l*b);
	}	
};
class Perimeter
{
	public:
	int perimeter(int l,int b)
	{
		return (2*(l+b));
	}
};
class Rectangle:public Area,public Perimeter
{
	private:
	int length,breadth;
	public:
	void get_data(void);
	void display(void);
};
void Rectangle::get_data()
{
	cout<<"Enter length of Rectangle:";  cin>>length;
	cout<<"Enter Breadth of Rectangle:";  cin>>breadth;
}
void Rectangle::display()
{
	int a,p;
	a=area(length,breadth);
	p=perimeter(length,breadth);
	cout<<"Area of Rectangle="<<a<<endl;
	cout<<"Perimeter of Rectangle="<<p<<endl;
}
int main()
{
	Rectangle R;
	R.get_data();
	R.display();
	return 0;
}




/*class Base
{
	public:
	virtual void print() const=0;
};
class DerivedOne:public Base
{
	public:
	void print() const;
	{
		cout<<"DerivedOne\n";
	}
};
class DerivedTwo:public Base
{
	public:
	void print() const;
	{
		cout<<"DerivedTwo\n";
	}
};
class Multiple:public DerivedOne,public DerivedTwo
{
	public:
	void print() const;
	{
		DerivedTwo::print();
	}
};
int main()
{
	int i;
	Multiple both;
	DerivedOne one;
	Derived
}*/
