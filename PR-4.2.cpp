//Practical No.4.2
//Program to find repeated elements in an array
//Class:SYCM-1      Roll no:15
#include <iostream>
using namespace std;
int main() 
{
	int arr[100],i,j,n;
	n=10;
	cout<<"Enter 10 elements in Array:";
	for(i=0;i<n;++i)
    {
    	cin>>arr[i];
	}
	cout<<"Repeating elements are: ";
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<arr[i]<<" ";
			}
		}
	}
	return 0;
}
