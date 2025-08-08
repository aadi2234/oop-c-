//Program to compare two strings using == operator overloading
#include <iostream>
#include <string.h>
using namespace std;
//class decleration
class Nstring
{
	//Data members
	private:
	char name[15];
	public:
	//Member function
	void get_string(void)
	{
	cin>>name;
	}
	//Operator == function
	int operator == (Nstring str2)
	{
	if(strcmpi(name , str2.name)== 0)
	return 1; //Return True value
	else
	return 0; //Return false value
	}
};
//Main function
int main()
{
	Nstring str1, str2; //create objects
	cout<<"Enter string-1: ";
	str1.get_string();
	cout<<"Enter string-2: ";
	str2.get_string(); //Comparison of objects
	if(str1 == str2) //Call operator == function
	cout<<"Strings are same";
	else
	cout<<"Strings are different";
	return 0;
}

/*Output:-
Enter string-1: Mukunda
Enter string-2: Bhalerao
Strings are different
*/
