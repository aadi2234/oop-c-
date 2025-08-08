#include <iostream>
using namespace std;
int main()
{
	int no,i,sum;
	float avg;
	cout<<"Enter 10 integers: ";
	sum=0;
	for(i=1;i<=10;++i)
	{
		cin>>no;
		sum=sum+no;
	}
	avg=(float)sum/10;
	cout<<"\nSum="<<sum;
	cout<<"\n";
	cout<<"\nAverage="<<avg;
return 0;
}
