//Q.1-Write a program to check given number is palindrome or not.
#include <iostream>
using namespace std;
int main()
{
	int no,rev=0,digit,original;
	cout<<"Enter a number:";
	cin>>no;
	original=no;
	while(no!=0)
	{
		digit=no%10;
		rev=rev*10+digit;
		no=no/10;
	}
	if(rev==original)
	{
		cout<<" Number "<<original<<" is Palindrome";
	}
	else
	{
		cout<<" Number "<<original<<" is not Palindrome";
	}
	return 0;
}
//a. Write a C++ program to print multiplication table of given number.
#include <iostream>
using namespace std;
int main() 
{
	int no,i,prod;
	cout<<"Enter Multiplication Table no. :";
	cin>>no;
	for(i=1;i<=10;++i)
	{
		prod=no*i;
		cout<<"\n"<<prod;
	}
}
