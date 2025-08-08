#include<iostream>
using namespace std;
class cs2;
class cs1
{
	int no1;
	public:
	void get_no1(void)
	{
		cout<<"Enter 1st no.:";
		cin>>no1;
	}
	friend void greatest(cs1 no1,cs2 no2);
};
class cs2
{
	int no2;
	public:
	void get_no2(void)
	{
		cout<<"Enter 2nd no.:";
		cin>>no2;
	}
	friend void greatest(cs1 no1,cs2 no2);
};
void greatest(cs1 c1,cs2 c2)
{
	if(c1.no1>c2.no2)
	{
		cout<<c1.no1<<" is greater";
	}
	else 
	cout<<c2.no2<<" is greater";
}
int main()
{
	cs1 c1;
	cs2 c2;
	c1.get_no1();
	c2.get_no2();
	greatest(c1,c2);
}
