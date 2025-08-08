#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	int A,B,C,perimeter;
	float area,s/*semiperimeter*/;
	cout<<"Enter 3-sides of Triangle: ";
	cin>>A>>B>>C;
	perimeter=A+B+C;
	s=(perimeter)/2;
	area=sqrt(s*(s-A)*(s-B)*(s-C));
	cout<<"Perimeter="<<perimeter;
	cout<<"\n";
	cout<<"Area="<<area;
return 0;
}

