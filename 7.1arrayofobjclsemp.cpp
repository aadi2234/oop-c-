//SYCM-I 		Roll No:15
//Date of Performance : 19/09/2022
//Practical : 7.1
//Title : Program to display employees using array of employee objects
#include<iostream>
using namespace std;
class employee
{
  private:
  int emp_id;
  char emp_name[20];
  float emp_salary;
  public:
  void getemp(void)
  {
  	cout<<"Enter Employee Id : ";
  	cin>>emp_id;
  	cout<<"Enter name of employee : ";
  	fflush(stdin);
  	gets(emp_name);
  	cout<<"Enter salary of employee : ";
  	cin>>emp_salary;
  }	
  void display(void)
  {
  	if(emp_salary>25000)
  	  cout<<emp_id<<"\t"<<emp_name<<"\t"<<emp_salary<<"\n";	
  }
};
int main()
{
	employee e[5];
	int i;
	cout<<"Enter information of 5 employees : \n";
	for(i=0;i<5;i++)
		e[i].getemp();
	cout<<"Employees having salary greater than 25000:\n";
	for(i=0;i<5;i++)
		e[i].display();
	return 0;
}
