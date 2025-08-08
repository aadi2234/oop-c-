//Program to overload + operators using friend function to add two complex numbers
#include <iostream>
using namespace std;
class complex
{
	private:
	float real,imag;
	public:
	void getno()
	{
		cout<<"Enter real and imaginary parts : ";
		cin>>real>>imag;
	}
	void putno()
	{
		cout<<real<<"+"<<imag<<"i";
	}
	// Operator friend function to overload + operator
	friend complex operator + (complex c1, complex c2);
};
//Friend operator function definition to overload + operator
complex operator + (complex c1, complex c2)
{
	complex c;
	c.real=c1.real+c2.real;
	c.imag=c1.imag+c2.imag;
	return c;
}
//Main function
int main()
{
	complex c1,c2,c3; //create objects
	cout<<"Enter first complex number:\n ";
	c1.getno();
	cout<<"Enter second complex number:\n ";
	c2.getno(); 
	//Add two complex numbers
	c3=c1+c2; //Call operator + function
	cout<<"\nSum of complex numbers: ";
	c3.putno();
	return 0;
}
