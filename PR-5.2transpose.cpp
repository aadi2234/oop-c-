//Practical No.5.2
//Program to find Transpose of a 2*2 Matrix
//Class:SYCM-1      Roll no:15

#include <iostream>
using namespace std;
int main() 
{
	int i,j,Matrix[2][2];
	cout<<"Enter 2*2 matrix element:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>Matrix[i][j];
		}
	}
	cout<<"Transpose of 2*2 matrix:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<" "<<Matrix[j][i];
		}
	cout<<endl;
	}
}

