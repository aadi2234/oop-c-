#include <iostream>
using namespace std;
int main()
{
	int i,smallest,ar[5];
	cout<<"Enter array elements:-\n";
	for(i=0;i<5;++i)
	{
		cin>>ar[i];
	}
	smallest=ar[0];
	for(i=0;i<5;++i)
	{
		if(ar[i]<smallest)
		{
			smallest=ar[i];
		}
	}
	cout<<"\nSmallest No:-"<<smallest;
}
