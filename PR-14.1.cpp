//SYCM-I 		Roll No:15
//Date of Performance : 07/11/2022
//Practical no: 14.1
//Title : Program to implement Pointer to Object
#include<iostream>
using namespace std;
class Book
{
	private:
	char book_name[25];
	char author[25];
	float price;
	public:
	void accept(void)
	{
		cout<<"Enter Title of book:"; gets(book_name);
		cout<<"Enter Author of book:"; gets(author);
		cout<<"Enter Price:"; cin>>price;
	}
	void display(void)
	{
		cout<<"Title of book:"<<book_name;
		cout<<"\nAuthor of book:"<<author;
		cout<<"\nPrice:"<<price;
	}
};
int main()
{
	Book bk;  //Create object
	Book *ptr; //Pointer var.
	ptr=&bk; //Pointer to object
	cout<<"Enter Information of book:\n";
	ptr->accept();
	cout<<"Information of book:\n";
	ptr->display();
	return 0;
}
