//Practical No.13-1
//Program-1 to implement Multiple Inheritance using Area, Perimeter -> Rectangle classes
#include <iostream>
using namespace std;
//Base class-1
class Area
{
public:
//Member function
float find_area(float len, float br)
{
float area;
area=len * br;
return area;
}
}; //End of Base class-1
//Base class-2
class Perimeter
{
public:
//Member function
float find_perimeter(float len, float br)
{
float perimeter;
perimeter=2*(len + br);
return perimeter;
}
}; //End of Base class-2
//Derived class
class Rectangle : public Area, public Perimeter

{
//Data Members
private:
float length, breadth;
public:
//Member function
void get_data(void)
{
cout<<"Enter length & breadth of Rectangle: ";
cin>>length>>breadth;
}
void display(void)
{
float area, perimeter;
area=find_area(length, breadth);
cout<<"Area of Rectangle: "<<area<<endl;
perimeter=find_perimeter(length, breadth);
cout<<"Perimeter of Rectangle: "<<perimeter<<endl;
}
};//End of Derived class

//Main function
int main()
{
Rectangle r ; //Object of Derived class

r.get_data();
r.display();
return 0;
}
