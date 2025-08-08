/*Practical No.18.1
Program-1:Program to interchange values of two int, float & char variables using function overloading
 Class:SYCM:II     Roll No:03       Course:Object Oriented Programing*/
using namespace std;
#include <iostream>
//Overloaded function pototypes
void interchange (int *px, int *py);
void interchange (float *px, float *py);
void interchange (char *px, char *py);
int main()
{
//Variable declaration
int no1,no2;
float f1,f2;
char ch1,ch2;
cout<<"Enter two integers:";
cin>>no1>>no2;
interchange(&no1,&no2);
//Overloaded function call
cout<<"Integers after interchange: "<<no1<<" "<<no2;
cout<<"\n\nEnter two float numbers:";
cin>>f1>>f2;
interchange(&f1,&f2);
//Overloaded function call
cout<<"Float numbers after interchange: "<<f1<<" "<<f2;
cout<<"\n\nEnter two characters:";
cin>>ch1>>ch2;
interchange(&ch1,&ch2);
//Overloaded function call
cout<<"Characters after interchange: "<<ch1<<" "<<ch2;
return 0;
}
//Function to interchange two integers
void interchange (int *px, int *py)
{
int temp;
temp=*px;
*px=*py;
*py=temp;
return;
}
//Function to interchange two float values
void interchange (float *px, float *py)
{
float temp;
temp=*px;
*px=*py;
*py=temp;
return;
}
//Function to interchange two characters
void interchange (char *px, char *py)
{
char temp;
temp=*px;
*px=*py;
*py=temp;
return;

}
