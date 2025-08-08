//Program to write and read array of objects in file using read and write function.
 #include<iostream>
 #include<fstream>
 #include<iomanip>
 using namespace std;
 class student
 {
  private:
  int roll_no;
  char name[30];
  char course[25];
  public:
  void getData(void)
   {
   	 cout<<endl;
  	 cout<<"Enter Roll No: ";cin>>roll_no;
  	 cout<<"Enter Name: ";
  	 fflush(stdin);
  	 gets(name);
  	 cout<<"Enter Course: ";gets(course);
   }
   void displayData(void)
    {
	 cout.setf(ios::adjustfield,ios::left);
	 cout<<setw(8)<<roll_no;
	 cout<<setw(30)<<name<<setw(25)<<course<<endl;
	}
 };
 //Main Program
 int main()
 {
 	student stud[5];   //create array of objects
 	ofstream fout;  //output stream objects for file
 	fout.open("Students",ios::out);  //open file in write mode
 	if(!fout)
 	{
 	 cout<<"Error in creating a file.."	<<endl;
 	 return 0;
    }  
    cout<<"\nFile created successfully.."<<endl;
    //write 5 objects into a file
    for(int i=0; i<5; ++i)
    {
     stud[i].getData();  //read from user
     fout.write((char*)&stud[i],sizeof(stud[i]));  //write object into a file
	}
	fout.close();  //close a file
	cout<<"\nFile saved and closed successfully.."<<endl;
	//Reopen file in input mode and read data
	ifstream fin;   //input stream object for A FILE
	//again open a file in a read mode
	fin.open("students",ios::in);
	if(!fin)
	{
	 cout<<"Error in opening a file..";
	 return 0;	
	}
	//read objects data from a file
	cout<<"\nList of students:\n";
	cout<<"R_No.  Name of Student                 Course\n";
	for(int i=0;i<5;++i)
	{
	 fin.read((char*)&stud[i],sizeof(stud[i]));
	 stud[i].displayData();   //display object
	}
	//close a file
	fin.close();
	return 0;
 }
 
