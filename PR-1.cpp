//Practical No.1
//Find Roots of Quadratic Equation
//Class:SYCM-1      Roll no:15

#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	int a,b,c;
	float root1,root2,d,x,y;
	cout<<"Enter 3-Coefficient of x:";
	cin>>a>>b>>c;
	d=(b*b)-4*a*c;
	if (d==0)
	{
		cout<<"Roots are 'Equal'";
		root1=(-b)/(2*a);
		root2=(-b)/(2*a);
		cout<<"\n";
		cout<<"Root 1="<<root1;
		cout<<"\nRoot 2="<<root2;
	}
	cout<<"\n";
	if (d>0)
	{
		cout<<"Roots are 'Real'";
		root1=((-b)+sqrt(d))/(2*a);
		root2=((-b)-sqrt(d))/(2*a);
		cout<<"\n";
		cout<<"Root 1="<<root1;
		cout<<"\nRoot 2="<<root2;
	}
	cout<<"\n";
	if (d<0)
	{
		cout<<"Roots are 'Imaginiary'";
		x=(-b)/(2*a);
		y=sqrt(-d)/(2*a);
		cout<<"\n";
		cout<<"Root 1="<<x<<"+"<<y<<"i";
		cout<<"\nRoot 2="<<x<<"-"<<y<<"i";
	}
	cout<<"\n";
	return 0;
}
