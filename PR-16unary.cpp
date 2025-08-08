//Program to overload ++(increment) and --(decrement) unary operators
#include <iostream>
using namespace std;
class set
{
	private:
	int no1,no2;
	public:
	void getdata()
	{
		cout<<"\n\nEnter 2 integers:";
		cin>>no1>>no2;
	}
	void putdata()
	{
		cout<<"No1="<<no1<<"\tNo2="<<no2;
	}
	//Operator functions declaration
	void operator ++(void);
	void operator --(void);
};
//Operator function defination ++ operator
void set::operator ++(void)
{
	no1=no1+1;
	no2=no2+1;
	return;
}
//Operator function defination -- operator
void set::operator --(void)
{
	no1=no1-1;
	no2=no2-1;
	return;
}
int main()
{
	set s1,s2;
	s1.getdata();//member function call
	cout<<"Object before increment:\n";
	s1.putdata();
	++s1; //operator function call
	cout<<"\nObject after increment:\n";
	s1.putdata();//member function call
	s2.getdata();//member function call
	cout<<"Object before decrement:\n";
	s2.putdata();//member function call
	--s2; //operator function call
	cout<<"\nObject after decrement:\n";
	s2.putdata();//member function call
}
