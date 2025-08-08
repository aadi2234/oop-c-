//Practical No.3.3
//Print (half pyramid) pattern of natural numbers.
//Class:SYCM-1      Roll no:15

#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	int r,c,no=1;
	for(r=1;r<=5;++r)
	{
		for(c=1;c<=r;++c)
		{
			cout<<" "<<no;
			no++;
		}
	cout<<"\n";
	}
}
