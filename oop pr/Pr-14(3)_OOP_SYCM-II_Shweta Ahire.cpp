/*Practical No.14
Program-3: Program to display birthday of 5 objects using pointer to Array of objects */
using namespace std;
#include<iostream>
class birthday
{
private:
int day;
int month;
int year;
public:
//Member function-1
void get_date(void)
{
cout<<"\nEnter day number: ";
cin>>day;
cout<<"Enter month number: ";
cin>>month;
cout<<"Enter digit year: ";
cin>>year;
}
//Member function-2
void display_date(void)
{
cout<<day<<"/"<<month<<"/"<<year<<"\n";
}
};
//Main function
int main()
{
birthday date[5];
birthday *ptr1, *ptr2;
ptr1=&date[0];
int i;
// Pointer to Array of objects
ptr2 = ptr1;
cout<<"Enter 5 Birth Dates :\n";
for(i=0;i<5;++i)
{
ptr1-> get_date(); //Function call using pointer
++ptr1;
}
cout<<"\nList of 5 Birth Dates :\n";
for(i=0;i<5;++i)
{
ptr2-> display_date(); //Function call using pointer

++ptr2;
}
return 0;
}
