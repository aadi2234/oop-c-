#include<iostream>
using namespace std;
class Employee
{
	private:
	int empid,emp_code;
	public:
	void get_emp(void)
	{
		cout<<"Enter emp id & emp code-";
		cin>>empid>>emp_code;
	}
	void virtual display(void)
	{
		cout<<"Emp id-"<<empid;
		cout<<"\nEmp code-"<<emp_code;
	}
};
class Programmer:public Employee
{
	char skill[20];
	public:
	void get_skill(void)
	{
		fflush(stdin);
		cout<<"\nEnter emp skill-";
		gets(skill);
	}
	void display(void)
	{
		cout<<"\nEmp skill-"<<skill;
	}
};
class Manager:public Employee
{
	char depart[20];
	public:
	void get_depart(void)
	{
		fflush(stdin);
		cout<<"\nEnter emp department-";
		gets(depart);
	}
	void display(void)
	{
		cout<<"\nEmp department-"<<depart;
	}
};
int main()
{
	Programmer P;
	Manager M;
	cout<<"\nEnter information of programmer:\n";
	P.get_emp();
	P.get_skill();
	cout<<"\nEnter information of Manager:\n";
	M.get_emp();
	M.get_depart();
	cout<<"\nInformation of programmer:\n";
	P.Employee::display();
	P.display();
	cout<<"\nInformation of Manager:\n";
	M.Employee::display();
	M.display();
}
