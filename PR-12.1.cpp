//SYCM-I 		Roll No:15
//Date of Performance : 20/10/2022
//Practical no: 12.1
//Title : Program to implement multilevel inheritance
#include<iostream>
#include<string.h>
using namespace std;
class person 
{
 private:
 char name[25];
 char gender[20];
 int age;
 public:
void getperson()
 {
 cout<<"Enter Name of Employee: ";
 fflush(stdin);
 gets(name);
 cout<<"Enter Gender: ";
 fflush(stdin);
 gets(gender);
 cout<<"Enter age of Employee: ";
 cin>>age;
}
 void putperson()
{
 cout<<"Name of Employee= "<<name;
 cout<<"\nGender= "<<gender;
 cout<<"\nAge= "<<age;
}
};
class employee:public person
{
 private:
 int emp_id;
 char company[20];
 float salary;
 public:
 void get_emp()
{
 cout<<"Enter Employee ID: ";
 cin>>emp_id;
 cout<<"Enter the Name of Company: ";
 fflush(stdin);
 gets(company);
 cout<<"Enter salary of Employee: ";
 cin>>salary;
}
 void put_emp()
{
 cout<<"\nEmployee ID= "<<emp_id;
 cout<<"\nName of Company= "<<company;
 cout<<"\nSalary= "<<salary;
}
};
class programmer:public employee
{
 private:
 int langno;
 public:
 void getlang()
{
cout<<"Enter Number of Languages known: ";
 cin>>langno;
}
 void putlang()
 {
 cout<<"\nNumber of Languages known= "<<langno;
 }
};
int main()
{
 programmer p1, p2;
 cout<<"Enter Information of Programmer-1:\n";
 p1.getperson();
 p1.get_emp();
 p1.getlang();
 cout<<"\n\nEnter Information of Programmer-2:\n";
 p2.getperson();
 p2.get_emp();
 p2.getlang();
 cout<<"\nInformation of Programmer-1:\n";
 p1.putperson();
 p1.put_emp();
 p1.putlang();
 cout<<"\nInformation of Programmer-2:\n";
 p2.putperson();
 p2.put_emp();
 p2.putlang();
 return 0;
}
