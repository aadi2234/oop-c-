#include<iostream>
using namespace std;
class set
{
	protected:
int no1,no2;
public:
void getno()
{
cout<<"Enter number 1:";
cin>>no1;
cout<<"\nEnter number 2:";
cin>>no2;
}
void putno()
{
	cout<<"\nNo1="<<no1;
	cout<<"\nNo2="<<no2;
}
friend void swap(set no1, set no2);
};
void swap(set c1,set c2)
{
	int temp;
	temp=c1.no1;
	c1.no1=c2.no1;
	c2.no1=temp;
	temp=c1.no2;
	c1.no2=c2.no2;
	c2.no2=temp;
	cout<<"Object after swaping:\n";
	cout<<"\nObj-1:\n"<<"NO1="<<c1.no1<<"\tNO2="<<c1.no2;
	cout<<"\nObj-2:\n"<<"NO1="<<c2.no1<<"\tNO2="<<c2.no2;
}
int main()
{
set c1,c2;
c1.getno();
c2.getno();
cout<<"\nBefore Sorting:\n";
c1.putno();
c2.putno();
cout<<"\nAfter Sorting:\n";
swap(c1,c2);
return 0;
}
