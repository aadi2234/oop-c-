/*Practical No.17.1
Program-1:Program to overload + operators using friend function to add two complex
numbers
 Class:SYCM:II     Roll No:03       Course:Object Oriented Programing*/
using namespace std;
#include <iostream>
//class decleration
class complex
{
private:
float real;
float imag;
public:
void get_complex()
{
cout << "Enter real and imaginary parts : ";
cin >> real;
cin >> imag;
}
void display_complex()
{
cout << real << "+" << imag << "i";
}
// Operator friend function to overload + operator
friend complex operator + (complex & c1, complex & c2);
};
//Friend operator function definition to overload + operator
complex operator + (complex & c1, complex & c2)
{
complex c;
c.real = c1.real + c2.real;
c.imag = c1.imag + c2.imag;
return c;
}
//Main function
int main()
{
complex c1, c2, result; //create objects
cout<<" Enter first complex number:\n ";
c1.get_complex();
cout<<" Enter second complex number:\n ";
c2.get_complex(); //Add two complex numbers
result = c1 + c2; //Call operator + function
cout<<"\nComplex number-1: ";
c1.display_complex();
cout<<"\nComplex number-2: ";
c2.display_complex();
cout<<"\nSum of complex numbers: ";
result.display_complex();
return 0;
}











	
