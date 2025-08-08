//Practical No.2 
//Program to check whether a number is palindrome or not
//Class:SYCM-1      Roll no:15

#include <iostream>
using namespace std;
int main()
{
	int no,rev,digit,original;
	cout<<"Enter a number:";
	cin>>no;
	rev=0,
	original=no;
	while(no!=0)
	{
		digit=no%10;
		rev=(rev)*10+digit;
		no=no/10;
	}
	//Check whether a number is palindrome or not
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
