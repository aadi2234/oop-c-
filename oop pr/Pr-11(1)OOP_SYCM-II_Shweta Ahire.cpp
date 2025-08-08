//Practical no 11.1
//Program to implement single inheritence using student-marks class
//class-SYCM-II     Roll no:03     Course:OOP
#include<iostream>
using namespace std;
class student
{
private:    //Data members  
   int roll_no;
   char name[20];
public:     //Member functions
	void getstudent(void)
	{
		cout<<"Enter Roll No:";
		cin>>roll_no;
		cout<<"Enter Name:";
		fflush(stdin);
		gets(name);
	}
	void display_student(void)
	{
	    cout<<"Roll No:"<<roll_no<<"\n";
		cout<<"Name:"<<name<<"\n";	
	}
};
//Derived class definition
class marks:public student
//Derived class
{
private:
	int m1,m2,m3;
	int total;
	float percentage;
public:
	void getmarks(void)
	{
		cout<<"Enter marks of 3 subjects: ";
		cin>>m1>>m2>>m3;
		total=m1+m2+m3;
		percentage=(total*100)/300.0;
	}
//Member function definition
  void display_marks(void)	
  {
  	cout<<"Subject-1: "<<m1<<"\n";
  	cout<<"Subject-2: "<<m2<<"\n";
  	cout<<"Subject-3: "<<m3<<"\n";
  	cout<<"Total Marks: "<<total<<"\n";
  	cout<<"Percentage: "<<percentage<<"%\n";
  }
};
int main()
{
	marks s;
	cout<<"Enter information of student: \n";
	s.getstudent();   //Base function call
	s.getmarks();     //Derived function call
	cout<<"Information of student: \n";
	s.display_student();
	s.display_marks();
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	























