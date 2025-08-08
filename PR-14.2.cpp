//SYCM-I 		Roll No:15
//Date of Performance : 07/11/2022
//Practical no: 14.2
//Title : Program to implement Pointer to Object
#include<iostream>
using namespace std;
class Box
{
	private:
	float w,b,h;
	public:
	void accept(void)
	{
		cout<<"Enter width of box:"; cin>>w;
		cout<<"Enter Breadth of box:"; cin>>b;
		cout<<"Enter Height of box:"; cin>>h;
	}
	float find_area();
	float find_volume();
};
float Box::find_area()
{
	float ar;
	ar=((2*w*b)+(2*b*h)+(2*w*h));
	return ar;
}
float Box::find_volume()
{
	float vol;
	vol=w*h*b;
	return vol;
}
int main()
{
	Box b;
	Box *ptr;
	ptr=&b;
	cout<<"Enter 3-dimensions of box:\n";
	ptr->accept();
	float ar,vol;
	ar=ptr->find_area();
	vol=ptr->find_volume();
	cout<<"\nArea of box="<<ar;
	cout<<"\nVolume of box="<<vol;
	return 0;
}
