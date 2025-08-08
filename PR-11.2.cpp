//SYCM-I 		Roll No:15
//Date of Performance : 13/10/2022
//Practical no: 11.2
//Title : Program to implement single inheritance
#include<iostream>
using namespace std;
class Employee
{
	private:
	int emp_no;
	char name[25];
	char emp_dest[25];
	public:
	void get_emp(void)
	{
		cout<<"Enter Emp no: "; 
		cin>>emp_no;
		fflush (stdin);
		cout<<"Enter name: ";
	    gets(name);
	    fflush (stdin);
	    cout<<"Enter emp destignation:";
		gets(emp_dest);
	}
	    void put_emp(void)
	{
		cout<<"Emp no: "<<emp_no;
		cout<<"\nName: "<<name;
		cout<<"\nEmp emp destignation:"<<emp_dest;
    }
};
class Salary:public Employee
{
	//Data member
	private:
	float basic;
	float DA;
	float HRA;
	float Gross_sal;
	//member functions
   	public:
   	void get_sal(void)
{
	float D,H;
	cout<<"Enter basic salary: ";
	cin>>basic;	
	cout<<"Enter %DA: ";
	cin>>D;	
	DA=(D*basic)/100;
	cout<<"Enter %HRA: ";
	cin>>H;
	HRA=(H*basic)/100;
	Gross_sal=basic+DA+HRA;
}
void put_sal(void)
{
  cout<<"\nBasic Salary: "<<basic;
  cout<<"\nDA: "<<DA;
  cout<<"\nHRA: "<<HRA;	
  cout<<"\nGross_sal: "<<Gross_sal;	
}
}; //End of class
int main()
{
	Salary s1;//create object
	cout<<"Enter Salary details of employee "<<endl<<endl;
	s1.get_emp();//member function call
	s1.get_sal();
	cout<<"\nSalary Details of employee : "<<endl<<endl;
    s1.put_emp();//member function call
	s1.put_sal();
	return 0;
}

