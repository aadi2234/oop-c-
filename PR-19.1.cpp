//Program to write & read data in a file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char name[25];
	fstream fp;  //file stream object
	fp.open("name.txt",ios::out); //open a file into a write mode
	if(!fp) //if file not created/opened
	{
		cout<<"\nFile creation error...\n";
	}
	else
	{
		cout<<"\nEnter 5 names:\n";
		for(int i=1;i<=5;++i)
		{
			cin.getline(name,25); //Accept name
			fp<<name<<"\n";
		}
	fp.close(); //close a file
	cout<<"\nname.txt file created and data written successfully.....\n";
	}
	fp.open("name.txt",ios::in); //open a file into a read mode
	if(!fp) //if file created/opened
	{
		cout<<"\nFile doesn`t exist...\n";
	}
	else
	{
		cout<<"\nList of 5 names:\n";
		while(!fp.eof())  //check upto end of file
		{
			fp.getline(name,25);
			cout<<name<<"\n";
		}
	fp.close();
	}
	return 0;
}
