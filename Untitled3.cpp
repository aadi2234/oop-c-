#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,d,i,x,y;
	float root1,root2;
	cout<<"Enter 3-coefficient of x: ";
	cin>>a>>b>>c;
	find d=(b*b)-(4*a*c);
	if(d==0)
	  {
	  	root1=(-b)/2a
        root2=(-b)/2a
        cout<<"Equal Roots";
        cout<<"Root 1="<<root1;
        cout<<"Root 2="<<root2;
	  }
	if(d>0)
	  {
	  	root1=(-b)+sqrt(d)/2a
        root2=(-b)-sqrt(d)/2a
        cout<<"Real Roots";
        cout<<"Root 1="<<root1;
        cout<<"Root 2="<<root2;
	  }
	if(d<0)
	  {
	  	x=(-b)/
        cout<<"Real Roots";
        cout<<"Root 1="<<root1;
        cout<<"Root 2="<<root2;
	  }
}
