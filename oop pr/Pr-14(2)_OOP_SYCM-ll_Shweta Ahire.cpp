/*Practical No.14
Program-2: Program to find area and volume of box using pointer to object */
using namespace std;
#include<iostream>
class box
{
private:
int height;
int width;
int breadth;
int area;
int volume;
public:
//Member function-1
void get_data(void)
{
cout<<"Enter Height: "; cin>>height;
cout<<"Enter Width: "; cin>>width;
cout<<"Enter Breadth: "; cin>>breadth;
}
//Member function
void display(void)
{
area=(2*breadth*width)+(2*breadth*height)+(2*height*width);
volume=height*width*breadth;;
cout<<"\nArea of Box: "<<area;
cout<<"\nVolume of Box: "<<volume;
}
};
//Main function
int main()
{
box obj,*ptr; //Declare object & pointer
ptr=&obj; // Pointer to object
cout<<"Enter Dimensions of Box object:\n";
ptr->get_data(); //Function call using pointer
ptr->display(); //Function call using pointer
return 0;
}
