#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char line[80];
	ifstream fin1,fin2; //input file stream obj.
	ofstream fout; //output file stream obj.
	fin1.open("name.txt"); //open src file input mode
	fout.open("merge_file.cpp"); //open dest. file in output mode
	if(!fin1) //if file not opened
	{
		cout<<"\nFile does not exist....";
	}
	else //file open successfully
	{
		//Read from src file & write into merge. file
		while(!fin1.eof()) //upto end-of-file of src file
		{
			fin1.getline(line,80); //Read from src file & write into dest file
			fout<<line<<endl; //write into dest file  
		}
		fin1.close();
		cout<<"\nFile merged successfull....";
	}
	fin2.open("name.txt"); //open src file input mode
	if(!fin2) //if file not opened
	{
		cout<<"\nFile does not exist....";
	}
	else //file open successfully
	{
		//Read from src file & write into merge. file
		while(!fin2.eof()) //upto end-of-file of src file
		{
			fin2.getline(line,80); //Read from src file & write into dest file
			fout<<line<<endl; //write into dest file  
		}
		fin2.close();
		cout<<"\nFile merged successfull....";
	}
	fout.close();
	return 0;
}
