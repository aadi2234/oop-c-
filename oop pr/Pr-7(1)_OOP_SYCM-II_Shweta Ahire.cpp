/*Write C++ program to define a class Employee having data members emp_id,emp_name and emp_salary.accept and display data for employees having salary 
greater than 25000*/
#include<iostream>
using namespace std;
class Employee
{
    private:
	int emp_id;
    float emp_salary;
    char emp_name[25];
    public:
	    void accept(void)
	    {
	    	cout<<"\nEnter Employee ID: ";
	        cin>>emp_id;
	        cout<<"Enter Employee Name: ";
	        fflush(stdin);
	        gets(emp_name);
	        cout<<"Enter Employee Salary: ";
	        cin>>emp_salary;
	        return;
		}
	    void display();
}; 
 
void Employee::accept(void)
{
	cout<<"\nEnter Employee ID: ";
	cin>>emp_id;
	cout<<"Enter Employee Name: ";
	fflush(stdin);
	gets(emp_name);
	cout<<"Enter Employee Salary: ";
	cin>>emp_salary;
	return;
}


void Employee::display(void)
{
	if(emp_salary>25000)
	{
		cout<<emp_id;
		cout<<"\t"<<emp_name;
		cout<<"\t"<<emp_salary<<"\n";
	}
}

	
int main()
{
		int i=0;
		Employee emp[5];  
		for(i=0;i<5;i++)
		{
			cout<<"Enter details of Employee- "<<i+1<<":";
			emp[i].accept();
			cout<<"\n";
		}
		cout<<"\nEmployees having Salary greater than Rs.25000:";
		cout<<"\nEmp ID\t\tName\t\tSalary\n";
		for(i=0;i<5;i++)
		{
			emp[i].display();
		}
	return 0;
}
