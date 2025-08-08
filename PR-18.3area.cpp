#include <iostream>
#include <math.h>
using namespace std;
//Program to find area of circle
float area(float r)
{
	float ar;
	ar=3.14*r*r;
	return ar;
}
//Program to find area of square
int area(int s)
{
	int ar;
	ar=s*s;
	return ar;
}
//Program to find area of rectangle
float area(float l,float b)
{
	float ar;
	ar=l*b;
	return ar;
}
//Program to find area of triangle
float area(float a,float b,float c)
{
	float ar,s;
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}
//main function
int main()
{
	float r,ar,a,b,c,l;
	int s,Area;
	cout<<"Enter radius of Circle:"; cin>>r;
	ar=area(r);
	cout<<"Area of Circle:"<<ar;
	cout<<"\n\nEnter side of Square:"; cin>>s;
	Area=area(s);
	cout<<"Area of Square:"<<Area;
	cout<<"\n\nEnter length & breadth of Rectangle:"; cin>>l>>b;
	ar=area(l,b);
	cout<<"Area of Rectangle:"<<ar;
	cout<<"\n\nEnter 3-sides of Triangle:"; 
	cin>>a>>b>>c;
	ar=area(a,b,c);
	cout<<"Area of Triangle:"<<ar;
	return 0;
}
