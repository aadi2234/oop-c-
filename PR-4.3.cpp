//Practical No.4.3
//Program to find smallest & second smallest numbers in an array
//Class:SYCM-1      Roll no:15
#include <iostream>
using namespace std;
int main() 
{
	int arr[10],n,i,small1,small2;
	n=10;
	cout<<"Enter 10 Elements in array:\n";
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	small1=small2=arr[0];
	for(i=0;i<n;++i)
	{
		if(arr[i]<small1)
		{
			small2=small1;
			small1=arr[i];
		}
	}
	cout<<"Smallest="<<small1;
	cout<<"\nSecond Smallest="<<small2;
	cout<<"\n";
	return 0;
}
