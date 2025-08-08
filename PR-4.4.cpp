//Practical No.4.4
//Program to find missing numbers between 1 to n
//Class:SYCM-1      Roll no:15

#include <iostream>
using namespace std;
int main() 
{
	int i,arr[50],n,total,missing;
	cout<<"Enter value of n: ";
	cin>>n;
	cout<<"Enter numbers from 1 to "<<n<<" with one missing number:\n";
	for(i=0;i<n-1;++i)
	{
		cin>>arr[i]; //Read n-1 numbers in array
	}
	total=(n*(n+1))/2; //find total of 1 to n numbers
	                  /*total=0;
	                  for(i=1;i<=10;++i)
	                  {total=total+i;} */
    missing=total; //assume total as missing number
	for(i=0;i<n-1;i++)	                  
	{
		missing=missing-arr[i]; //Find missing number
	}
	cout<<"Missing number : "<<missing;
	cout<<"\n";
	return 0;
}
