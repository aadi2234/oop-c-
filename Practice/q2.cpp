//Q-2 Write a C++ program to find transpose of 4*3 matrix
#include <iostream>
using namespace std;
int main()
{
	int i,j,mat[4][3];
	cout<<"Enter 4*3 matrix element:\n";
	for(i=0;i<4;++i)
	{
		for(j=0;j<3;++j)
		{
			cin>>mat[i][j];
		}
	}
	cout<<"Transpose matrix:\n";
	for(i=0;i<3;++i)
	{
		for(j=0;j<4;++j)
		{
			cout<<" "<<mat[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/
//a. Write a program to check given year is leap or not.
#include <iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter 4-digit year:";
	cin>>year;
	if(year%4==0)
	{
		cout<<year<<" Year is a leap year....";
	}
	else
	{
		cout<<year<<" Year is not a leap year....";
	}
	return 0;
}
