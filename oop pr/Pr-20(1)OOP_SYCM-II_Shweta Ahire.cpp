/*Practical No.20
Program-1:Program to write and read object in a file using read and write function.
 Class:SYCM:II     Roll No:03       Course:Object Oriented Programing*/
 #include<iostream>
 #include<fstream>
 using namespace std;
 class student
 {
 	private:
 		int roll_no;
 		char name[30];
 		char course[25];
 	public:
 		void getdata(void)
 		{
 		 cout<<"Enter Roll No: "	;cin>>roll_no;
 		 cout<<"Enter Name: ";
 		 fflush(stdin);
 		 gets(name);
 		 cout<<"Enter Course: ";
 		 fflush(stdin);
 		 gets(course);
 	    }
 		 void displayData(void)
 		 {
 		  cout<<"Roll No: "<<roll_no<<"\nName: "<<name;
 		  cout<<"\nCourse: "<<course<<endl;
		 }
 };
 //main program
 int main()
 {
 	student stud;   //create object
 	ofstream fout;   //output stream object for file
 	//open file in write mode
 	fout.open("List.dat",ios::out);
 	if(!fout)
 	{
 	 cout<<"Error in creating file.."<<endl;
 	 return 0;
	 }
	 cout<<"\nfile created successfully.."<<endl;
	 //write into file
	 stud.getdata();  //read from user
	 fout.write((char*)&stud,sizeof(stud)); //write object into file
	 fout.close();  //close file
	 cout<<"\nFile saved and closed successfully.."<<endl;
	 //Reopen file in inputr mode and read data
	 ifstream fin;  //input stream object for a file
	 //again open a file in read mode
	 fin.open("List.dat",ios::in);
	 if(!fin)
	 {
	  cout<<"Error in opening file..";
	 }
	 //read data from file
	 fin.read((char*)&stud,sizeof(stud));
	 //display data on monitor
	 cout<<"Contents of file:\n";
	 stud.displayData();
	 //close a file
	 fin.close();
	 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
