/*Practical No.14
Program-1:Program to accept & display information of book using pointer to object */
using namespace std;
#include <iostream>
class book
{
private:
char book_name[25];
char author_name[20];
int price;
public:
//Member function-1
void get_book(void)
{
cout<<"Enter Book Name: ";
fflush(stdin);gets(book_name);
cout<<"Enter Author: ";
fflush(stdin);gets(author_name);
cout<<"Enter Price: "; cin>>price;
}
//Member function
void display(void)
{
cout<<"\nBook Name: "<<book_name;
cout<<"\nAuthor: "<<author_name;
cout<<"\nPrice: "<<price;
}
};
//Main function
int main()
{
book bk,*ptr; // Declare Pointer & object
ptr=&bk; // Pointer to object
cout<<"Enter Information of Book:\n";
ptr->get_book(); //Function call using pointer
cout<<"\nInformation of Book:";
ptr->display();
return 0;
}


