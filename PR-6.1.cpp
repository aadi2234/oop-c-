//Practical No.6
//Program to accept and display data of one book
//Class:SYCM-1      Roll no:15

#include <iostream>
using namespace std;
class book
{
	//Data member
	private:
	char name[50];
	char author[50];
	float price;
	//member functions
   	public:
void getdata(void)
{
	cout<<"Enter Book Name: ";
	gets(name);
	cout<<"Enter Book Author: ";
	gets(author);
	cout<<"Enter Book Price: ";
	cin>>price;	
}
void display(void)
{
  cout<<"\nBook Name: "<<name;
  cout<<"\nBook Author: "<<author;
  cout<<"\nBook Price: "<<price;	
}
}; //End of class
int main()
{
	book bk;
	cout<<"Enter Information of Book:\n\n";
	bk.getdata(); //call member function
	cout<<"\nInformation of Book:";
	bk.display(); //call member function
	return 0;
}




