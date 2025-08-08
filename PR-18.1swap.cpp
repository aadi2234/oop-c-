#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	void swap(int *px,int *py);
	void swap(float *pn1,float *pn2);
	void swap(char *pch1,char *pch2);
	int x,y;
	float n1,n2;
	char ch1,ch2;
	cout<<"\nEnter 2 integers:-";
	cin>>x>>y;
	swap(&x,&y); //function call
	cout<<"Integers after swapping:\n";
	cout<<"x="<<x<<"\ty="<<y;
	cout<<"\n\nEnter 2 float values:-";
	cin>>n1;
	cin>>n2;
	swap(&n1,&n2); //function call
	cout<<"\nFloating point after swapping:\n";
	cout<<"x="<<n1<<"\ty="<<n2;
	fflush(stdin);
	cout<<"\n\nEnter 2 Characters:-";
	cin>>ch1;
	cin>>ch2;
	swap(&ch1,&ch2); //function call
	cout<<"\nCharacters after swapping:\n";
	cout<<"Ch1="<<ch1<<"\tCh2="<<ch2;
	return 0;
}
//Function to swap 2 integer values
void swap(int *px,int *py)
{
	int temp;
	temp=*px;
	*px=*py;
	*py=temp;
}
//Function to swap 2 float values
void swap(float *pn1,float *pn2)
{
	float temp;
	temp=*pn1;
	*pn1=*pn2;
	*pn2=temp;
}
//Function to swap 2 character values
void swap(char *pch1,char *pch2)
{
	char temp;
	temp=*pch1;
	*pch1=*pch2;
	*pch2=temp;
}

