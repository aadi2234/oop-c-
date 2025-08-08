//Practical No.10 .1
//Program to define a class Number & perform four basic mathematical operations using constructors
using namespace std;
#include <iostream>
class number
{
//Data members
private:
int no1, no2;
public:
//Default constructor
number(void)
{
no1=10;
no2=5;
}
//Parameterized constructor
number(int n1, int n2)
{
no1=n1;
no2=n2;
}
//Member function
int add(void)
{
int sum;
sum=no1+no2;
return sum;
}
//Member function
int subtract(void)
{
int diff;
diff=no1-no2;
return diff;
}
//Member function
int multiply(void)
{
int prod;
prod=no1*no2;
return prod;
}
//Member function
float divide(void)
{
float div;
div=no1/(float) no2;
return div;
}
};
//Main function
int main()
{
number n1; //Call default constructor
int num1,num2,result;

result=n1.add();
cout<<"Sum= "<<result<<"\n";
cout<<"Enter two integers: ";
cin>>num1>>num2;
number n2(num1,num2); //Call parameterized constructor
result=n2.subtract(); //Member function call
cout<<"Subtraction= "<<result<<"\n";
result=n2.multiply(); //Member function call
cout<<"Product= "<<result<<"\n";
float division;
division=n2.divide(); //Member function call
cout<<"Division= "<<division<<"\n";
return 0;
}
