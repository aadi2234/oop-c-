//SYCM-I 		Roll No:15
//Date of Performance : 06/10/2022
//Practical no: 10.2
//Title : Accept and display data for 3 products using constructor overloading
#include<iostream>
#include<string.h>
using namespace std;
class product
{
	private:
	int prod_id;
	char prod_name[25];
	float prod_price;
	public:
	//Default constructor
	product(void)
	{
		prod_id=1001;
		strcpy(prod_name,"Keyboard");
		prod_price=800;
	}
	//parameterized constructor-1
	product(int id)
	{
		prod_id=id;
		strcpy(prod_name,"Printer");
		prod_price=8000;
	}
	//parameterized constructor-2
	product(int id,char name[])
	{
		prod_id=id;
		strcpy(prod_name,name);
		prod_price=10000;
	}
	//parameterized constructor-3
	product(int id,char name[],float price)
	{
		prod_id=id;
		strcpy(prod_name,name);
		prod_price=price;
	}
	//Member function
	void display(void)
	{
		cout<<"ID: "<<prod_id<<endl;
		cout<<"Name: "<<prod_name<<endl;
		cout<<"Price: "<<prod_price<<endl;
	}
};
//Main function
int main()
{
	int id;
	char name[25];
	float price;
	cout<<"Enter Information of Product-1:\n";
	cout<<"Enter ID:";cin>>id;
	product p1(id);
	cout<<"\nEnter Information of Product-2:\n";
	cout<<"Enter ID:";cin>>id;
	cout<<"Enter Name: ";
	fflush(stdin);
	gets(name);
	product p2(id,name);
	cout<<"\nEnter Information of Product-3:\n";
	cout<<"Enter ID:";cin>>id;
	fflush(stdin);
	cout<<"Enter Name: ";
	fflush(stdin);
	gets(name);
	cout<<"Enter Price:";cin>>price;
	product p3(id,name,price);
	cout<<"\nProduct-1:\n";
	p1.display();
	cout<<"\nProduct-2:\n";
	p2.display();
	cout<<"\nProduct-3:\n";
	p3.display();
	return 0;
}
