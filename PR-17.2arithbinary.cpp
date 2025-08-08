//Program to create Binary class and overload 4 arithmetic operators using member function
#include<iostream>
using namespace std;
class Binary
{
 	private:
 	float no;
 	public:
 	void get_no(void)
 	{
		cin>>no;	
	}
	void put_no(void)
	{
		cout<<no<<"\n";
	}
	//Operator + function
	Binary operator + (Binary n2)
	{
	    Binary n;
		n.no=no+n2.no;
		return n;	
	}
	//Operator - function
	Binary operator - (Binary n2)
	{
	    Binary n;
		n.no=no-n2.no;
		return n;	
	}
	//Operator * function
	Binary operator * (Binary n2)
	{
	    Binary n;
		n.no=no*n2.no;
		return n;	
	}
	//Operator / function
	Binary operator / (Binary n2)
	{
	    Binary n;
		n.no=no/n2.no;
		return n;	
	}
 };
 //Main function
 int main()
 {
 	Binary N1,N2,N3; //Create objects
 	cout<<"\nEnter 1st Float number:";
 	N1.get_no();
 	cout<<"Enter 2nd Float number:";
 	N2.get_no();
 	cout<<"\n\nResult:-";
    //Addition of Objects
 	N3=N1+N2;  //Call operator + function
 	cout<<"\nAddition: ";
 	N3.put_no();
    //Subtraction of objects
 	N3=N1-N2;  //Call operator - function
 	cout<<"Subtraction: ";
 	N3.put_no();  
	//Multiplication of objects
 	N3=N1*N2;  //Call operator * function
 	cout<<"Multiplication: ";
 	N3.put_no(); //Division of objects
 	N3=N1/N2;  //Call operator / function
 	cout<<"Division: ";
 	N3.put_no();
 	return 0;
 }
 
