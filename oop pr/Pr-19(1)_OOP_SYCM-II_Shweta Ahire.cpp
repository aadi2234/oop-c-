/*Practical No.19.1
Program-1:Program to write and read data in a file
 Class:SYCM:II     Roll No:03       Course:Object Oriented Programing*/
 #include<iostream>
 #include<fstream>
 using namespace std;
 int main()
 {
 	char name[15];
 	fstream fp; //Creating file pointer object of fstream class
 	//create open a file and write to filr
 	fp.open("names.txt",ios::out);//creating new file in output(write) mode
 	if(!fp)//check whwther file exist
 	{
 	 cout<<"File creation failed"	;
	}
	else
	{
	 cout<<"Enetr 5 Names:\n";
	 for(int i=1;i<=5;++i)
	 {
	  cin.getline(name,15);
	  fp<<name<<endl;  //Writing to file
	 }
	 fp.close(); //closing file
	 cout<<"\nFile created & Data saved successfully...";
	}
	//open a file and read from a file
	fp.open("names.txt",ios::in); //open a file in input(read) mode
	if(!fp)
	//checking whether file exist
	{
	 cout<<"No such file";
	}
	else
	{
	 char ch;
	 cout<<"\n\nData in file...\n";
	 while(!fp.eof()) //Read upto end of file
	 {
	  fp>>name;  //Reading character from file
	  cout<<name<<endl; //Display character
	 }
	 fp.close(); //closing file
	}
	return 0;
 }
 
 
