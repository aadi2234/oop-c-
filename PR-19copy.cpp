#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char line[80];
	ifstream fin; //input file stream obj.
	ofstream fout; //output file stream obj.
	fin.open("name.txt"); //open src ile in output mode
	fout.open("dest_file.cpp"); //open dest. ile in input mode
	if(!fin) //if file not opened
	{
		cout<<"\nFile does not exist....";
	}
	else //file open successfully
	{
		//Read from src file & write into dest. file
		while(!fin.eof()) //upto end-of-file of src file
		{
			fin.getline(line,80); //Read from src file & write into dest file
			fout<<line<<endl; //write into dest file  
		}
		fin.close();
		cout<<"\nFile copied successfull....";
	}
	fout.close();
	return 0;
}
