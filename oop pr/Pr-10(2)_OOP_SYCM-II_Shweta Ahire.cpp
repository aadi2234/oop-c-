//Practical No.10 .2
//Program to define a class Product. Accept & display 3 products using constructor overloading (Multiple constructors)
using namespace std;
#include <iostream>
#include <string.h>
class product
{
private:
int prod_id;
char prod_name[15];
float prod_price;
public:
//parameterized construcor-1
product(int id,char name[],float price)
{
prod_id=id;
strcpy(prod_name,name);
prod_price=price;
}
//parameterized construcor-2
product(int id,char name[])
{
prod_id=id;
strcpy(prod_name,name);
prod_price=1000; //Default vale
}
//parameterized construcor-3
product(int id)
{
prod_id=id;
strcpy(prod_name,"Printer");
prod_price=7500;
}
//Member function
void display(void)
{
cout<<"Product Id: "<<prod_id<<"\n";
cout<<"Name: "<<prod_name<<"\n";
cout<<"Price: "<<prod_price<<"\n";
}
}; //End of class
//Main function
int main()
{
int id;
char name[15];
float price;
cout<<"Product-1:\n";
cout<<"Enter Product id: "; cin>>id;
cout<<"Enter Name: ";
fflush(stdin); gets(name);
cout<<"Enter Price: "; cin>>price;
product p1(id,name,price); //Call parameterized constructor-1
cout<<"Product-2:\n";
cout<<"Enter Product id: "; cin>>id;
cout<<"Enter Name: ";

fflush(stdin); gets(name);
product p2(id,name); //Call parameterized constructor-2
cout<<"Product-3:\n";
cout<<"Enter Product id: "; cin>>id;
product p3(id); //Call parameterized constructor-2
cout<<"\nInformation of 3 products:\n";
cout<<"Product-1:\n";
p1.display();
cout<<"\nProduct-2:\n";
p2.display();
cout<<"\nProduct-3:\n";
p3.display();
return 0;
}
