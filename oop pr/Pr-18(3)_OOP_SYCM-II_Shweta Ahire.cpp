//Program-3: Program to find area of various geometric shapes using functionoverloading
using namespace std;
#include <iostream>
//Overloaded function prototypes
int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{
//Variable declaration
int side,len,breadth,sq_area,rect_area;
float radius,base,height;
cout<<"Enter side of a square:";
cin>>side;
//find Area of square
sq_area=area(side); //function call
cout<<"Area of square = "<<sq_area;
cout<<"\n\nEnter length and breadth of rectangle:";
cin>>len>>breadth;
//find Area of rectangle
rect_area=area(len,breadth); //function call
cout<<"Area of rectangle = "<<rect_area;
cout<<"\n\nEnter radius of circle:";
cin>>radius;
//find Area of circle
cout<<"Area of circle = "<<area(radius); //function call
cout<<"\n\nEnter base and height of triangle:";
//find Area of triangle
cin>>base>>height;
cout<<"Area of triangle = "<<area(base,height); //function call
return 0;
}
//Function to find area of square
int area(int side)
{
int ar;
ar=side*side;
return(ar);
}
//Function to find area of Rectangle
int area(int l,int b)
{
int ar;
ar=l*b;
return(ar);
}
//Function to find area of circle
float area(float r)
{
float ar;
ar= 3.14*r*r;
return(ar);

}
//Function to find area of Triangle
float area(float bs,float ht)
{
float ar;
ar=(bs*ht)/2;
return(ar);
}
