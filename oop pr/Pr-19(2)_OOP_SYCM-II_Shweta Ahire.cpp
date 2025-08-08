/*Practical No.19.2
Program-1:Program to read from a text file and then write in another text file(copy file)
 Class:SYCM:II     Roll No:03       Course:Object Oriented Programing*/
using namespace std;
#include <iostream>
#include <fstream>
int main()
{
char line[80]; //Array to read a line of text
ofstream fout; //output stream file object to write
ifstream fin ; //Intput stream file object to read
fin.open("names.txt");//Open source file in input mode
fout.open("target.txt"); // Open dest file in output mode
char ch;
if( !fin )// Checking whether file exist
{
cout<<" file does not exist....\n";
}
else
{
while(!fin.eof()) //loop will run till EOF of source file
{
fin.getline(line,80); //read data from source file
fout<<line<<endl; //write data to target file
}
fin.close(); //close input file
fout.close(); //close output file
cout<<"file copied successfulyy....\n\n";
}
return 0;
}
