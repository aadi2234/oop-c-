//Practical No.4.1
//Program to find median of two sorted arrays
//Class:SYCM-1      Roll no:15

#include <iostream>
using namespace std;
int main() 
{
	int arr1[50],arr2[50],arr3[100];
	int n1,n2,n,i,j,middle1,middle2,middle,median1;
	float median2;
	//Accept elements in Array-2
	cout<<"How many elements in an array-1 ? ";
	cin>>n1;
	cout<<"Enter "<<n1<<" elements: ";
	for(i=0;i<n1;++i)
	{
		cin>>arr1[i];
	}
	//Accept elements in Array-2
	cout<<"How many elements in an array-2 ? ";
	cin>>n2;
	cout<<"Enter "<<n2<<" elements: ";
	for(i=0;i<n2;++i)
	{
		cin>>arr2[i];
	}
	//Merge array1 & array2 in array3
	for(i=0;i<n1;++i)
	{
		arr3[i]=arr1[i]; //copy elements of array1 
    }
    j=0;
    for(i=n1;i<n1+n2;++i)
    {
    	arr3[i]=arr2[j]; //copy elements of array2
    	++j;
	}
	//Display elements of merged Array
	cout<<"Merged Array:\n";
	for(i=0;i<n1+n2;++i)
	{
	cout<<arr3[i]<<" ";
    }
    //find median
    n=n1+n2; //Size of merged array
    if(n%2!=0) //if no. of merged elements is odd
    {
    	middle=(n-1)/2; //middle element
    	median1=arr3[middle];
    	cout<<"\nMedian="<<median1;
	}
    if(n%2==0) //if no. of merged elements is even
    {
    middle1=n/2; //middle1 element
    middle2=middle1-1; //middle2 element
    median2=(arr3[middle1]+arr3[middle2])/2.0;
    cout<<"\nMedian="<<median2;
    }
    cout<<"\n";
    return 0;
}
