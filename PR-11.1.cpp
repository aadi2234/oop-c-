//SYCM-I 		Roll No:15
//Date of Performance : 10/10/2022
//Practical no: 11.1
//Title : Program to implement single inheritance
#include<iostream>
using namespace std;
class student
{
	private:
	int roll_no;
	char name[25];
	public:
	//member function-01
	void get_data(void)
	{
		cout<<"Enter roll no: "; cin>>roll_no;
		cout<<"\nEnter name: ";
	    cin>>name;
	}
	//member function-02
	void display(void)
	{
		cout<<"Roll no: "<<roll_no;
		cout<<"\nName: "<<name<<endl;
    }
};
//Derived class
class marks:public student
{
	private:
	int m1,m2,m3,total;
	float percent;
	public:
		void get_marks(void)
		{
			cout<<"Enter marks of 3 subject: ";
			cin>>m1>>m2>>m3;
			total=m1+m2+m3;
			percent=total/3.0;
		}
		//member function 2
		void put_marks(void)
		{
			cout<<"Total Marks= "<<total<<endl;
			cout<<"% marks= "<<percent<<"%"<<endl;
		}
};
//main function
int main()
{
	marks S;  //object of derived class
	cout<<"\nEnter Information of Student:\n";
	S.get_data();
	S.display();
   cout<<"\nResult of Student:\n";
   S.get_marks();
   S.display();
   S.put_marks();
   return 0;
}
