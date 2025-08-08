//Program to add two distances in km and m using friend function
#include<iostream>
using namespace std;
//class decleration
class distance
{
	//data members
private:
	int kilometer;
	int meter;
public:
	//Member functions
	void get_distance();
	void display();
	//decleration of friend function
	friend distance add Distance(distance d1,distance d2);
};   //End of class
//Member function definition
void distance::get_distance(void)
{
	cout<<"Enter distance in Km and meter: ";
	cin>>kilometer>>meter;
	return;
}
//Member function definition
void distance::display(void)
{
	cout<<kilometer<<"km"<<meter"m\n";
}
//Definition of friend function
distance Add Distance(distance d1,distance d2)
{
	distance d3;
	int total,km;
	total=d1.meter+d2.meter;
	d3.meter=total%1000;  //Extract meters
	km=total/1000;  //Extract kilometers
	d3.kilometer=km+d1.kilometer+d2.kilometer;
	return d3;
}
//main function
int main()
{
	distance d1,d2,d3;  //create objects
	cout<<"Object-1: ";d1.getdistance();
	couy<<"\nObject-2: ";d2.getdistance();
	d3=AddDistance(d1,d2);  //Friend function call
	cout<<"\nTotal distance= ";
	d3.display();
	return 0;
}

















