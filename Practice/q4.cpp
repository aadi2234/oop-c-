/*Q-4 Write a C++ program to declare a class-“Book” having data members book_name, author and price. 
Accept and Display data for two books.*/
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
	fflush(stdin);
	gets(name);
	cout<<"Enter Book Author: ";
	fflush(stdin);
	gets(author);
	fflush(stdin);
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
	book bk1,bk2;
	cout<<"Enter Information of Book1:\n\n";
	bk1.getdata(); //call member function
	cout<<"\nInformation of Book1:\n";
	bk1.display(); //call member function
	cout<<"\n\nEnter Information of Book:\n\n";
	bk2.getdata(); //call member function
	cout<<"\nInformation of Book2:\n";
	bk2.display(); //call member function
	return 0;
}
//a. Write a C++ program to print multiplication table of given number.

#include <iostream>
using namespace std;
int main()
{
	int  i,prod,no;
	cout<<"Enter multiplication no.:";
	cin>>no;
	cout<<"\nMultiplication table of "<<no<<endl;
	for(i=1;i<=10;++i)
	{
		prod=no*i;
		cout<<"\n"<<prod;
	}
	return 0;
}
