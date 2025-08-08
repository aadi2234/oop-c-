//Practical No.3.4
//Print the Pyramid of stars(*)
//Class:SYCM-1      Roll no:15
#include <iostream>
using namespace std;
int main() 
{
	int i,j,no,rows,space;
	cout<<"Enter the number of rows:";
	cin>>rows;
	no=rows;
	for(i=1;i<=rows;++i)
	{
		for(space=1;space<=no;++space)
		{
			cout<<" ";
	    }
		for(j=1;j<=i;++j)
		{
			cout<<"* ";
		}
		cout<<"\n";
		no--;
    }
	
}
