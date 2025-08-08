//Practical No.5.2
//Program to find Transpose of a 2*2 Matrix
//Class:SYCM-1      Roll no:15

#include <iostream>
using namespace std;
int main() 
{
	int i,j,Matrix[3][4];
	cout<<"Enter 3*4 matrix element:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>Matrix[i][j];
		}
	}
	cout<<"Transpose of 3*4 matrix:\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<Matrix[j][i]<<" ";
		}
		cout<<endl;
   }
	return 0;
}

