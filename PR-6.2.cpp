//Practical No.6
//Program to accept and display data of one book
//Class:SYCM-1      Roll no:15

#include<iostream>
#include<string.h>
using namespace std;
class staff
{//data members
	private:
	char name[50];
	float basic_sal;
	float da;
	float hra;
	float gross_sal;
	public:
	//member functions
	void getdate(void)
	{
		float d,h;//local variables
		cout<<"Enter Name of the employee: ";
		gets(name);
		cout<<"Enter Basic Salary of the employee: ";
		cin>>basic_sal;
		cout<<"Enter %DA of the employee: ";
		cin>>d;
		da=(d/100.0)*basic_sal;
		cout<<"Enter %HRA of the employee: ";
		cin>>h;
		hra=(h/100.0)*basic_sal;
		gross_sal=basic_sal+da+hra;
	}
	void dislpay(void)//member function 2
	{
		cout<<"Name of the employee: "<<name<<endl;
		cout<<"Basic Salary of the employee: Rs "<<basic_sal<<"/-"<<endl;
		cout<<"DA of the employee : Rs "<<da<<"/-"<<endl;
		cout<<"HRA of the employee : Rs "<<hra<<"/-"<<endl;
		cout<<"Gross Salary of the employee : Rs "<<gross_sal<<"/-"<<endl;
	}

};
int main()
{
	staff s1;//create object
	cout<<"Enter Salary details of employee "<<endl<<endl;
	s1.getdate();//member function call
	cout<<"\nSalary Details of employee : "<<endl<<endl;
	s1.dislpay();//member function call
	return 0;
}

