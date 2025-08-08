#include <iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter 4-Digit Year:";
	cin>>year;
	if(year%4==0)
	{
		cout<<year<<" is a leap Year";
	}
	else
	{
		cout<<year<<" is not a leap Year";
	}
return 0;
}
