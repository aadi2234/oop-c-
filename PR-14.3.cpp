//SYCM-I 		Roll No:15
//Date of Performance : 10/11/2022
//Practical no: 14.3
//Title : Program to implement Pointer to Array of Object
#include<iostream>
using namespace std;
class birthday //class
{
	private:
	int day,month,year; //data members
	public:
	void get_date(void) //Member function-1
	{
		cout<<"Enter Birthdate:";
		cin>>day>>month>>year;
	}
	void put_date(void) //Member function-2
	{
		cout<<day<<"-"<<month<<"-"<<year<<endl;
	}
}; //end of class
//main function
int main()
{
	birthday DOB[5]; //create object
	birthday *ptr; //pointer variable
	ptr=&DOB[0]; //Initialize pointer to array of object
	int i;
	cout<<"\nEnter 5 birthdates:\n";
	for(i=0;i<5;++i)
	{
		(ptr+i)->get_date(); //member function call-1
	}
	cout<<"\nBirthdates:\n";
	for(i=0;i<5;++i)
	{
		(ptr+i)->put_date(); //member function call-2
	}
	return 0;
}
